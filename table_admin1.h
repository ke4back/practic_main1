#pragma once
#include "Routes.h"
#include "search.h"
#include "delete_route.h"

namespace practicmain1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for table_admin
	/// </summary>
	public ref class table_admin1 : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		table_admin1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		table_admin1(Form^ obj2)
		{
			obj = obj2;
			InitializeComponent();
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~table_admin1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ main_table;
	protected:







	private: System::Windows::Forms::Button^ table_exit_button;
	private: System::Windows::Forms::Button^ search_routes_button;
	private: System::Windows::Forms::Button^ change_button;


	private: System::Windows::Forms::Button^ delete_route_button;
	private: System::Windows::Forms::Button^ new_route_button;
	private: System::Windows::Forms::Label^ table_name;
	private: System::Windows::Forms::Button^ back_button;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ index;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ number;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ destination;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ date;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ time;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ seats_count;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ price;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void LoadRoutesData()
		{
			try
			{
				main_table->Rows->Clear();

				// Используем using для автоматического закрытия потока
				String^ allText = File::ReadAllText("routes.txt", System::Text::Encoding::GetEncoding(1251));
				array<String^>^ lines = allText->Split('\n');
				int index = 1;

				for each (String ^ line in lines)
				{
					if (!String::IsNullOrWhiteSpace(line))
					{
						array<String^>^ parts = line->Trim()->Split(' ');
						if (parts->Length >= 6)
						{
							main_table->Rows->Add(
								index++,
								parts[0],
								parts[1],
								parts[2],
								parts[3],
								parts[4],
								parts[5]
							);
						}
					}
				}
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Ошибка при загрузке данных: " + ex->Message,
					"Ошибка",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error);
			}
		}
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
			this->table_exit_button = (gcnew System::Windows::Forms::Button());
			this->search_routes_button = (gcnew System::Windows::Forms::Button());
			this->change_button = (gcnew System::Windows::Forms::Button());
			this->delete_route_button = (gcnew System::Windows::Forms::Button());
			this->new_route_button = (gcnew System::Windows::Forms::Button());
			this->table_name = (gcnew System::Windows::Forms::Label());
			this->back_button = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->main_table))->BeginInit();
			this->SuspendLayout();
			// 
			// main_table
			// 
			this->main_table->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->main_table->AllowUserToAddRows = false;
			this->main_table->AllowUserToDeleteRows = false;
			this->main_table->AllowUserToOrderColumns = true;
			this->main_table->AllowUserToResizeColumns = false;
			this->main_table->AllowUserToResizeRows = false;
			this->main_table->ColumnHeadersHeight = 50;
			this->main_table->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->index, this->number,
					this->destination, this->date, this->time, this->seats_count, this->price
			});
			this->main_table->Location = System::Drawing::Point(20, 53);
			this->main_table->Name = L"main_table";
			this->main_table->ReadOnly = true;
			this->main_table->Size = System::Drawing::Size(949, 526);
			this->main_table->TabIndex = 11;
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
			// 
			// table_exit_button
			// 
			this->table_exit_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->table_exit_button->Location = System::Drawing::Point(819, 585);
			this->table_exit_button->Name = L"table_exit_button";
			this->table_exit_button->Size = System::Drawing::Size(150, 50);
			this->table_exit_button->TabIndex = 5;
			this->table_exit_button->Text = L"выход";
			this->table_exit_button->UseVisualStyleBackColor = true;
			this->table_exit_button->Click += gcnew System::EventHandler(this, &table_admin1::table_exit_button_Click);
			// 
			// search_routes_button
			// 
			this->search_routes_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->search_routes_button->Location = System::Drawing::Point(488, 585);
			this->search_routes_button->Name = L"search_routes_button";
			this->search_routes_button->Size = System::Drawing::Size(150, 50);
			this->search_routes_button->TabIndex = 6;
			this->search_routes_button->Text = L"поиск рейсов";
			this->search_routes_button->UseVisualStyleBackColor = true;
			this->search_routes_button->Click += gcnew System::EventHandler(this, &table_admin1::search_routes_button_Click);
			// 
			// change_button
			// 
			this->change_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->change_button->Location = System::Drawing::Point(332, 585);
			this->change_button->Name = L"change_button";
			this->change_button->Size = System::Drawing::Size(150, 50);
			this->change_button->TabIndex = 8;
			this->change_button->Text = L"изменение рейса";
			this->change_button->UseVisualStyleBackColor = true;
			// 
			// delete_route_button
			// 
			this->delete_route_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->delete_route_button->Location = System::Drawing::Point(176, 585);
			this->delete_route_button->Name = L"delete_route_button";
			this->delete_route_button->Size = System::Drawing::Size(150, 50);
			this->delete_route_button->TabIndex = 9;
			this->delete_route_button->Text = L"удаление рейса";
			this->delete_route_button->UseVisualStyleBackColor = true;
			this->delete_route_button->Click += gcnew System::EventHandler(this, &table_admin1::delete_route_button_Click);
			// 
			// new_route_button
			// 
			this->new_route_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->new_route_button->Location = System::Drawing::Point(20, 585);
			this->new_route_button->Name = L"new_route_button";
			this->new_route_button->Size = System::Drawing::Size(150, 50);
			this->new_route_button->TabIndex = 10;
			this->new_route_button->Text = L"запись нового рейса";
			this->new_route_button->UseVisualStyleBackColor = true;
			// 
			// table_name
			// 
			this->table_name->AutoSize = true;
			this->table_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->table_name->Location = System::Drawing::Point(15, 25);
			this->table_name->Name = L"table_name";
			this->table_name->Size = System::Drawing::Size(270, 25);
			this->table_name->TabIndex = 4;
			this->table_name->Text = L"Все данные из базы данных";
			// 
			// back_button
			// 
			this->back_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->back_button->Location = System::Drawing::Point(663, 585);
			this->back_button->Name = L"back_button";
			this->back_button->Size = System::Drawing::Size(150, 50);
			this->back_button->TabIndex = 5;
			this->back_button->Text = L"назад";
			this->back_button->UseVisualStyleBackColor = true;
			this->back_button->Click += gcnew System::EventHandler(this, &table_admin1::back_button_Click);
			// 
			// table_admin1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(984, 661);
			this->Controls->Add(this->main_table);
			this->Controls->Add(this->back_button);
			this->Controls->Add(this->table_exit_button);
			this->Controls->Add(this->search_routes_button);
			this->Controls->Add(this->change_button);
			this->Controls->Add(this->delete_route_button);
			this->Controls->Add(this->new_route_button);
			this->Controls->Add(this->table_name);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"table_admin1";
			this->Text = L"table_admin";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &table_admin1::table_admin1_FormClosing);
			this->Load += gcnew System::EventHandler(this, &table_admin1::table_admin1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->main_table))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void table_admin1_Load(System::Object^ sender, System::EventArgs^ e) {
	LoadRoutesData();
}
private: System::Void table_exit_button_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void back_button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	obj->Show();
}
private: System::Void table_admin1_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	if (e->CloseReason == CloseReason::UserClosing) {
		Application::Exit();
	}
}
private: System::Void search_routes_button_Click(System::Object^ sender, System::EventArgs^ e) {
	search^ Search = gcnew search(this);
	this->Hide();
	Search->Show();
}
private: System::Void delete_route_button_Click(System::Object^ sender, System::EventArgs^ e) {
	delete_route^ Delete = gcnew delete_route();
	Delete->ShowDialog();
	LoadRoutesData();
}
};
}
