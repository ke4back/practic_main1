#pragma once
#include "search.h"
#include "cities_game.h"

namespace practicmain1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for table
	/// </summary>
	public ref class table : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		table(void)
		{
			InitializeComponent();
			LoadRoutesData();
		}

		table(Form^ obj1)
		{
			obj = obj1;
			InitializeComponent();
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~table()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ table_name;

	private: System::Windows::Forms::Button^ search_routes_button;


	private: System::Windows::Forms::Button^ table_exit_button;
	private: System::Windows::Forms::DataGridView^ main_table;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ index;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ number;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ destination;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ date;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ time;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ seats_count;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ price;
	private: System::Windows::Forms::Button^ upd_btn;
	private: System::Windows::Forms::Button^ game_button;

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
		
		void LoadRoutesData()
		{
			try
			{
				main_table->Rows->Clear();

				StreamReader^ reader = gcnew StreamReader("routes.txt", System::Text::Encoding::GetEncoding(1251));
				int index = 1;

				while (!reader->EndOfStream)
				{
					String^ line = reader->ReadLine();
					array<String^>^ parts = line->Split(' ');

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
			this->table_name = (gcnew System::Windows::Forms::Label());
			this->search_routes_button = (gcnew System::Windows::Forms::Button());
			this->table_exit_button = (gcnew System::Windows::Forms::Button());
			this->main_table = (gcnew System::Windows::Forms::DataGridView());
			this->index = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->number = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->destination = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->time = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->seats_count = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->upd_btn = (gcnew System::Windows::Forms::Button());
			this->game_button = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->main_table))->BeginInit();
			this->SuspendLayout();
			// 
			// table_name
			// 
			this->table_name->AutoSize = true;
			this->table_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->table_name->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->table_name->Location = System::Drawing::Point(13, 30);
			this->table_name->Name = L"table_name";
			this->table_name->Size = System::Drawing::Size(270, 25);
			this->table_name->TabIndex = 1;
			this->table_name->Text = L"Все данные из базы данных";
			// 
			// search_routes_button
			// 
			this->search_routes_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->search_routes_button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->search_routes_button->Location = System::Drawing::Point(18, 599);
			this->search_routes_button->Name = L"search_routes_button";
			this->search_routes_button->Size = System::Drawing::Size(150, 50);
			this->search_routes_button->TabIndex = 2;
			this->search_routes_button->Text = L"поиск рейсов";
			this->search_routes_button->UseVisualStyleBackColor = true;
			this->search_routes_button->Click += gcnew System::EventHandler(this, &table::search_routes_button_Click);
			// 
			// table_exit_button
			// 
			this->table_exit_button->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->table_exit_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->table_exit_button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->table_exit_button->Location = System::Drawing::Point(818, 599);
			this->table_exit_button->Name = L"table_exit_button";
			this->table_exit_button->Size = System::Drawing::Size(150, 50);
			this->table_exit_button->TabIndex = 2;
			this->table_exit_button->Text = L"назад";
			this->table_exit_button->UseVisualStyleBackColor = true;
			this->table_exit_button->Click += gcnew System::EventHandler(this, &table::table_exit_button_Click);
			// 
			// main_table
			// 
			this->main_table->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->main_table->AllowUserToAddRows = false;
			this->main_table->AllowUserToDeleteRows = false;
			this->main_table->AllowUserToResizeColumns = false;
			this->main_table->AllowUserToResizeRows = false;
			this->main_table->ColumnHeadersHeight = 50;
			this->main_table->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->index, this->number,
					this->destination, this->date, this->time, this->seats_count, this->price
			});
			this->main_table->Location = System::Drawing::Point(18, 58);
			this->main_table->Name = L"main_table";
			this->main_table->ReadOnly = true;
			this->main_table->Size = System::Drawing::Size(950, 526);
			this->main_table->TabIndex = 3;
			// 
			// index
			// 
			this->index->HeaderText = L"Индекс";
			this->index->Name = L"index";
			this->index->ReadOnly = true;
			this->index->Width = 55;
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
			// upd_btn
			// 
			this->upd_btn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->upd_btn->Location = System::Drawing::Point(878, 21);
			this->upd_btn->Name = L"upd_btn";
			this->upd_btn->Size = System::Drawing::Size(89, 33);
			this->upd_btn->TabIndex = 4;
			this->upd_btn->Text = L"Обновить";
			this->upd_btn->UseVisualStyleBackColor = true;
			this->upd_btn->Click += gcnew System::EventHandler(this, &table::upd_btn_Click);
			// 
			// game_button
			// 
			this->game_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->game_button->Location = System::Drawing::Point(662, 599);
			this->game_button->Name = L"game_button";
			this->game_button->Size = System::Drawing::Size(150, 49);
			this->game_button->TabIndex = 5;
			this->game_button->Text = L"Игра";
			this->game_button->UseVisualStyleBackColor = true;
			this->game_button->Click += gcnew System::EventHandler(this, &table::game_button_Click);
			// 
			// table
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(987, 661);
			this->Controls->Add(this->game_button);
			this->Controls->Add(this->upd_btn);
			this->Controls->Add(this->main_table);
			this->Controls->Add(this->table_exit_button);
			this->Controls->Add(this->search_routes_button);
			this->Controls->Add(this->table_name);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"table";
			this->Text = L"table";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &table::table_FormClosing);
			this->Load += gcnew System::EventHandler(this, &table::table_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->main_table))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void table_exit_button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		obj->Show();

	}
private: System::Void search_routes_button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	search^ Search = gcnew search(this);
	Search->ShowDialog();
}
private: System::Void table_Load(System::Object^ sender, System::EventArgs^ e) {
	LoadRoutesData();
}
private: System::Void table_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	if (e->CloseReason == CloseReason::UserClosing) {
		Application::Exit();
	}
}
private: System::Void upd_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	LoadRoutesData();
}
private: System::Void game_button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	cities_game^ Game = gcnew cities_game(this);
	Game->ShowDialog();
}
};
}
