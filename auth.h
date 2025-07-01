#pragma once
#include "table_admin1.h"

namespace practicmain1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for auth
	/// </summary>
	public ref class auth : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		auth(void)
		{
			InitializeComponent();
		}
		auth(Form^ obj4)
		{
			obj = obj4;
			InitializeComponent();
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
	private: System::Windows::Forms::TextBox^ login_textBox;



	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ login_button;


	private: System::Windows::Forms::Label^ wrong_password;
	private: System::Windows::Forms::CheckBox^ Show_pass_checkBox;

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
			this->login_textBox = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->login_button = (gcnew System::Windows::Forms::Button());
			this->wrong_password = (gcnew System::Windows::Forms::Label());
			this->Show_pass_checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// message_auth
			// 
			this->message_auth->AutoSize = true;
			this->message_auth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->message_auth->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->message_auth->Location = System::Drawing::Point(36, 18);
			this->message_auth->Name = L"message_auth";
			this->message_auth->Size = System::Drawing::Size(570, 117);
			this->message_auth->TabIndex = 0;
			this->message_auth->Text = L"Для входа в режим \r\nадминистрирования необходимо\r\nавторизоваться";
			this->message_auth->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->message_auth->Click += gcnew System::EventHandler(this, &auth::message_auth_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label1->Location = System::Drawing::Point(101, 135);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 31);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Логин";
			this->label1->Click += gcnew System::EventHandler(this, &auth::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label2->Location = System::Drawing::Point(101, 227);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(114, 31);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Пароль";
			this->label2->Click += gcnew System::EventHandler(this, &auth::label2_Click);
			// 
			// admin_exit_button
			// 
			this->admin_exit_button->BackColor = System::Drawing::Color::Silver;
			this->admin_exit_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->admin_exit_button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->admin_exit_button->Location = System::Drawing::Point(97, 370);
			this->admin_exit_button->Name = L"admin_exit_button";
			this->admin_exit_button->Size = System::Drawing::Size(147, 67);
			this->admin_exit_button->TabIndex = 2;
			this->admin_exit_button->Text = L"назад";
			this->admin_exit_button->UseVisualStyleBackColor = false;
			this->admin_exit_button->Click += gcnew System::EventHandler(this, &auth::admin_exit_button_Click);
			// 
			// login_textBox
			// 
			this->login_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->login_textBox->Location = System::Drawing::Point(101, 169);
			this->login_textBox->Name = L"login_textBox";
			this->login_textBox->ReadOnly = true;
			this->login_textBox->Size = System::Drawing::Size(438, 38);
			this->login_textBox->TabIndex = 3;
			this->login_textBox->Text = L"admin";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(101, 261);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(438, 38);
			this->textBox2->TabIndex = 3;
			this->textBox2->UseSystemPasswordChar = true;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &auth::textBox2_TextChanged);
			// 
			// login_button
			// 
			this->login_button->BackColor = System::Drawing::Color::LightGray;
			this->login_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->login_button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->login_button->Location = System::Drawing::Point(276, 370);
			this->login_button->Name = L"login_button";
			this->login_button->Size = System::Drawing::Size(259, 67);
			this->login_button->TabIndex = 2;
			this->login_button->Text = L"вход";
			this->login_button->UseVisualStyleBackColor = false;
			this->login_button->Click += gcnew System::EventHandler(this, &auth::login_button_Click);
			// 
			// wrong_password
			// 
			this->wrong_password->AutoSize = true;
			this->wrong_password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->wrong_password->ForeColor = System::Drawing::Color::DarkRed;
			this->wrong_password->Location = System::Drawing::Point(268, 141);
			this->wrong_password->Name = L"wrong_password";
			this->wrong_password->Size = System::Drawing::Size(271, 25);
			this->wrong_password->TabIndex = 4;
			this->wrong_password->Text = L"Неверный логин или пароль";
			this->wrong_password->Visible = false;
			// 
			// Show_pass_checkBox
			// 
			this->Show_pass_checkBox->AutoSize = true;
			this->Show_pass_checkBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Show_pass_checkBox->Location = System::Drawing::Point(101, 315);
			this->Show_pass_checkBox->Name = L"Show_pass_checkBox";
			this->Show_pass_checkBox->Size = System::Drawing::Size(189, 29);
			this->Show_pass_checkBox->TabIndex = 5;
			this->Show_pass_checkBox->Text = L"Показать пароль";
			this->Show_pass_checkBox->UseVisualStyleBackColor = true;
			this->Show_pass_checkBox->CheckedChanged += gcnew System::EventHandler(this, &auth::Show_pass_checkBox_CheckedChanged);
			// 
			// auth
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(634, 461);
			this->Controls->Add(this->Show_pass_checkBox);
			this->Controls->Add(this->wrong_password);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->login_textBox);
			this->Controls->Add(this->login_button);
			this->Controls->Add(this->admin_exit_button);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->message_auth);
			this->Name = L"auth";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"Авторизация";
			this->TopMost = true;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &auth::auth_FormClosing);
			this->Load += gcnew System::EventHandler(this, &auth::auth_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void auth_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void message_auth_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void admin_exit_button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	obj->Show();
}
private: System::Void Show_pass_checkBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	textBox2->UseSystemPasswordChar = !textBox2->UseSystemPasswordChar;
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void auth_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	if (e->CloseReason == CloseReason::UserClosing) {
		Application::Exit();
	}
}
private: System::Void login_button_Click(System::Object^ sender, System::EventArgs^ e) {
	{
		try
		{
			String^ correctPassword = File::ReadAllText("password.txt")->Trim();

			if (textBox2->Text == correctPassword)
			{
				wrong_password->Visible = false;

				table_admin1^ adminForm = gcnew table_admin1(this);
				this->Hide();
				adminForm->Show();
			}
			else
			{
				wrong_password->Visible = true;
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Ошибка при проверке пароля: " + ex->Message,
				"Ошибка",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
	}

}
};
}
