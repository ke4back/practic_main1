#pragma once

namespace practicmain1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for delete_route
	/// </summary>
	public ref class delete_route : public System::Windows::Forms::Form
	{
	public:
		delete_route(void)
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
		~delete_route()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ delete_label;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;
	private: System::Windows::Forms::Button^ delete_button;

	private: System::Windows::Forms::Button^ back_button;
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
			this->delete_label = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->delete_button = (gcnew System::Windows::Forms::Button());
			this->back_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// delete_label
			// 
			this->delete_label->AutoSize = true;
			this->delete_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->delete_label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->delete_label->Location = System::Drawing::Point(12, 9);
			this->delete_label->Name = L"delete_label";
			this->delete_label->Size = System::Drawing::Size(382, 25);
			this->delete_label->TabIndex = 0;
			this->delete_label->Text = L"Выберите индекс строки для удаления ";
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(17, 48);
			this->maskedTextBox1->Mask = L"0000000";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(136, 20);
			this->maskedTextBox1->TabIndex = 1;
			this->maskedTextBox1->ValidatingType = System::Int32::typeid;
			// 
			// delete_button
			// 
			this->delete_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->delete_button->Location = System::Drawing::Point(173, 85);
			this->delete_button->Name = L"delete_button";
			this->delete_button->Size = System::Drawing::Size(218, 29);
			this->delete_button->TabIndex = 2;
			this->delete_button->Text = L"Удалить строку";
			this->delete_button->UseVisualStyleBackColor = true;
			// 
			// back_button
			// 
			this->back_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->back_button->Location = System::Drawing::Point(17, 85);
			this->back_button->Name = L"back_button";
			this->back_button->Size = System::Drawing::Size(149, 29);
			this->back_button->TabIndex = 2;
			this->back_button->Text = L"Назад";
			this->back_button->UseVisualStyleBackColor = true;
			this->back_button->Click += gcnew System::EventHandler(this, &delete_route::back_button_Click);
			// 
			// delete_route
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(406, 126);
			this->Controls->Add(this->back_button);
			this->Controls->Add(this->delete_button);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->delete_label);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"delete_route";
			this->Text = L"delete_route";
			this->Load += gcnew System::EventHandler(this, &delete_route::delete_route_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void delete_route_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void back_button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
