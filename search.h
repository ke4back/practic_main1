#pragma once
#include "Routes.h"


namespace practicmain1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for search
	/// </summary>


	public ref class search : public System::Windows::Forms::Form
    {
    public:
        Form^ obj;      
        search(void)
        {
            InitializeComponent();
            LoadRoutesFromFile();
            UpdateDataGridView();
            
            maskedTextBox_date->Mask = "00/00/0000";
            maskedTextBox_time->Mask = "00:00";
        }
        search(Form^ obj2)
        {
            obj = obj2;
            InitializeComponent();
            allRoutes = gcnew List<Route^>();
            filteredRoutes = gcnew List<Route^>();
            LoadRoutesFromFile();
            UpdateDataGridView();
        }

    protected:
        ~search()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        List<Route^>^ allRoutes;
        List<Route^>^ filteredRoutes;

        void LoadRoutesFromFile()
        {
            allRoutes = gcnew List<Route^>();
            filteredRoutes = gcnew List<Route^>();
            try
            {
                StreamReader^ reader = gcnew StreamReader("routes.txt", System::Text::Encoding::GetEncoding(1251));
                
                int index = 1;

                while (!reader->EndOfStream)
                {
                    String^ line = reader->ReadLine();
                    array<String^>^ parts = line->Split(' ');

                    if (parts->Length >= 6)
                    {
                        Route^ route = gcnew Route();
                        route->Index = index;
                        route->Number = Int32::Parse(parts[0]);
                        route->Destination = parts[1];
                        route->Date = parts[2];
                        route->Time = parts[3];
                        route->SeatsCount = Int32::Parse(parts[4]);
                        route->Price = Int32::Parse(parts[5]);
                        
                        allRoutes->Add(route);
                        filteredRoutes->Add(route);
                    }
                    index++;
                }
                reader->Close();
            }
            catch (Exception^ ex)
            {
                MessageBox::Show("Ошибка загрузки данных: " + ex->Message, 
                               "Ошибка", 
                               MessageBoxButtons::OK, 
                               MessageBoxIcon::Error);
            }
        }

        void UpdateDataGridView()
        {
            main_table->Rows->Clear();
            
            for (int i = 0; i < filteredRoutes->Count; i++)
            {
                Route^ route = filteredRoutes[i];
                main_table->Rows->Add(
                    route->Index,
                    route->Number,
                    route->Destination,
                    route->Date,
                    route->Time,
                    route->SeatsCount,
                    route->Price
                );
            }
        }

        bool ValidateInput()
        {
            wrong_data->Visible = false;
            bool isValid = true;

            if (check_price->Checked)
            {
                int price;
                if (!Int32::TryParse(maskedTextBox_price->Text, price) || price <= 0 || price > 100000)
                {
                    wrong_data->Visible = true;
                    isValid = false;
                }
            }

            if (check_number->Checked)
            {
                int number;
                if (!Int32::TryParse(maskedTextBox_number->Text, number) || number <= 0 || number > 9999)
                {
                    wrong_data->Visible = true;
                    isValid = false;
                }
            }

            if (check_date->Checked)
            {
                DateTime date;
                if (!DateTime::TryParse(maskedTextBox_date->Text, date))
                {
                    wrong_data->Visible = true;
                    isValid = false;
                }
            }

            if (check_time->Checked)
            {
                TimeSpan time;
                if (!TimeSpan::TryParse(maskedTextBox_time->Text + ":00", time))
                {
                    wrong_data->Visible = true;
                    isValid = false;
                }
            }

            if (check_seats_count->Checked)
            {
                int count;
                if (!Int32::TryParse(maskedTextBox_count->Text, count) || count <= 0 || count > 200)
                {
                    wrong_data->Visible = true;
                    isValid = false;
                }
            }

            return isValid;
        }

        void PerformSearch()
        {
            if (!ValidateInput())
                return;

            filteredRoutes->Clear();

            for each (Route ^ route in allRoutes)
            {
                bool matches = true;

                if (check_price->Checked && !String::IsNullOrEmpty(maskedTextBox_price->Text))
                {
                    int maxPrice = Int32::Parse(maskedTextBox_price->Text);
                    if (route->Price > maxPrice)
                        matches = false;
                }

                if (check_number->Checked && !String::IsNullOrEmpty(maskedTextBox_number->Text))
                {
                    int searchNumber = Int32::Parse(maskedTextBox_number->Text);
                    if (route->Number != searchNumber)
                        matches = false;
                }

                if (check_destination->Checked && !String::IsNullOrEmpty(maskedTextBox_dest->Text))
                {
                    if (!route->Destination->ToLower()->Contains(maskedTextBox_dest->Text->ToLower()))
                        matches = false;
                }

                if (check_date->Checked && !String::IsNullOrEmpty(maskedTextBox_date->Text))
                {
                    DateTime searchDate = DateTime::Parse(maskedTextBox_date->Text);
                    DateTime routeDate = DateTime::Parse(route->Date);

                    if (date_coincidence->Checked && route->Date != maskedTextBox_date->Text)
                        matches = false;
                    else if (date_earlier->Checked && routeDate >= searchDate)
                        matches = false;
                    else if (date_later->Checked && routeDate <= searchDate)
                        matches = false;
                }

                if (check_time->Checked && !String::IsNullOrEmpty(maskedTextBox_time->Text))
                {
                    TimeSpan searchTime = TimeSpan::Parse(maskedTextBox_time->Text + ":00");
                    TimeSpan routeTime = TimeSpan::Parse(route->Time + ":00");

                    if (time_coincidence->Checked && route->Time != maskedTextBox_time->Text)
                        matches = false;
                    else if (time_earlier->Checked && routeTime >= searchTime)
                        matches = false;
                    else if (time_later->Checked && routeTime <= searchTime)
                        matches = false;
                }

                if (check_seats_count->Checked && !String::IsNullOrEmpty(maskedTextBox_count->Text))
                {
                    int minSeats = Int32::Parse(maskedTextBox_count->Text);
                    if (route->SeatsCount < minSeats)
                        matches = false;
                }

                if (matches)
                    filteredRoutes->Add(route);
            }

            UpdateDataGridView();
        }

    private:
        System::Windows::Forms::DataGridView^ main_table;
        System::Windows::Forms::CheckBox^ check_price;
        System::Windows::Forms::CheckBox^ check_number;
        System::Windows::Forms::CheckBox^ check_date;
        System::Windows::Forms::CheckBox^ check_time;
        System::Windows::Forms::CheckBox^ check_destination;
        System::Windows::Forms::CheckBox^ check_seats_count;
        System::Windows::Forms::DataGridViewTextBoxColumn^ index;
        System::Windows::Forms::DataGridViewTextBoxColumn^ number;
        System::Windows::Forms::DataGridViewTextBoxColumn^ destination;
        System::Windows::Forms::DataGridViewTextBoxColumn^ date;
        System::Windows::Forms::DataGridViewTextBoxColumn^ time;
        System::Windows::Forms::DataGridViewTextBoxColumn^ seats_count;
        System::Windows::Forms::DataGridViewTextBoxColumn^ price;
        System::Windows::Forms::Label^ search_info;
        System::Windows::Forms::Button^ search_button;
        System::Windows::Forms::Button^ search_reset;
        System::Windows::Forms::CheckBox^ time_later;
        System::Windows::Forms::CheckBox^ time_earlier;
        System::Windows::Forms::CheckBox^ time_coincidence;
        System::Windows::Forms::CheckBox^ date_later;
        System::Windows::Forms::CheckBox^ date_earlier;
        System::Windows::Forms::CheckBox^ date_coincidence;
        System::Windows::Forms::Button^ search_back;
        System::Windows::Forms::Button^ search_exit;
        System::Windows::Forms::MaskedTextBox^ maskedTextBox_price;
        System::Windows::Forms::MaskedTextBox^ maskedTextBox_date;
        System::Windows::Forms::MaskedTextBox^ maskedTextBox_time;
        System::Windows::Forms::MaskedTextBox^ maskedTextBox_number;
        System::Windows::Forms::MaskedTextBox^ maskedTextBox_dest;
        System::Windows::Forms::MaskedTextBox^ maskedTextBox_count;
        System::Windows::Forms::Label^ wrong_data;

        System::ComponentModel::Container ^components;

        #pragma region Windows Form Designer generated code
        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
		void InitializeComponent(void)
		{
            this->main_table = (gcnew System::Windows::Forms::DataGridView());
            this->index = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->number = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->destination = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->time = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->seats_count = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->check_price = (gcnew System::Windows::Forms::CheckBox());
            this->check_number = (gcnew System::Windows::Forms::CheckBox());
            this->check_date = (gcnew System::Windows::Forms::CheckBox());
            this->check_time = (gcnew System::Windows::Forms::CheckBox());
            this->check_destination = (gcnew System::Windows::Forms::CheckBox());
            this->check_seats_count = (gcnew System::Windows::Forms::CheckBox());
            this->search_info = (gcnew System::Windows::Forms::Label());
            this->search_button = (gcnew System::Windows::Forms::Button());
            this->search_reset = (gcnew System::Windows::Forms::Button());
            this->time_later = (gcnew System::Windows::Forms::CheckBox());
            this->time_earlier = (gcnew System::Windows::Forms::CheckBox());
            this->time_coincidence = (gcnew System::Windows::Forms::CheckBox());
            this->date_later = (gcnew System::Windows::Forms::CheckBox());
            this->date_earlier = (gcnew System::Windows::Forms::CheckBox());
            this->date_coincidence = (gcnew System::Windows::Forms::CheckBox());
            this->search_back = (gcnew System::Windows::Forms::Button());
            this->search_exit = (gcnew System::Windows::Forms::Button());
            this->maskedTextBox_price = (gcnew System::Windows::Forms::MaskedTextBox());
            this->maskedTextBox_date = (gcnew System::Windows::Forms::MaskedTextBox());
            this->maskedTextBox_time = (gcnew System::Windows::Forms::MaskedTextBox());
            this->maskedTextBox_number = (gcnew System::Windows::Forms::MaskedTextBox());
            this->maskedTextBox_dest = (gcnew System::Windows::Forms::MaskedTextBox());
            this->maskedTextBox_count = (gcnew System::Windows::Forms::MaskedTextBox());
            this->wrong_data = (gcnew System::Windows::Forms::Label());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->main_table))->BeginInit();
            this->SuspendLayout();
            // 
            // main_table
            // 
            this->main_table->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
            this->main_table->AllowUserToAddRows = false;
            this->main_table->AllowUserToDeleteRows = false;
            this->main_table->AllowUserToResizeColumns = false;
            this->main_table->AllowUserToResizeRows = false;
            this->main_table->ColumnHeadersHeight = 50;
            this->main_table->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
                this->index, this->number,
                    this->destination, this->date, this->time, this->seats_count, this->price
            });
            this->main_table->Location = System::Drawing::Point(18, 302);
            this->main_table->Name = L"main_table";
            this->main_table->ReadOnly = true;
            this->main_table->Size = System::Drawing::Size(950, 319);
            this->main_table->TabIndex = 1;
            // 
            // index
            // 
            this->index->HeaderText = L"Индекс";
            this->index->Name = L"index";
            this->index->ReadOnly = true;
            this->index->Width = 50;
            // 
            // number
            // 
            this->number->HeaderText = L"Номер рейса";
            this->number->Name = L"number";
            this->number->ReadOnly = true;
            // 
            // destination
            // 
            this->destination->HeaderText = L"Пункт назначения";
            this->destination->Name = L"destination";
            this->destination->ReadOnly = true;
            this->destination->Width = 200;
            // 
            // date
            // 
            this->date->HeaderText = L"Дата";
            this->date->Name = L"date";
            this->date->ReadOnly = true;
            this->date->Width = 150;
            // 
            // time
            // 
            this->time->HeaderText = L"Время(чч:мм)";
            this->time->Name = L"time";
            this->time->ReadOnly = true;
            this->time->Width = 150;
            // 
            // seats_count
            // 
            this->seats_count->HeaderText = L"кол-во мест";
            this->seats_count->Name = L"seats_count";
            this->seats_count->ReadOnly = true;
            this->seats_count->Width = 150;
            // 
            // price
            // 
            this->price->HeaderText = L"цена";
            this->price->Name = L"price";
            this->price->ReadOnly = true;
            this->price->Width = 150;
            // 
            // check_price
            // 
            this->check_price->AutoSize = true;
            this->check_price->Location = System::Drawing::Point(29, 70);
            this->check_price->Name = L"check_price";
            this->check_price->Size = System::Drawing::Size(52, 17);
            this->check_price->TabIndex = 2;
            this->check_price->Text = L"Цена";
            this->check_price->UseVisualStyleBackColor = true;
            // 
            // check_number
            // 
            this->check_number->AutoSize = true;
            this->check_number->Location = System::Drawing::Point(388, 70);
            this->check_number->Name = L"check_number";
            this->check_number->Size = System::Drawing::Size(93, 17);
            this->check_number->TabIndex = 2;
            this->check_number->Text = L"Номер рейса";
            this->check_number->UseVisualStyleBackColor = true;
            // 
            // check_date
            // 
            this->check_date->AutoSize = true;
            this->check_date->Location = System::Drawing::Point(29, 154);
            this->check_date->Name = L"check_date";
            this->check_date->Size = System::Drawing::Size(52, 17);
            this->check_date->TabIndex = 2;
            this->check_date->Text = L"Дата";
            this->check_date->UseVisualStyleBackColor = true;
            this->check_date->CheckedChanged += gcnew System::EventHandler(this, &search::check_date_CheckedChanged);
            // 
            // check_time
            // 
            this->check_time->AutoSize = true;
            this->check_time->Location = System::Drawing::Point(388, 154);
            this->check_time->Name = L"check_time";
            this->check_time->Size = System::Drawing::Size(59, 17);
            this->check_time->TabIndex = 2;
            this->check_time->Text = L"Время";
            this->check_time->UseVisualStyleBackColor = true;
            this->check_time->CheckedChanged += gcnew System::EventHandler(this, &search::check_time_CheckedChanged);
            // 
            // check_destination
            // 
            this->check_destination->AutoSize = true;
            this->check_destination->Location = System::Drawing::Point(738, 70);
            this->check_destination->Name = L"check_destination";
            this->check_destination->Size = System::Drawing::Size(118, 17);
            this->check_destination->TabIndex = 2;
            this->check_destination->Text = L"Пункт назначения";
            this->check_destination->UseVisualStyleBackColor = true;
            // 
            // check_seats_count
            // 
            this->check_seats_count->AutoSize = true;
            this->check_seats_count->Location = System::Drawing::Point(738, 154);
            this->check_seats_count->Name = L"check_seats_count";
            this->check_seats_count->Size = System::Drawing::Size(88, 17);
            this->check_seats_count->TabIndex = 2;
            this->check_seats_count->Text = L"Кол-во мест";
            this->check_seats_count->UseVisualStyleBackColor = true;
            // 
            // search_info
            // 
            this->search_info->AutoSize = true;
            this->search_info->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->search_info->Location = System::Drawing::Point(24, 24);
            this->search_info->Name = L"search_info";
            this->search_info->Size = System::Drawing::Size(397, 25);
            this->search_info->TabIndex = 4;
            this->search_info->Text = L"Меню поиска среди записей базы данных";
            // 
            // search_button
            // 
            this->search_button->Location = System::Drawing::Point(491, 255);
            this->search_button->Name = L"search_button";
            this->search_button->Size = System::Drawing::Size(208, 41);
            this->search_button->TabIndex = 5;
            this->search_button->Text = L"Поиск";
            this->search_button->UseVisualStyleBackColor = true;
            this->search_button->Click += gcnew System::EventHandler(this, &search::search_button_Click);
            // 
            // search_reset
            // 
            this->search_reset->Location = System::Drawing::Point(277, 255);
            this->search_reset->Name = L"search_reset";
            this->search_reset->Size = System::Drawing::Size(208, 41);
            this->search_reset->TabIndex = 5;
            this->search_reset->Text = L"Сброс";
            this->search_reset->UseVisualStyleBackColor = true;
            this->search_reset->Click += gcnew System::EventHandler(this, &search::search_reset_Click);
            // 
            // time_later
            // 
            this->time_later->AutoSize = true;
            this->time_later->Location = System::Drawing::Point(388, 220);
            this->time_later->Name = L"time_later";
            this->time_later->Size = System::Drawing::Size(58, 17);
            this->time_later->TabIndex = 2;
            this->time_later->Text = L"позже";
            this->time_later->UseVisualStyleBackColor = true;
            this->time_later->Visible = false;
            // 
            // time_earlier
            // 
            this->time_earlier->AutoSize = true;
            this->time_earlier->Location = System::Drawing::Point(543, 220);
            this->time_earlier->Name = L"time_earlier";
            this->time_earlier->Size = System::Drawing::Size(64, 17);
            this->time_earlier->TabIndex = 2;
            this->time_earlier->Text = L"раньше";
            this->time_earlier->UseVisualStyleBackColor = true;
            this->time_earlier->Visible = false;
            // 
            // time_coincidence
            // 
            this->time_coincidence->AutoSize = true;
            this->time_coincidence->Location = System::Drawing::Point(451, 220);
            this->time_coincidence->Name = L"time_coincidence";
            this->time_coincidence->Size = System::Drawing::Size(86, 17);
            this->time_coincidence->TabIndex = 2;
            this->time_coincidence->Text = L"совпадение";
            this->time_coincidence->UseVisualStyleBackColor = true;
            this->time_coincidence->Visible = false;
            // 
            // date_later
            // 
            this->date_later->AutoSize = true;
            this->date_later->Location = System::Drawing::Point(29, 220);
            this->date_later->Name = L"date_later";
            this->date_later->Size = System::Drawing::Size(58, 17);
            this->date_later->TabIndex = 2;
            this->date_later->Text = L"позже";
            this->date_later->UseVisualStyleBackColor = true;
            this->date_later->Visible = false;
            // 
            // date_earlier
            // 
            this->date_earlier->AutoSize = true;
            this->date_earlier->Location = System::Drawing::Point(183, 220);
            this->date_earlier->Name = L"date_earlier";
            this->date_earlier->Size = System::Drawing::Size(64, 17);
            this->date_earlier->TabIndex = 2;
            this->date_earlier->Text = L"раньше";
            this->date_earlier->UseVisualStyleBackColor = true;
            this->date_earlier->Visible = false;
            // 
            // date_coincidence
            // 
            this->date_coincidence->AutoSize = true;
            this->date_coincidence->Location = System::Drawing::Point(91, 220);
            this->date_coincidence->Name = L"date_coincidence";
            this->date_coincidence->Size = System::Drawing::Size(86, 17);
            this->date_coincidence->TabIndex = 2;
            this->date_coincidence->Text = L"совпадение";
            this->date_coincidence->UseVisualStyleBackColor = true;
            this->date_coincidence->Visible = false;
            // 
            // search_back
            // 
            this->search_back->Location = System::Drawing::Point(834, 8);
            this->search_back->Name = L"search_back";
            this->search_back->Size = System::Drawing::Size(134, 41);
            this->search_back->TabIndex = 5;
            this->search_back->Text = L"Вернуться к таблице";
            this->search_back->UseVisualStyleBackColor = true;
            this->search_back->Click += gcnew System::EventHandler(this, &search::search_back_Click);
            // 
            // search_exit
            // 
            this->search_exit->Location = System::Drawing::Point(692, 8);
            this->search_exit->Name = L"search_exit";
            this->search_exit->Size = System::Drawing::Size(134, 41);
            this->search_exit->TabIndex = 5;
            this->search_exit->Text = L"Выход";
            this->search_exit->UseVisualStyleBackColor = true;
            this->search_exit->Click += gcnew System::EventHandler(this, &search::search_exit_Click);
            // 
            // maskedTextBox_price
            // 
            this->maskedTextBox_price->Location = System::Drawing::Point(29, 93);
            this->maskedTextBox_price->Name = L"maskedTextBox_price";
            this->maskedTextBox_price->Size = System::Drawing::Size(218, 20);
            this->maskedTextBox_price->TabIndex = 6;
            this->maskedTextBox_price->ValidatingType = System::Int32::typeid;
            // 
            // maskedTextBox_date
            // 
            this->maskedTextBox_date->Location = System::Drawing::Point(29, 177);
            this->maskedTextBox_date->Mask = L"00/00/0000";
            this->maskedTextBox_date->Name = L"maskedTextBox_date";
            this->maskedTextBox_date->Size = System::Drawing::Size(218, 20);
            this->maskedTextBox_date->TabIndex = 6;
            this->maskedTextBox_date->ValidatingType = System::DateTime::typeid;
            // 
            // maskedTextBox_time
            // 
            this->maskedTextBox_time->Location = System::Drawing::Point(388, 177);
            this->maskedTextBox_time->Mask = L"00:00";
            this->maskedTextBox_time->Name = L"maskedTextBox_time";
            this->maskedTextBox_time->Size = System::Drawing::Size(218, 20);
            this->maskedTextBox_time->TabIndex = 6;
            this->maskedTextBox_time->ValidatingType = System::DateTime::typeid;
            // 
            // maskedTextBox_number
            // 
            this->maskedTextBox_number->Location = System::Drawing::Point(389, 93);
            this->maskedTextBox_number->Name = L"maskedTextBox_number";
            this->maskedTextBox_number->Size = System::Drawing::Size(218, 20);
            this->maskedTextBox_number->TabIndex = 6;
            this->maskedTextBox_number->ValidatingType = System::Int32::typeid;
            // 
            // maskedTextBox_dest
            // 
            this->maskedTextBox_dest->Location = System::Drawing::Point(738, 93);
            this->maskedTextBox_dest->Name = L"maskedTextBox_dest";
            this->maskedTextBox_dest->Size = System::Drawing::Size(218, 20);
            this->maskedTextBox_dest->TabIndex = 6;
            // 
            // maskedTextBox_count
            // 
            this->maskedTextBox_count->Location = System::Drawing::Point(738, 177);
            this->maskedTextBox_count->Name = L"maskedTextBox_count";
            this->maskedTextBox_count->Size = System::Drawing::Size(218, 20);
            this->maskedTextBox_count->TabIndex = 6;
            // 
            // wrong_data
            // 
            this->wrong_data->AutoSize = true;
            this->wrong_data->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->wrong_data->ForeColor = System::Drawing::Color::Maroon;
            this->wrong_data->Location = System::Drawing::Point(720, 260);
            this->wrong_data->Name = L"wrong_data";
            this->wrong_data->Size = System::Drawing::Size(248, 25);
            this->wrong_data->TabIndex = 7;
            this->wrong_data->Text = L"Неверно введены данные";
            this->wrong_data->Visible = false;
            // 
            // search
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::Silver;
            this->ClientSize = System::Drawing::Size(980, 633);
            this->Controls->Add(this->wrong_data);
            this->Controls->Add(this->maskedTextBox_count);
            this->Controls->Add(this->maskedTextBox_dest);
            this->Controls->Add(this->maskedTextBox_number);
            this->Controls->Add(this->maskedTextBox_time);
            this->Controls->Add(this->maskedTextBox_date);
            this->Controls->Add(this->maskedTextBox_price);
            this->Controls->Add(this->search_reset);
            this->Controls->Add(this->search_exit);
            this->Controls->Add(this->search_back);
            this->Controls->Add(this->search_button);
            this->Controls->Add(this->search_info);
            this->Controls->Add(this->check_date);
            this->Controls->Add(this->check_number);
            this->Controls->Add(this->check_seats_count);
            this->Controls->Add(this->check_destination);
            this->Controls->Add(this->check_time);
            this->Controls->Add(this->date_coincidence);
            this->Controls->Add(this->time_coincidence);
            this->Controls->Add(this->date_earlier);
            this->Controls->Add(this->date_later);
            this->Controls->Add(this->time_earlier);
            this->Controls->Add(this->time_later);
            this->Controls->Add(this->check_price);
            this->Controls->Add(this->main_table);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->Name = L"search";
            this->Text = L"search";
            this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &search::search_FormClosing);
            this->Load += gcnew System::EventHandler(this, &search::search_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->main_table))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

	private:
		System::Void search_button_Click(System::Object^ sender, System::EventArgs^ e)
		{
			PerformSearch();
		}

		System::Void search_reset_Click(System::Object^ sender, System::EventArgs^ e)
		{
			check_price->Checked = false;
			check_number->Checked = false;
			check_destination->Checked = false;
			check_date->Checked = false;
			check_time->Checked = false;
			check_seats_count->Checked = false;

			maskedTextBox_price->Text = "";
			maskedTextBox_number->Text = "";
			maskedTextBox_dest->Text = "";
			maskedTextBox_date->Text = "";
			maskedTextBox_time->Text = "";
			maskedTextBox_count->Text = "";

			date_later->Visible = false;
			date_coincidence->Visible = false;
			date_earlier->Visible = false;
			time_later->Visible = false;
			time_coincidence->Visible = false;
			time_earlier->Visible = false;

			wrong_data->Visible = false;

			filteredRoutes->Clear();
			for each (Route ^ route in allRoutes)
				filteredRoutes->Add(route);

			UpdateDataGridView();
		}

		System::Void search_back_Click(System::Object^ sender, System::EventArgs^ e)
		{
            this->Hide();
            obj->Show();
		}

		System::Void search_exit_Click(System::Object^ sender, System::EventArgs^ e)
		{
			Application::Exit();
		}

		System::Void check_date_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
		{
			date_later->Visible = check_date->Checked;
			date_coincidence->Visible = check_date->Checked;
			date_earlier->Visible = check_date->Checked;
		}

		System::Void check_time_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
		{
			time_later->Visible = check_time->Checked;
			time_coincidence->Visible = check_time->Checked;
			time_earlier->Visible = check_time->Checked;
		}
    private: System::Void search_Load(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void search_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
    if (e->CloseReason == CloseReason::UserClosing) {
        Application::Exit();
    }
}
};
}
