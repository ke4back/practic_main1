#pragma once


namespace practicmain1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for auth
	/// </summary>
	public ref class auth : public System::Windows::Forms::Form
	{
	public:
		auth(void)
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
		~auth()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ message_auth;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ admin_exit_button;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ wrong_password;

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
			this->message_auth = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->admin_exit_button = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->wrong_password = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// message_auth
			// 
			this->message_auth->AutoSize = true;
			this->message_auth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->message_auth->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->message_auth->Location = System::Drawing::Point(36, 29);
			this->message_auth->Name = L"message_auth";
			this->message_auth->Size = System::Drawing::Size(570, 117);
			this->message_auth->TabIndex = 0;
			this->message_auth->Text = L"��� ����� � ����� \r\n����������������� ����������\r\n��������������";
			this->message_auth->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->message_auth->Click += gcnew System::EventHandler(this, &auth::message_auth_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label1->Location = System::Drawing::Point(97, 158);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 31);
			this->label1->TabIndex = 1;
			this->label1->Text = L"�����";
			this->label1->Click += gcnew System::EventHandler(this, &auth::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label2->Location = System::Drawing::Point(97, 245);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 31);
			this->label2->TabIndex = 1;
			this->label2->Text = L"������";
			this->label2->Click += gcnew System::EventHandler(this, &auth::label2_Click);
			// 
			// admin_exit_button
			// 
			this->admin_exit_button->BackColor = System::Drawing::Color::Silver;
			this->admin_exit_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->admin_exit_button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->admin_exit_button->Location = System::Drawing::Point(97, 351);
			this->admin_exit_button->Name = L"admin_exit_button";
			this->admin_exit_button->Size = System::Drawing::Size(147, 67);
			this->admin_exit_button->TabIndex = 2;
			this->admin_exit_button->Text = L"�����";
			this->admin_exit_button->UseVisualStyleBackColor = false;
			this->admin_exit_button->Click += gcnew System::EventHandler(this, &auth::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(97, 192);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(438, 38);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(97, 279);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(438, 38);
			this->textBox2->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightGray;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button1->Location = System::Drawing::Point(276, 351);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(259, 67);
			this->button1->TabIndex = 2;
			this->button1->Text = L"����";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &auth::button1_Click);
			// 
			// wrong_password
			// 
			this->wrong_password->AutoSize = true;
			this->wrong_password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->wrong_password->ForeColor = System::Drawing::Color::DarkRed;
			this->wrong_password->Location = System::Drawing::Point(264, 164);
			this->wrong_password->Name = L"wrong_password";
			this->wrong_password->Size = System::Drawing::Size(271, 25);
			this->wrong_password->TabIndex = 4;
			this->wrong_password->Text = L"�������� ����� ��� ������";
			// 
			// auth
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(634, 461);
			this->Controls->Add(this->wrong_password);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->admin_exit_button);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->message_auth);
			this->Name = L"auth";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"�����������";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &auth::auth_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void auth_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void message_auth_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
