#pragma once

namespace practicmain1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Text;

	/// <summary>
	/// Summary for game
	/// </summary>
	public ref class game : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		game(void)
		{
			InitializeComponent();
			InitializeGame();
		}
		game(Form^ obj6)
		{
			obj = obj6;
			InitializeComponent();
			InitializeGame();
		}
	
	private:
		int score;
		int attempts;
		bool game_over;
		bool first_turn;
		char last_letter;
		String^ citiesFilePath;
		String^ citiesOutFilePath;
		StreamReader^ cities;
		StreamWriter^ citiesOut;

		void InitializeGame()
		{		
			score = 0;
			attempts = 3;
			game_over = false;
			first_turn = true;
			last_letter = '\0';

			citiesFilePath = "CITIES.txt";
			citiesOutFilePath = "cities_out.txt";

			if (!File::Exists(citiesFilePath))
			{
				MessageBox::Show("Файл с городами не найден!", "Ошибка");
				this->Close();
				return;
			}

			File::WriteAllText(citiesOutFilePath, "", Encoding::GetEncoding(1251));

			attempts_count->Text = attempts.ToString();
			info_game->Text = "Введите первый город";
			incorrect_data->Visible = false;
			textBox1->ReadOnly = true;
			textBox2->ReadOnly = false;
		}

		bool CityInFile(String^ city)
		{
			cities = gcnew StreamReader(citiesFilePath, Encoding::GetEncoding(1251));
			bool found = false;
			while (!cities->EndOfStream && !found)
			{
				String^ line = cities->ReadLine()->Trim();
				if (line->Equals(city, StringComparison::CurrentCultureIgnoreCase))
				{
					found = true;
				}
			}
			cities->Close();
			return found;
		}

		bool CityWasUsed(String^ city)
		{
			if (!File::Exists(citiesOutFilePath))
				return false;

			StreamReader^ reader = gcnew StreamReader(citiesOutFilePath, Encoding::GetEncoding(1251));
			bool found = false;
			while (!reader->EndOfStream && !found)
			{
				String^ line = reader->ReadLine()->Trim();
				if (line->Equals(city, StringComparison::CurrentCultureIgnoreCase))
				{
					found = true;
				}
			}
			reader->Close();
			return found;
		}

		void SaveUsedCity(String^ city)
		{
			citiesOut = gcnew StreamWriter(citiesOutFilePath, true, Encoding::GetEncoding(1251));
			citiesOut->WriteLine(city);
			citiesOut->Close();
		}

		String^ GetComputerCity(char letter)
		{
			cities = gcnew StreamReader(citiesFilePath, Encoding::GetEncoding(1251));
			while (!cities->EndOfStream)
			{
				String^ city = cities->ReadLine()->Trim();

				if (city->Length > 0 && Char::ToLower(city[0]) == Char::ToLower(letter))
				{
					if (!CityWasUsed(city))
					{
						cities->Close();
						return city;
					}
				}
			}
			cities->Close();
			return nullptr;
		}

		char GetLastLetter(String^ city)
		{
			char last = city[city->Length - 1];
			if (last == 'ь' || last == 'ъ' || last == 'ы')
			{
				last = city[city->Length - 2];
			}
			return Char::ToLower(last);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~game()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ info_game;
	protected:
	private: System::Windows::Forms::Label^ incorrect_data;
	private: System::Windows::Forms::TextBox^ attempts_count;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ giveup_button;
	private: System::Windows::Forms::Button^ move_button;
	private: System::Windows::Forms::Label^ guide_game;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(game::typeid));
			this->info_game = (gcnew System::Windows::Forms::Label());
			this->incorrect_data = (gcnew System::Windows::Forms::Label());
			this->attempts_count = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->giveup_button = (gcnew System::Windows::Forms::Button());
			this->move_button = (gcnew System::Windows::Forms::Button());
			this->guide_game = (gcnew System::Windows::Forms::Label());
			this->back_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// info_game
			// 
			this->info_game->AutoSize = true;
			this->info_game->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->info_game->Location = System::Drawing::Point(8, 305);
			this->info_game->Name = L"info_game";
			this->info_game->Size = System::Drawing::Size(185, 20);
			this->info_game->TabIndex = 20;
			this->info_game->Text = L"Введите первый город";
			// 
			// incorrect_data
			// 
			this->incorrect_data->AutoSize = true;
			this->incorrect_data->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->incorrect_data->ForeColor = System::Drawing::Color::Maroon;
			this->incorrect_data->Location = System::Drawing::Point(8, 334);
			this->incorrect_data->Name = L"incorrect_data";
			this->incorrect_data->Size = System::Drawing::Size(230, 20);
			this->incorrect_data->TabIndex = 19;
			this->incorrect_data->Text = L"Неверно введены данные";
			this->incorrect_data->Visible = false;
			// 
			// attempts_count
			// 
			this->attempts_count->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->attempts_count->Location = System::Drawing::Point(243, 237);
			this->attempts_count->Name = L"attempts_count";
			this->attempts_count->Size = System::Drawing::Size(37, 26);
			this->attempts_count->TabIndex = 18;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(8, 240);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(230, 20);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Оставшееся кол-во попыток:";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(12, 189);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(268, 26);
			this->textBox2->TabIndex = 15;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(12, 80);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(268, 26);
			this->textBox1->TabIndex = 16;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(8, 166);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 20);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Ваше поле:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(8, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(136, 20);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Поле соперника:";
			// 
			// giveup_button
			// 
			this->giveup_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->giveup_button->Location = System::Drawing::Point(300, 384);
			this->giveup_button->Name = L"giveup_button";
			this->giveup_button->Size = System::Drawing::Size(115, 42);
			this->giveup_button->TabIndex = 11;
			this->giveup_button->Text = L"Сдаться";
			this->giveup_button->UseVisualStyleBackColor = true;
			this->giveup_button->Click += gcnew System::EventHandler(this, &game::giveup_button_Click);
			// 
			// move_button
			// 
			this->move_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->move_button->Location = System::Drawing::Point(57, 384);
			this->move_button->Name = L"move_button";
			this->move_button->Size = System::Drawing::Size(147, 42);
			this->move_button->TabIndex = 12;
			this->move_button->Text = L"Ходить";
			this->move_button->UseVisualStyleBackColor = true;
			this->move_button->Click += gcnew System::EventHandler(this, &game::move_button_Click);
			// 
			// guide_game
			// 
			this->guide_game->AutoSize = true;
			this->guide_game->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->guide_game->Location = System::Drawing::Point(296, 14);
			this->guide_game->Name = L"guide_game";
			this->guide_game->Size = System::Drawing::Size(229, 352);
			this->guide_game->TabIndex = 10;
			this->guide_game->Text = resources->GetString(L"guide_game.Text");
			// 
			// back_button
			// 
			this->back_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->back_button->Location = System::Drawing::Point(421, 384);
			this->back_button->Name = L"back_button";
			this->back_button->Size = System::Drawing::Size(104, 42);
			this->back_button->TabIndex = 9;
			this->back_button->Text = L"Назад";
			this->back_button->UseVisualStyleBackColor = true;
			this->back_button->Click += gcnew System::EventHandler(this, &game::back_button_Click);
			// 
			// game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(540, 441);
			this->Controls->Add(this->info_game);
			this->Controls->Add(this->incorrect_data);
			this->Controls->Add(this->attempts_count);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->giveup_button);
			this->Controls->Add(this->move_button);
			this->Controls->Add(this->guide_game);
			this->Controls->Add(this->back_button);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"game";
			this->Text = L"game";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &game::game_FormClosing);
			this->Load += gcnew System::EventHandler(this, &game::game_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	 private:
		 System::Void game_Load(System::Object^ sender, System::EventArgs^ e) {
		 }

		 System::Void back_button_Click(System::Object^ sender, System::EventArgs^ e) {
			 this->Hide();
			 obj->Show();
		 }

		 System::Void move_button_Click(System::Object^ sender, System::EventArgs^ e) {
			 if (game_over) return;

			 String^ city = textBox2->Text->Trim();

			 // Проверка на пустой ввод
			 if (city->Length == 0)
			 {
				 incorrect_data->Text = "Введите название города";
				 incorrect_data->Visible = true;
				 return;
			 }

			 // Проверка наличия города в базе
			 if (!CityInFile(city))
			 {
				 incorrect_data->Text = "Такого города нет в базе";
				 incorrect_data->Visible = true;
				 attempts--;
				 attempts_count->Text = attempts.ToString();

				 if (attempts <= 0)
				 {
					 EndGame(false);
				 }
				 return;
			 }

			 // Проверка, не использовался ли город ранее
			 if (CityWasUsed(city))
			 {
				 incorrect_data->Text = "Этот город уже был назван";
				 incorrect_data->Visible = true;
				 attempts--;
				 attempts_count->Text = attempts.ToString();

				 if (attempts <= 0)
				 {
					 EndGame(false);
				 }
				 return;
			 }

			 // Проверка первой буквы (если это не первый ход)
			 if (!first_turn)
			 {
				 char firstChar = Char::ToLower(city[0]);
				 if (firstChar != last_letter)
				 {
					 incorrect_data->Text = String::Format("Город должен начинаться на букву '{0}'", last_letter);
					 incorrect_data->Visible = true;
					 attempts--;
					 attempts_count->Text = attempts.ToString();

					 if (attempts <= 0)
					 {
						 EndGame(false);
					 }
					 return;
				 }
			 }

			 // Все проверки пройдены
			 incorrect_data->Visible = false;
			 attempts = 3;
			 attempts_count->Text = attempts.ToString();
			 score += 50;

			 // Сохраняем город игрока в использованные
			 SaveUsedCity(city);

			 // Определяем последнюю букву
			 last_letter = GetLastLetter(city);

			 // Ход компьютера
			 String^ computerCity = GetComputerCity(last_letter);
			 if (computerCity == nullptr)
			 {
				 EndGame(true);
				 return;
			 }

			 // Обновляем поля: город игрока в textBox1, ответ компьютера в textBox2
			 textBox1->Text = city;
			 textBox2->Text = computerCity;

			 // Сохраняем город компьютера в использованные
			 SaveUsedCity(computerCity);

			 // Определяем последнюю букву для следующего хода
			 last_letter = GetLastLetter(computerCity);

			 // Обновляем информацию для игрока
			 info_game->Text = String::Format("Введите город на букву '{0}'", last_letter);
			 first_turn = false;
		 }

		 System::Void giveup_button_Click(System::Object^ sender, System::EventArgs^ e) {
			 EndGame(false);
		 }

		 void EndGame(bool playerWon)
		 {
			 game_over = true;
			 textBox2->ReadOnly = true;

			 if (playerWon)
			 {
				 info_game->Text = String::Format("Вы выиграли! Ваш счет: {0}", score);
			 }
			 else
			 {
				 info_game->Text = String::Format("Игра окончена. Ваш счет: {0}", score);
			 }
		 }
	private: System::Void game_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		if (e->CloseReason == CloseReason::UserClosing) {
			Application::Exit();
		}
	}
};
}