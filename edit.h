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
	private: System::Windows::Forms::Label^ edit_mark;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox_count;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox_dest;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox_number;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox_time;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox_date;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox_price;
	private: System::Windows::Forms::CheckBox^ check_date;
	private: System::Windows::Forms::CheckBox^ check_number;
	private: System::Windows::Forms::CheckBox^ check_seats_count;
	private: System::Windows::Forms::CheckBox^ check_destination;
	private: System::Windows::Forms::CheckBox^ check_time;
	private: System::Windows::Forms::CheckBox^ check_price;
	private: System::Windows::Forms::Label^ info_label;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(edit::typeid));
			this->incorrect_data = (gcnew System::Windows::Forms::Label());
			this->edit_exit_button = (gcnew System::Windows::Forms::Button());
			this->edit_button = (gcnew System::Windows::Forms::Button());
			this->edit_mark = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox_count = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox_dest = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox_number = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox_time = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox_date = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox_price = (gcnew System::Windows::Forms::MaskedTextBox());
			this->check_date = (gcnew System::Windows::Forms::CheckBox());
			this->check_number = (gcnew System::Windows::Forms::CheckBox());
			this->check_seats_count = (gcnew System::Windows::Forms::CheckBox());
			this->check_destination = (gcnew System::Windows::Forms::CheckBox());
			this->check_time = (gcnew System::Windows::Forms::CheckBox());
			this->check_price = (gcnew System::Windows::Forms::CheckBox());
			this->info_label = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// incorrect_data
			// 
			this->incorrect_data->AutoSize = true;
			this->incorrect_data->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->incorrect_data->ForeColor = System::Drawing::Color::Maroon;
			this->incorrect_data->Location = System::Drawing::Point(290, 475);
			this->incorrect_data->Name = L"incorrect_data";
			this->incorrect_data->Size = System::Drawing::Size(208, 20);
			this->incorrect_data->TabIndex = 20;
			this->incorrect_data->Text = L"Неверно введены данные";
			this->incorrect_data->Click += gcnew System::EventHandler(this, &edit::incorrect_data_Click);
			// 
			// edit_exit_button
			// 
			this->edit_exit_button->Location = System::Drawing::Point(531, 498);
			this->edit_exit_button->Name = L"edit_exit_button";
			this->edit_exit_button->Size = System::Drawing::Size(137, 43);
			this->edit_exit_button->TabIndex = 18;
			this->edit_exit_button->Text = L"выход";
			this->edit_exit_button->UseVisualStyleBackColor = true;
			this->edit_exit_button->Click += gcnew System::EventHandler(this, &edit::edit_exit_button_Click);
			// 
			// edit_button
			// 
			this->edit_button->Location = System::Drawing::Point(294, 498);
			this->edit_button->Name = L"edit_button";
			this->edit_button->Size = System::Drawing::Size(231, 43);
			this->edit_button->TabIndex = 19;
			this->edit_button->Text = L"Добавить запись";
			this->edit_button->UseVisualStyleBackColor = true;
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
			this->edit_mark->Click += gcnew System::EventHandler(this, &edit::edit_mark_Click);
			// 
			// maskedTextBox_count
			// 
			this->maskedTextBox_count->Location = System::Drawing::Point(18, 406);
			this->maskedTextBox_count->Mask = L"000";
			this->maskedTextBox_count->Name = L"maskedTextBox_count";
			this->maskedTextBox_count->Size = System::Drawing::Size(218, 20);
			this->maskedTextBox_count->TabIndex = 27;
			this->maskedTextBox_count->ValidatingType = System::Int32::typeid;
			this->maskedTextBox_count->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &edit::maskedTextBox_count_MaskInputRejected);
			// 
			// maskedTextBox_dest
			// 
			this->maskedTextBox_dest->Location = System::Drawing::Point(18, 166);
			this->maskedTextBox_dest->Name = L"maskedTextBox_dest";
			this->maskedTextBox_dest->Size = System::Drawing::Size(218, 20);
			this->maskedTextBox_dest->TabIndex = 28;
			this->maskedTextBox_dest->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &edit::maskedTextBox_dest_MaskInputRejected);
			// 
			// maskedTextBox_number
			// 
			this->maskedTextBox_number->Location = System::Drawing::Point(19, 83);
			this->maskedTextBox_number->Mask = L"00000";
			this->maskedTextBox_number->Name = L"maskedTextBox_number";
			this->maskedTextBox_number->Size = System::Drawing::Size(218, 20);
			this->maskedTextBox_number->TabIndex = 29;
			this->maskedTextBox_number->ValidatingType = System::Int32::typeid;
			this->maskedTextBox_number->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &edit::maskedTextBox_number_MaskInputRejected);
			// 
			// maskedTextBox_time
			// 
			this->maskedTextBox_time->Location = System::Drawing::Point(18, 321);
			this->maskedTextBox_time->Mask = L"00:00";
			this->maskedTextBox_time->Name = L"maskedTextBox_time";
			this->maskedTextBox_time->Size = System::Drawing::Size(218, 20);
			this->maskedTextBox_time->TabIndex = 30;
			this->maskedTextBox_time->ValidatingType = System::DateTime::typeid;
			this->maskedTextBox_time->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &edit::maskedTextBox_time_MaskInputRejected);
			// 
			// maskedTextBox_date
			// 
			this->maskedTextBox_date->Location = System::Drawing::Point(18, 245);
			this->maskedTextBox_date->Mask = L"00/00/0000";
			this->maskedTextBox_date->Name = L"maskedTextBox_date";
			this->maskedTextBox_date->Size = System::Drawing::Size(218, 20);
			this->maskedTextBox_date->TabIndex = 31;
			this->maskedTextBox_date->ValidatingType = System::DateTime::typeid;
			// 
			// maskedTextBox_price
			// 
			this->maskedTextBox_price->Location = System::Drawing::Point(18, 489);
			this->maskedTextBox_price->Mask = L"000000";
			this->maskedTextBox_price->Name = L"maskedTextBox_price";
			this->maskedTextBox_price->Size = System::Drawing::Size(218, 20);
			this->maskedTextBox_price->TabIndex = 32;
			this->maskedTextBox_price->ValidatingType = System::Int32::typeid;
			// 
			// check_date
			// 
			this->check_date->AutoSize = true;
			this->check_date->Location = System::Drawing::Point(18, 222);
			this->check_date->Name = L"check_date";
			this->check_date->Size = System::Drawing::Size(52, 17);
			this->check_date->TabIndex = 21;
			this->check_date->Text = L"Дата";
			this->check_date->UseVisualStyleBackColor = true;
			// 
			// check_number
			// 
			this->check_number->AutoSize = true;
			this->check_number->Location = System::Drawing::Point(18, 60);
			this->check_number->Name = L"check_number";
			this->check_number->Size = System::Drawing::Size(93, 17);
			this->check_number->TabIndex = 22;
			this->check_number->Text = L"Номер рейса";
			this->check_number->UseVisualStyleBackColor = true;
			this->check_number->CheckedChanged += gcnew System::EventHandler(this, &edit::check_number_CheckedChanged);
			// 
			// check_seats_count
			// 
			this->check_seats_count->AutoSize = true;
			this->check_seats_count->Location = System::Drawing::Point(18, 383);
			this->check_seats_count->Name = L"check_seats_count";
			this->check_seats_count->Size = System::Drawing::Size(88, 17);
			this->check_seats_count->TabIndex = 23;
			this->check_seats_count->Text = L"Кол-во мест";
			this->check_seats_count->UseVisualStyleBackColor = true;
			this->check_seats_count->CheckedChanged += gcnew System::EventHandler(this, &edit::check_seats_count_CheckedChanged);
			// 
			// check_destination
			// 
			this->check_destination->AutoSize = true;
			this->check_destination->Location = System::Drawing::Point(18, 143);
			this->check_destination->Name = L"check_destination";
			this->check_destination->Size = System::Drawing::Size(118, 17);
			this->check_destination->TabIndex = 24;
			this->check_destination->Text = L"Пункт назначения";
			this->check_destination->UseVisualStyleBackColor = true;
			this->check_destination->CheckedChanged += gcnew System::EventHandler(this, &edit::check_destination_CheckedChanged);
			// 
			// check_time
			// 
			this->check_time->AutoSize = true;
			this->check_time->Location = System::Drawing::Point(18, 298);
			this->check_time->Name = L"check_time";
			this->check_time->Size = System::Drawing::Size(59, 17);
			this->check_time->TabIndex = 25;
			this->check_time->Text = L"Время";
			this->check_time->UseVisualStyleBackColor = true;
			// 
			// check_price
			// 
			this->check_price->AutoSize = true;
			this->check_price->Location = System::Drawing::Point(18, 466);
			this->check_price->Name = L"check_price";
			this->check_price->Size = System::Drawing::Size(52, 17);
			this->check_price->TabIndex = 26;
			this->check_price->Text = L"Цена";
			this->check_price->UseVisualStyleBackColor = true;
			// 
			// info_label
			// 
			this->info_label->AutoSize = true;
			this->info_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->info_label->Location = System::Drawing::Point(276, 59);
			this->info_label->Name = L"info_label";
			this->info_label->Size = System::Drawing::Size(512, 408);
			this->info_label->TabIndex = 33;
			this->info_label->Text = resources->GetString(L"info_label.Text");
			// 
			// edit
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(813, 560);
			this->Controls->Add(this->info_label);
			this->Controls->Add(this->maskedTextBox_count);
			this->Controls->Add(this->maskedTextBox_dest);
			this->Controls->Add(this->maskedTextBox_number);
			this->Controls->Add(this->maskedTextBox_time);
			this->Controls->Add(this->maskedTextBox_date);
			this->Controls->Add(this->maskedTextBox_price);
			this->Controls->Add(this->check_date);
			this->Controls->Add(this->check_number);
			this->Controls->Add(this->check_seats_count);
			this->Controls->Add(this->check_destination);
			this->Controls->Add(this->check_time);
			this->Controls->Add(this->check_price);
			this->Controls->Add(this->incorrect_data);
			this->Controls->Add(this->edit_exit_button);
			this->Controls->Add(this->edit_button);
			this->Controls->Add(this->edit_mark);
			this->Name = L"edit";
			this->Text = L"Изменение записи";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void incorrect_data_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void maskedTextBox_dest_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {
	}
private: System::Void maskedTextBox_number_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {
	}
private: System::Void maskedTextBox_time_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {
	}
private: System::Void check_seats_count_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void maskedTextBox_count_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {
	}
private: System::Void check_destination_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void edit_mark_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void edit_exit_button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void check_number_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
