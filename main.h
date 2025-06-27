#pragma once
#include"auth.h"
#include"table.h"

namespace practicmain1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for main
	/// </summary>
	public ref class main : public System::Windows::Forms::Form
	{
	public:
		main(void)
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
		~main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ name;
	private: System::Windows::Forms::Button^ exit_button;
	private: System::Windows::Forms::Button^ admin_auth_button;
	private: System::Windows::Forms::Button^ guest_button;




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
			this->name = (gcnew System::Windows::Forms::Label());
			this->exit_button = (gcnew System::Windows::Forms::Button());
			this->admin_auth_button = (gcnew System::Windows::Forms::Button());
			this->guest_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// name
			// 
			this->name->AutoSize = true;
			this->name->BackColor = System::Drawing::Color::Transparent;
			this->name->Font = (gcnew System::Drawing::Font(L"Leelawadee", 27, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->name->Location = System::Drawing::Point(47, 33);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(539, 86);
			this->name->TabIndex = 0;
			this->name->Text = L"Расписание междугородних\r\nавтобусных рейсов";
			this->name->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// exit_button
			// 
			this->exit_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exit_button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->exit_button->Location = System::Drawing::Point(174, 350);
			this->exit_button->Name = L"exit_button";
			this->exit_button->Size = System::Drawing::Size(300, 80);
			this->exit_button->TabIndex = 1;
			this->exit_button->Text = L"выход";
			this->exit_button->UseVisualStyleBackColor = true;
			this->exit_button->Click += gcnew System::EventHandler(this, &main::button3_Click);
			// 
			// admin_auth_button
			// 
			this->admin_auth_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->admin_auth_button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->admin_auth_button->Location = System::Drawing::Point(17, 142);
			this->admin_auth_button->Name = L"admin_auth_button";
			this->admin_auth_button->Size = System::Drawing::Size(600, 80);
			this->admin_auth_button->TabIndex = 1;
			this->admin_auth_button->Text = L"Авторизоваться как админ";
			this->admin_auth_button->UseVisualStyleBackColor = true;
			this->admin_auth_button->Click += gcnew System::EventHandler(this, &main::button1_Click);
			// 
			// guest_button
			// 
			this->guest_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->guest_button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->guest_button->Location = System::Drawing::Point(17, 245);
			this->guest_button->Name = L"guest_button";
			this->guest_button->Size = System::Drawing::Size(600, 80);
			this->guest_button->TabIndex = 1;
			this->guest_button->TabStop = false;
			this->guest_button->Text = L"Просмотр в обычном режиме";
			this->guest_button->UseVisualStyleBackColor = true;
			this->guest_button->Click += gcnew System::EventHandler(this, &main::button2_Click);
			// 
			// main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(634, 461);
			this->Controls->Add(this->admin_auth_button);
			this->Controls->Add(this->guest_button);
			this->Controls->Add(this->exit_button);
			this->Controls->Add(this->name);
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"main";
			this->Text = L"Автопарк";
			this->Load += gcnew System::EventHandler(this, &main::main_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		auth^ Auth = gcnew auth();
		Auth->Show();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		table^ Table = gcnew table(this);
		Table->ShowDialog();	
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void main_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
