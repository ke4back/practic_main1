#pragma once

namespace practicmain1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for search
	/// </summary>
	public ref class search : public System::Windows::Forms::Form
	{
	public:
		search(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~search()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ main_table;
	private: System::Windows::Forms::CheckBox^ check_price;
	protected:
	private: System::Windows::Forms::CheckBox^ check_number;
	private: System::Windows::Forms::CheckBox^ check_date;
	private: System::Windows::Forms::CheckBox^ check_time;
	private: System::Windows::Forms::CheckBox^ check_destination;
	private: System::Windows::Forms::CheckBox^ check_seats_count;



	private: System::Windows::Forms::DataGridViewTextBoxColumn^ index;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ number;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ destination;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ date;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ time;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ seats_count;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ price;



	private: System::Windows::Forms::Label^ search_info;
	private: System::Windows::Forms::Button^ search_button;
	private: System::Windows::Forms::Button^ search_reset;
	private: System::Windows::Forms::CheckBox^ time_later;
	private: System::Windows::Forms::CheckBox^ time_earlier;
	private: System::Windows::Forms::CheckBox^ time_coincidence;
	private: System::Windows::Forms::CheckBox^ date_later;
	private: System::Windows::Forms::CheckBox^ date_earlier;
	private: System::Windows::Forms::CheckBox^ date_coincidence;
	private: System::Windows::Forms::Button^ search_back;
	private: System::Windows::Forms::Button^ search_exit;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox_price;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox_date;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox_time;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox_number;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox_dest;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox_count;
	private: System::Windows::Forms::Label^ wrong_data;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
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
			this->main_table->ColumnHeadersHeight = 50;
			this->main_table->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->index, this->number,
					this->destination, this->date, this->time, this->seats_count, this->price
			});
			this->main_table->Location = System::Drawing::Point(18, 302);
			this->main_table->Name = L"main_table";
			this->main_table->Size = System::Drawing::Size(950, 319);
			this->main_table->TabIndex = 1;
			// 
			// index
			// 
			this->index->HeaderText = L"Индекс";
			this->index->Name = L"index";
			this->index->Width = 50;
			// 
			// number
			// 
			this->number->HeaderText = L"Номер рейса";
			this->number->Name = L"number";
			// 
			// destination
			// 
			this->destination->HeaderText = L"Пункт назначения";
			this->destination->Name = L"destination";
			this->destination->Width = 200;
			// 
			// date
			// 
			this->date->HeaderText = L"Дата";
			this->date->Name = L"date";
			this->date->Width = 150;
			// 
			// time
			// 
			this->time->HeaderText = L"Время(чч:мм)";
			this->time->Name = L"time";
			this->time->Width = 150;
			// 
			// seats_count
			// 
			this->seats_count->HeaderText = L"кол-во мест";
			this->seats_count->Name = L"seats_count";
			this->seats_count->Width = 150;
			// 
			// price
			// 
			this->price->HeaderText = L"цена";
			this->price->Name = L"price";
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
			this->search_info->Click += gcnew System::EventHandler(this, &search::search_info_Click);
			// 
			// search_button
			// 
			this->search_button->Location = System::Drawing::Point(491, 255);
			this->search_button->Name = L"search_button";
			this->search_button->Size = System::Drawing::Size(208, 41);
			this->search_button->TabIndex = 5;
			this->search_button->Text = L"Поиск";
			this->search_button->UseVisualStyleBackColor = true;
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
			this->search_back->Click += gcnew System::EventHandler(this, &search::button1_Click);
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
			this->Name = L"search";
			this->Text = L"search";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->main_table))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void search_info_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void check_date_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->date_later->Visible == false)
	{
		this->date_later->Visible = true;
		this->date_coincidence->Visible = true;
		this->date_earlier->Visible = true;
	}
	else
	{
		this->date_later->Visible = false;
		this->date_coincidence->Visible = false;
		this->date_earlier->Visible = false;
	}
}
private: System::Void check_time_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->time_later->Visible == false)
	{
		this->time_later->Visible = true;
		this->time_coincidence->Visible = true;
		this->time_earlier->Visible = true;
	}
	else
	{
		this->time_later->Visible = false;
		this->time_coincidence->Visible = false;
		this->time_earlier->Visible = false;
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void search_exit_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void search_reset_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
