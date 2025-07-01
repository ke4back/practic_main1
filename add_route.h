#pragma once

namespace practicmain1 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::IO;

    /// <summary>
    /// Summary for add
    /// </summary>
    public ref class add_route : public System::Windows::Forms::Form
    {
    public:
        add_route(void)
        {
            InitializeComponent();
            incorrect_data->Visible = false;
        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~add_route()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::Windows::Forms::Label^ add_mark;






        System::Windows::Forms::Label^ number_add;
        System::Windows::Forms::Label^ add_destination;
        System::Windows::Forms::Label^ add_time;
        System::Windows::Forms::Label^ add_date;
        System::Windows::Forms::Label^ add_seats_count;
        System::Windows::Forms::Label^ add_price;
        System::Windows::Forms::Button^ add_button;

        System::Windows::Forms::Label^ incorrect_data;
	private: System::Windows::Forms::Button^ add_exit_button;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox_count;

	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox_number;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox_time;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox_date;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox_price;
	private: System::Windows::Forms::TextBox^ textBox_dest;



        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        void InitializeComponent(void)
        {
			this->add_mark = (gcnew System::Windows::Forms::Label());
			this->number_add = (gcnew System::Windows::Forms::Label());
			this->add_destination = (gcnew System::Windows::Forms::Label());
			this->add_time = (gcnew System::Windows::Forms::Label());
			this->add_date = (gcnew System::Windows::Forms::Label());
			this->add_seats_count = (gcnew System::Windows::Forms::Label());
			this->add_price = (gcnew System::Windows::Forms::Label());
			this->add_button = (gcnew System::Windows::Forms::Button());
			this->incorrect_data = (gcnew System::Windows::Forms::Label());
			this->add_exit_button = (gcnew System::Windows::Forms::Button());
			this->maskedTextBox_count = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox_number = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox_time = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox_date = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox_price = (gcnew System::Windows::Forms::MaskedTextBox());
			this->textBox_dest = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// add_mark
			// 
			this->add_mark->AutoSize = true;
			this->add_mark->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->add_mark->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->add_mark->Location = System::Drawing::Point(50, 23);
			this->add_mark->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->add_mark->Name = L"add_mark";
			this->add_mark->Size = System::Drawing::Size(248, 25);
			this->add_mark->TabIndex = 0;
			this->add_mark->Text = L"Меню ввода нового рейса";
			// 
			// number_add
			// 
			this->number_add->AutoSize = true;
			this->number_add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->number_add->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->number_add->Location = System::Drawing::Point(58, 66);
			this->number_add->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->number_add->Name = L"number_add";
			this->number_add->Size = System::Drawing::Size(136, 17);
			this->number_add->TabIndex = 7;
			this->number_add->Text = L"Ввод номера рейса";
			// 
			// add_destination
			// 
			this->add_destination->AutoSize = true;
			this->add_destination->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->add_destination->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->add_destination->Location = System::Drawing::Point(58, 138);
			this->add_destination->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->add_destination->Name = L"add_destination";
			this->add_destination->Size = System::Drawing::Size(276, 17);
			this->add_destination->TabIndex = 8;
			this->add_destination->Text = L"Ввод пункта назначения (без пробелов)";
			// 
			// add_time
			// 
			this->add_time->AutoSize = true;
			this->add_time->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->add_time->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->add_time->Location = System::Drawing::Point(58, 288);
			this->add_time->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->add_time->Name = L"add_time";
			this->add_time->Size = System::Drawing::Size(152, 17);
			this->add_time->TabIndex = 9;
			this->add_time->Text = L"Ввод времени (чч:мм)";
			// 
			// add_date
			// 
			this->add_date->AutoSize = true;
			this->add_date->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->add_date->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->add_date->Location = System::Drawing::Point(58, 210);
			this->add_date->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->add_date->Name = L"add_date";
			this->add_date->Size = System::Drawing::Size(153, 17);
			this->add_date->TabIndex = 10;
			this->add_date->Text = L"Ввод даты (дд:мм:гггг)";
			// 
			// add_seats_count
			// 
			this->add_seats_count->AutoSize = true;
			this->add_seats_count->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->add_seats_count->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->add_seats_count->Location = System::Drawing::Point(58, 375);
			this->add_seats_count->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->add_seats_count->Name = L"add_seats_count";
			this->add_seats_count->Size = System::Drawing::Size(155, 17);
			this->add_seats_count->TabIndex = 11;
			this->add_seats_count->Text = L"Ввод количества мест";
			// 
			// add_price
			// 
			this->add_price->AutoSize = true;
			this->add_price->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->add_price->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->add_price->Location = System::Drawing::Point(58, 466);
			this->add_price->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->add_price->Name = L"add_price";
			this->add_price->Size = System::Drawing::Size(136, 17);
			this->add_price->TabIndex = 12;
			this->add_price->Text = L"Ввод цены поездки";
			// 
			// add_button
			// 
			this->add_button->Location = System::Drawing::Point(420, 388);
			this->add_button->Name = L"add_button";
			this->add_button->Size = System::Drawing::Size(231, 43);
			this->add_button->TabIndex = 13;
			this->add_button->Text = L"Добавить запись";
			this->add_button->UseVisualStyleBackColor = true;
			this->add_button->Click += gcnew System::EventHandler(this, &add_route::add_button_Click);
			// 
			// incorrect_data
			// 
			this->incorrect_data->AutoSize = true;
			this->incorrect_data->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->incorrect_data->ForeColor = System::Drawing::Color::Maroon;
			this->incorrect_data->Location = System::Drawing::Point(416, 365);
			this->incorrect_data->Name = L"incorrect_data";
			this->incorrect_data->Size = System::Drawing::Size(208, 20);
			this->incorrect_data->TabIndex = 15;
			this->incorrect_data->Text = L"Неверно введены данные";
			this->incorrect_data->Visible = false;
			// 
			// add_exit_button
			// 
			this->add_exit_button->Location = System::Drawing::Point(568, 514);
			this->add_exit_button->Name = L"add_exit_button";
			this->add_exit_button->Size = System::Drawing::Size(122, 38);
			this->add_exit_button->TabIndex = 16;
			this->add_exit_button->Text = L"Выход";
			this->add_exit_button->UseVisualStyleBackColor = true;
			this->add_exit_button->Click += gcnew System::EventHandler(this, &add_route::add_exit_button_Click_1);
			// 
			// maskedTextBox_count
			// 
			this->maskedTextBox_count->Location = System::Drawing::Point(61, 398);
			this->maskedTextBox_count->Mask = L"000";
			this->maskedTextBox_count->Name = L"maskedTextBox_count";
			this->maskedTextBox_count->Size = System::Drawing::Size(218, 23);
			this->maskedTextBox_count->TabIndex = 17;
			this->maskedTextBox_count->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBox_number
			// 
			this->maskedTextBox_number->Location = System::Drawing::Point(61, 86);
			this->maskedTextBox_number->Mask = L"00000";
			this->maskedTextBox_number->Name = L"maskedTextBox_number";
			this->maskedTextBox_number->Size = System::Drawing::Size(218, 23);
			this->maskedTextBox_number->TabIndex = 19;
			this->maskedTextBox_number->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBox_time
			// 
			this->maskedTextBox_time->Location = System::Drawing::Point(61, 308);
			this->maskedTextBox_time->Mask = L"00:00";
			this->maskedTextBox_time->Name = L"maskedTextBox_time";
			this->maskedTextBox_time->Size = System::Drawing::Size(218, 23);
			this->maskedTextBox_time->TabIndex = 20;
			this->maskedTextBox_time->ValidatingType = System::DateTime::typeid;
			// 
			// maskedTextBox_date
			// 
			this->maskedTextBox_date->Location = System::Drawing::Point(61, 230);
			this->maskedTextBox_date->Mask = L"00/00/0000";
			this->maskedTextBox_date->Name = L"maskedTextBox_date";
			this->maskedTextBox_date->Size = System::Drawing::Size(218, 23);
			this->maskedTextBox_date->TabIndex = 21;
			this->maskedTextBox_date->ValidatingType = System::DateTime::typeid;
			// 
			// maskedTextBox_price
			// 
			this->maskedTextBox_price->Location = System::Drawing::Point(60, 486);
			this->maskedTextBox_price->Mask = L"000000";
			this->maskedTextBox_price->Name = L"maskedTextBox_price";
			this->maskedTextBox_price->Size = System::Drawing::Size(218, 23);
			this->maskedTextBox_price->TabIndex = 22;
			this->maskedTextBox_price->ValidatingType = System::Int32::typeid;
			// 
			// textBox_dest
			// 
			this->textBox_dest->Location = System::Drawing::Point(60, 158);
			this->textBox_dest->MaxLength = 20;
			this->textBox_dest->Name = L"textBox_dest";
			this->textBox_dest->Size = System::Drawing::Size(217, 23);
			this->textBox_dest->TabIndex = 23;
			// 
			// add_route
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(702, 564);
			this->Controls->Add(this->textBox_dest);
			this->Controls->Add(this->maskedTextBox_count);
			this->Controls->Add(this->maskedTextBox_number);
			this->Controls->Add(this->maskedTextBox_time);
			this->Controls->Add(this->maskedTextBox_date);
			this->Controls->Add(this->maskedTextBox_price);
			this->Controls->Add(this->add_exit_button);
			this->Controls->Add(this->incorrect_data);
			this->Controls->Add(this->add_button);
			this->Controls->Add(this->add_price);
			this->Controls->Add(this->add_seats_count);
			this->Controls->Add(this->add_date);
			this->Controls->Add(this->add_time);
			this->Controls->Add(this->add_destination);
			this->Controls->Add(this->number_add);
			this->Controls->Add(this->add_mark);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"add_route";
			this->Text = L"Добавление записи";
			this->Load += gcnew System::EventHandler(this, &add_route::add_route_Load_1);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void add_button_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (String::IsNullOrWhiteSpace(textBox_dest->Text) || textBox_dest->Text->Contains(" ")) {
		incorrect_data->Visible = true;
		return;
	}

	DateTime dateValue;
	if (!DateTime::TryParseExact(maskedTextBox_date->Text, "dd.MM.yyyy",
		System::Globalization::CultureInfo::InvariantCulture,
		System::Globalization::DateTimeStyles::None, dateValue)) {
		incorrect_data->Visible = true;
		return;
	}

	DateTime timeValue;
	if (!DateTime::TryParseExact(maskedTextBox_time->Text, "HH:mm",
		System::Globalization::CultureInfo::InvariantCulture,
		System::Globalization::DateTimeStyles::None, timeValue)) {
		incorrect_data->Visible = true;
		return;
	}

	int seats;
	if (!Int32::TryParse(maskedTextBox_count->Text, seats) || seats <= 0 || seats > 200) {
		incorrect_data->Visible = true;
		return;
	}

	int price;
	if (!Int32::TryParse(maskedTextBox_price->Text, price) || price <= 0 || price > 100000) {
		incorrect_data->Visible = true;
		return;
	}

	int routeNumber;
	if (!Int32::TryParse(maskedTextBox_number->Text, routeNumber) || routeNumber <= 0 || routeNumber > 9999) {
		incorrect_data->Visible = true;
		return;
	}

	incorrect_data->Visible = false;

	try {
		StreamWriter^ sw = gcnew StreamWriter("routes.txt", true, System::Text::Encoding::GetEncoding(1251));
		sw->WriteLine("{0} {1} {2} {3} {4} {5}",
			routeNumber,
			textBox_dest->Text,
			maskedTextBox_date->Text,
			maskedTextBox_time->Text,
			seats,
			price);
		sw->Close();

		MessageBox::Show("Рейс успешно добавлен!", "Успех",
			MessageBoxButtons::OK, MessageBoxIcon::Information);

		maskedTextBox_number->Text = "";
		textBox_dest->Text = "";
		maskedTextBox_date->Text = "";
		maskedTextBox_time->Text = "";
		maskedTextBox_count->Text = "";
		maskedTextBox_price->Text = "";
	}
	catch (Exception^ ex) {
		MessageBox::Show("Ошибка при записи в файл: " + ex->Message,
			"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void add_route_Load_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void add_exit_button_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
