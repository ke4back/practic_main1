#pragma once

namespace practicmain1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for edit
	/// </summary>
	public ref class edit : public System::Windows::Forms::Form
	{
	public:
		edit(void)
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
		~edit()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ incorrect_data;
	private: System::Windows::Forms::Button^ edit_exit_button;
	protected:

	private: System::Windows::Forms::Button^ edit_button;

	private: System::Windows::Forms::Label^ edit_price;

	private: System::Windows::Forms::Label^ edit_seats_count;

	private: System::Windows::Forms::Label^ edit_date;
	private: System::Windows::Forms::Label^ edit_time;


	private: System::Windows::Forms::Label^ edit_destination;

	private: System::Windows::Forms::Label^ number_edit;
	private: System::Windows::Forms::TextBox^ price_edit_textbox;

	private: System::Windows::Forms::TextBox^ s_count_edit_textbox;


	private: System::Windows::Forms::TextBox^ time_edit_textbox;

	private: System::Windows::Forms::TextBox^ date_edit_textbox;

	private: System::Windows::Forms::TextBox^ dest_edit_textbox;

	private: System::Windows::Forms::TextBox^ numder_edit_textbox;
	private: System::Windows::Forms::Label^ edit_mark;




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
			this->incorrect_data = (gcnew System::Windows::Forms::Label());
			this->edit_exit_button = (gcnew System::Windows::Forms::Button());
			this->edit_button = (gcnew System::Windows::Forms::Button());
			this->edit_price = (gcnew System::Windows::Forms::Label());
			this->edit_seats_count = (gcnew System::Windows::Forms::Label());
			this->edit_date = (gcnew System::Windows::Forms::Label());
			this->edit_time = (gcnew System::Windows::Forms::Label());
			this->edit_destination = (gcnew System::Windows::Forms::Label());
			this->number_edit = (gcnew System::Windows::Forms::Label());
			this->price_edit_textbox = (gcnew System::Windows::Forms::TextBox());
			this->s_count_edit_textbox = (gcnew System::Windows::Forms::TextBox());
			this->time_edit_textbox = (gcnew System::Windows::Forms::TextBox());
			this->date_edit_textbox = (gcnew System::Windows::Forms::TextBox());
			this->dest_edit_textbox = (gcnew System::Windows::Forms::TextBox());
			this->numder_edit_textbox = (gcnew System::Windows::Forms::TextBox());
			this->edit_mark = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// incorrect_data
			// 
			this->incorrect_data->AutoSize = true;
			this->incorrect_data->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->incorrect_data->ForeColor = System::Drawing::Color::Maroon;
			this->incorrect_data->Location = System::Drawing::Point(378, 334);
			this->incorrect_data->Name = L"incorrect_data";
			this->incorrect_data->Size = System::Drawing::Size(248, 25);
			this->incorrect_data->TabIndex = 20;
			this->incorrect_data->Text = L"Неверно введены данные";
			// 
			// edit_exit_button
			// 
			this->edit_exit_button->Location = System::Drawing::Point(516, 495);
			this->edit_exit_button->Name = L"edit_exit_button";
			this->edit_exit_button->Size = System::Drawing::Size(137, 43);
			this->edit_exit_button->TabIndex = 18;
			this->edit_exit_button->Text = L"выход";
			this->edit_exit_button->UseVisualStyleBackColor = true;
			// 
			// edit_button
			// 
			this->edit_button->Location = System::Drawing::Point(383, 374);
			this->edit_button->Name = L"edit_button";
			this->edit_button->Size = System::Drawing::Size(231, 43);
			this->edit_button->TabIndex = 19;
			this->edit_button->Text = L"Добавить запись";
			this->edit_button->UseVisualStyleBackColor = true;
			// 
			// edit_price
			// 
			this->edit_price->AutoSize = true;
			this->edit_price->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->edit_price->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->edit_price->Location = System::Drawing::Point(21, 465);
			this->edit_price->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->edit_price->Name = L"edit_price";
			this->edit_price->Size = System::Drawing::Size(136, 17);
			this->edit_price->TabIndex = 12;
			this->edit_price->Text = L"Ввод цены поездки";
			// 
			// edit_seats_count
			// 
			this->edit_seats_count->AutoSize = true;
			this->edit_seats_count->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->edit_seats_count->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->edit_seats_count->Location = System::Drawing::Point(21, 374);
			this->edit_seats_count->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->edit_seats_count->Name = L"edit_seats_count";
			this->edit_seats_count->Size = System::Drawing::Size(155, 17);
			this->edit_seats_count->TabIndex = 13;
			this->edit_seats_count->Text = L"Ввод количества мест";
			// 
			// edit_date
			// 
			this->edit_date->AutoSize = true;
			this->edit_date->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->edit_date->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->edit_date->Location = System::Drawing::Point(21, 209);
			this->edit_date->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->edit_date->Name = L"edit_date";
			this->edit_date->Size = System::Drawing::Size(153, 17);
			this->edit_date->TabIndex = 14;
			this->edit_date->Text = L"Ввод даты (дд:мм:гггг)";
			// 
			// edit_time
			// 
			this->edit_time->AutoSize = true;
			this->edit_time->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->edit_time->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->edit_time->Location = System::Drawing::Point(21, 287);
			this->edit_time->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->edit_time->Name = L"edit_time";
			this->edit_time->Size = System::Drawing::Size(152, 17);
			this->edit_time->TabIndex = 15;
			this->edit_time->Text = L"Ввод времени (чч:мм)";
			// 
			// edit_destination
			// 
			this->edit_destination->AutoSize = true;
			this->edit_destination->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->edit_destination->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->edit_destination->Location = System::Drawing::Point(21, 137);
			this->edit_destination->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->edit_destination->Name = L"edit_destination";
			this->edit_destination->Size = System::Drawing::Size(276, 17);
			this->edit_destination->TabIndex = 16;
			this->edit_destination->Text = L"Ввод пункта назначения (без пробелов)";
			// 
			// number_edit
			// 
			this->number_edit->AutoSize = true;
			this->number_edit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->number_edit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->number_edit->Location = System::Drawing::Point(21, 65);
			this->number_edit->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->number_edit->Name = L"number_edit";
			this->number_edit->Size = System::Drawing::Size(136, 17);
			this->number_edit->TabIndex = 17;
			this->number_edit->Text = L"Ввод номера рейса";
			// 
			// price_edit_textbox
			// 
			this->price_edit_textbox->Location = System::Drawing::Point(18, 485);
			this->price_edit_textbox->Margin = System::Windows::Forms::Padding(4);
			this->price_edit_textbox->Name = L"price_edit_textbox";
			this->price_edit_textbox->Size = System::Drawing::Size(316, 20);
			this->price_edit_textbox->TabIndex = 6;
			// 
			// s_count_edit_textbox
			// 
			this->s_count_edit_textbox->Location = System::Drawing::Point(18, 394);
			this->s_count_edit_textbox->Margin = System::Windows::Forms::Padding(4);
			this->s_count_edit_textbox->Name = L"s_count_edit_textbox";
			this->s_count_edit_textbox->Size = System::Drawing::Size(316, 20);
			this->s_count_edit_textbox->TabIndex = 7;
			// 
			// time_edit_textbox
			// 
			this->time_edit_textbox->Location = System::Drawing::Point(18, 305);
			this->time_edit_textbox->Margin = System::Windows::Forms::Padding(4);
			this->time_edit_textbox->Name = L"time_edit_textbox";
			this->time_edit_textbox->Size = System::Drawing::Size(316, 20);
			this->time_edit_textbox->TabIndex = 8;
			// 
			// date_edit_textbox
			// 
			this->date_edit_textbox->Location = System::Drawing::Point(18, 230);
			this->date_edit_textbox->Margin = System::Windows::Forms::Padding(4);
			this->date_edit_textbox->Name = L"date_edit_textbox";
			this->date_edit_textbox->Size = System::Drawing::Size(316, 20);
			this->date_edit_textbox->TabIndex = 9;
			// 
			// dest_edit_textbox
			// 
			this->dest_edit_textbox->Location = System::Drawing::Point(18, 156);
			this->dest_edit_textbox->Margin = System::Windows::Forms::Padding(4);
			this->dest_edit_textbox->Name = L"dest_edit_textbox";
			this->dest_edit_textbox->Size = System::Drawing::Size(316, 20);
			this->dest_edit_textbox->TabIndex = 10;
			// 
			// numder_edit_textbox
			// 
			this->numder_edit_textbox->Location = System::Drawing::Point(18, 86);
			this->numder_edit_textbox->Margin = System::Windows::Forms::Padding(4);
			this->numder_edit_textbox->Name = L"numder_edit_textbox";
			this->numder_edit_textbox->Size = System::Drawing::Size(316, 20);
			this->numder_edit_textbox->TabIndex = 11;
			// 
			// edit_mark
			// 
			this->edit_mark->AutoSize = true;
			this->edit_mark->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->edit_mark->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->edit_mark->Location = System::Drawing::Point(13, 20);
			this->edit_mark->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->edit_mark->Name = L"edit_mark";
			this->edit_mark->Size = System::Drawing::Size(302, 25);
			this->edit_mark->TabIndex = 5;
			this->edit_mark->Text = L"Меню изменения записи рейса";
			// 
			// edit
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(675, 560);
			this->Controls->Add(this->incorrect_data);
			this->Controls->Add(this->edit_exit_button);
			this->Controls->Add(this->edit_button);
			this->Controls->Add(this->edit_price);
			this->Controls->Add(this->edit_seats_count);
			this->Controls->Add(this->edit_date);
			this->Controls->Add(this->edit_time);
			this->Controls->Add(this->edit_destination);
			this->Controls->Add(this->number_edit);
			this->Controls->Add(this->price_edit_textbox);
			this->Controls->Add(this->s_count_edit_textbox);
			this->Controls->Add(this->time_edit_textbox);
			this->Controls->Add(this->date_edit_textbox);
			this->Controls->Add(this->dest_edit_textbox);
			this->Controls->Add(this->numder_edit_textbox);
			this->Controls->Add(this->edit_mark);
			this->Name = L"edit";
			this->Text = L"edit";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
