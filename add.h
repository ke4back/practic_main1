#pragma once

namespace practicmain1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for add
	/// </summary>
	public ref class add : public System::Windows::Forms::Form
	{
	public:
		add(void)
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
		~add()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ add_mark;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ number_add;
	private: System::Windows::Forms::Label^ add_destination;
	private: System::Windows::Forms::Label^ add_time;
	private: System::Windows::Forms::Label^ add_date;
	private: System::Windows::Forms::Label^ add_seats_count;
	private: System::Windows::Forms::Label^ add_price;
	private: System::Windows::Forms::Button^ add_button;
	private: System::Windows::Forms::Button^ add_exit_button;
	private: System::Windows::Forms::Label^ incorrect_data;





	protected:

	protected:

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
			this->add_mark = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->number_add = (gcnew System::Windows::Forms::Label());
			this->add_destination = (gcnew System::Windows::Forms::Label());
			this->add_time = (gcnew System::Windows::Forms::Label());
			this->add_date = (gcnew System::Windows::Forms::Label());
			this->add_seats_count = (gcnew System::Windows::Forms::Label());
			this->add_price = (gcnew System::Windows::Forms::Label());
			this->add_button = (gcnew System::Windows::Forms::Button());
			this->add_exit_button = (gcnew System::Windows::Forms::Button());
			this->incorrect_data = (gcnew System::Windows::Forms::Label());
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
			this->add_mark->Click += gcnew System::EventHandler(this, &add::add_mark_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(55, 100);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(316, 23);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(55, 170);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(316, 23);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(55, 244);
			this->textBox3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(316, 23);
			this->textBox3->TabIndex = 1;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(55, 319);
			this->textBox4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(316, 23);
			this->textBox4->TabIndex = 1;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(55, 408);
			this->textBox5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(316, 23);
			this->textBox5->TabIndex = 1;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(55, 499);
			this->textBox6->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(316, 23);
			this->textBox6->TabIndex = 1;
			// 
			// number_add
			// 
			this->number_add->AutoSize = true;
			this->number_add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->number_add->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->number_add->Location = System::Drawing::Point(58, 79);
			this->number_add->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->number_add->Name = L"number_add";
			this->number_add->Size = System::Drawing::Size(136, 17);
			this->number_add->TabIndex = 2;
			this->number_add->Text = L"Ввод номера рейса";
			// 
			// add_destination
			// 
			this->add_destination->AutoSize = true;
			this->add_destination->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->add_destination->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->add_destination->Location = System::Drawing::Point(58, 151);
			this->add_destination->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->add_destination->Name = L"add_destination";
			this->add_destination->Size = System::Drawing::Size(276, 17);
			this->add_destination->TabIndex = 2;
			this->add_destination->Text = L"Ввод пункта назначения (без пробелов)";
			// 
			// add_time
			// 
			this->add_time->AutoSize = true;
			this->add_time->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->add_time->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->add_time->Location = System::Drawing::Point(58, 301);
			this->add_time->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->add_time->Name = L"add_time";
			this->add_time->Size = System::Drawing::Size(152, 17);
			this->add_time->TabIndex = 2;
			this->add_time->Text = L"Ввод времени (чч:мм)";
			// 
			// add_date
			// 
			this->add_date->AutoSize = true;
			this->add_date->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->add_date->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->add_date->Location = System::Drawing::Point(58, 223);
			this->add_date->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->add_date->Name = L"add_date";
			this->add_date->Size = System::Drawing::Size(153, 17);
			this->add_date->TabIndex = 2;
			this->add_date->Text = L"Ввод даты (дд:мм:гггг)";
			// 
			// add_seats_count
			// 
			this->add_seats_count->AutoSize = true;
			this->add_seats_count->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->add_seats_count->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->add_seats_count->Location = System::Drawing::Point(58, 388);
			this->add_seats_count->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->add_seats_count->Name = L"add_seats_count";
			this->add_seats_count->Size = System::Drawing::Size(155, 17);
			this->add_seats_count->TabIndex = 2;
			this->add_seats_count->Text = L"Ввод количества мест";
			// 
			// add_price
			// 
			this->add_price->AutoSize = true;
			this->add_price->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->add_price->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->add_price->Location = System::Drawing::Point(58, 479);
			this->add_price->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->add_price->Name = L"add_price";
			this->add_price->Size = System::Drawing::Size(136, 17);
			this->add_price->TabIndex = 2;
			this->add_price->Text = L"Ввод цены поездки";
			// 
			// add_button
			// 
			this->add_button->Location = System::Drawing::Point(420, 388);
			this->add_button->Name = L"add_button";
			this->add_button->Size = System::Drawing::Size(231, 43);
			this->add_button->TabIndex = 3;
			this->add_button->Text = L"Добавить запись";
			this->add_button->UseVisualStyleBackColor = true;
			// 
			// add_exit_button
			// 
			this->add_exit_button->Location = System::Drawing::Point(553, 509);
			this->add_exit_button->Name = L"add_exit_button";
			this->add_exit_button->Size = System::Drawing::Size(137, 43);
			this->add_exit_button->TabIndex = 3;
			this->add_exit_button->Text = L"выход";
			this->add_exit_button->UseVisualStyleBackColor = true;
			// 
			// incorrect_data
			// 
			this->incorrect_data->AutoSize = true;
			this->incorrect_data->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->incorrect_data->ForeColor = System::Drawing::Color::Maroon;
			this->incorrect_data->Location = System::Drawing::Point(415, 348);
			this->incorrect_data->Name = L"incorrect_data";
			this->incorrect_data->Size = System::Drawing::Size(248, 25);
			this->incorrect_data->TabIndex = 4;
			this->incorrect_data->Text = L"Неверно введены данные";
			// 
			// add
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(702, 564);
			this->Controls->Add(this->incorrect_data);
			this->Controls->Add(this->add_exit_button);
			this->Controls->Add(this->add_button);
			this->Controls->Add(this->add_price);
			this->Controls->Add(this->add_seats_count);
			this->Controls->Add(this->add_date);
			this->Controls->Add(this->add_time);
			this->Controls->Add(this->add_destination);
			this->Controls->Add(this->number_add);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->add_mark);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"add";
			this->Text = L"add";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void add_mark_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
