#pragma once

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm> 

namespace practicmain1 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class cities_game : public System::Windows::Forms::Form
    {
    private:
        Form^ obj;
        FILE* cities;
        FILE* cities_out;
        int score;
        int game_over;
        int first_turn;
        char last_letter;
        int attempts_left;

        // Проверка наличия города в базе
        int city_in_file(const char* city, FILE* cities)
        {
            int f = 0;
            char str[50];
            fseek(cities, 0, SEEK_SET);
            while (fgets(str, 50, cities) != NULL && f != 1)
            {
                str[strcspn(str, "\n")] = '\0';
                if (strcmp(str, city) == 0)
                    f = 1;
            }
            return f;
        }

        // Проверка, был ли город уже назван
        int city_out(const char* city, FILE* cities_out)
        {
            int f = 0;
            char str[50];
            fseek(cities_out, 0, SEEK_SET);
            while (fgets(str, 50, cities_out) != NULL && f != 1)
            {
                str[strcspn(str, "\n")] = '\0';
                if (strcmp(str, city) == 0)
                    f = 1;
            }
            return f;
        }

        // Сохранение названного города
        void save_out_city(const char* city, FILE* cities_out)
        {
            fseek(cities_out, 0, SEEK_END);
            fprintf(cities_out, "%s\n", city);
            fflush(cities_out);
        }

        // Конвертация String^ в char*
        void StringToChar(String^ str, char* buffer, int bufferSize)
        {
            int length = (str->Length < bufferSize - 1) ? str->Length : (bufferSize - 1);
            for (int i = 0; i < length; i++)
                buffer[i] = (char)str[i];
            buffer[length] = '\0';
        }

        // Ход компьютера
        void computer_move()
        {
            char city1[50];
            int f = 0;
            fseek(cities, 0, SEEK_SET);
            while (fgets(city1, 50, cities) != NULL && f != 1)
            {
                if (city1[0] == last_letter)
                    if (city_out(city1, cities_out) == 0)
                    {
                        f = 1;
                        save_out_city(city1, cities_out);
                    }
            }

            if (f == 1)
            {
                city1[strcspn(city1, "\n")] = '\0';
                last_letter = city1[strlen(city1) - 1];
                if (last_letter == 'ь' || last_letter == 'ъ' || last_letter == 'ы')
                    last_letter = city1[strlen(city1) - 2];

                textBox1->Text = gcnew String(city1);
                info_game->Text = "Противник загадывает город: " + textBox1->Text +
                    "\nВам нужно назвать город на букву '" + gcnew String(&last_letter, 1, 1) + "'";
            }
            else
            {
                info_game->Text = "Вы выиграли!\nВаш счет: " + score + " очков";
                game_over = 1;
                move_button->Enabled = false;
            }
        }

    public:
        cities_game(void)
        {
            InitializeComponent();
            InitializeGame();
        }

        cities_game(Form^ obj6)
        {
            obj = obj6;
            InitializeComponent();
            InitializeGame();
        }

        // Инициализация игры
        void InitializeGame()
        {
            cities = fopen("CITIES.txt", "r");
            if (cities == NULL)
            {
                MessageBox::Show("Не удалось открыть файл с базой городов.", "Ошибка");
                this->Close();
                return;
            }

            FILE* cities_clear = fopen("cities_out.txt", "w");
            if (cities_clear != NULL) fclose(cities_clear);

            cities_out = fopen("cities_out.txt", "r+");
            if (cities_out == NULL)
            {
                MessageBox::Show("Не удалось создать файл для использованных городов.", "Ошибка");
                fclose(cities);
                this->Close();
                return;
            }

            score = 0;
            game_over = 0;
            first_turn = 0;
            attempts_left = 3;
            attempts_count->Text = attempts_left.ToString();
            incorrect_data->Visible = false;
            move_button->Enabled = true;
            textBox1->Text = "";
            textBox2->Text = "";
            info_game->Text = "Введите первый город";
        }

    protected:
        ~cities_game()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        // Элементы формы
        System::Windows::Forms::Button^ back_button;
        System::Windows::Forms::Label^ guide_game;
        System::Windows::Forms::Button^ move_button;
        System::Windows::Forms::Label^ label1;
        System::Windows::Forms::TextBox^ textBox1;
        System::Windows::Forms::Label^ label2;
        System::Windows::Forms::TextBox^ textBox2;
        System::Windows::Forms::Button^ giveup_button;
        System::Windows::Forms::Label^ label3;
        System::Windows::Forms::TextBox^ attempts_count;
        System::Windows::Forms::Label^ incorrect_data;
        System::Windows::Forms::Label^ info_game;
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(cities_game::typeid));
            this->back_button = (gcnew System::Windows::Forms::Button());
            this->guide_game = (gcnew System::Windows::Forms::Label());
            this->move_button = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->giveup_button = (gcnew System::Windows::Forms::Button());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->attempts_count = (gcnew System::Windows::Forms::TextBox());
            this->incorrect_data = (gcnew System::Windows::Forms::Label());
            this->info_game = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();

            // back_button
            this->back_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->back_button->Location = System::Drawing::Point(425, 379);
            this->back_button->Name = L"back_button";
            this->back_button->Size = System::Drawing::Size(104, 42);
            this->back_button->TabIndex = 0;
            this->back_button->Text = L"Назад";
            this->back_button->UseVisualStyleBackColor = true;
            this->back_button->Click += gcnew System::EventHandler(this, &cities_game::back_button_Click);

            // guide_game
            this->guide_game->AutoSize = true;
            this->guide_game->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->guide_game->Location = System::Drawing::Point(300, 9);
            this->guide_game->Name = L"guide_game";
            this->guide_game->Size = System::Drawing::Size(229, 352);
            this->guide_game->TabIndex = 1;
            this->guide_game->Text = resources->GetString(L"guide_game.Text");

            // move_button
            this->move_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->move_button->Location = System::Drawing::Point(61, 379);
            this->move_button->Name = L"move_button";
            this->move_button->Size = System::Drawing::Size(147, 42);
            this->move_button->TabIndex = 2;
            this->move_button->Text = L"Ходить";
            this->move_button->UseVisualStyleBackColor = true;
            this->move_button->Click += gcnew System::EventHandler(this, &cities_game::move_button_Click);

            // label1
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label1->Location = System::Drawing::Point(12, 52);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(136, 20);
            this->label1->TabIndex = 3;
            this->label1->Text = L"Поле соперника:";

            // textBox1
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox1->Location = System::Drawing::Point(16, 75);
            this->textBox1->Name = L"textBox1";
            this->textBox1->ReadOnly = true;
            this->textBox1->Size = System::Drawing::Size(268, 26);
            this->textBox1->TabIndex = 4;

            // label2
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label2->Location = System::Drawing::Point(12, 161);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(96, 20);
            this->label2->TabIndex = 3;
            this->label2->Text = L"Ваше поле:";

            // textBox2
            this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox2->Location = System::Drawing::Point(16, 184);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(268, 26);
            this->textBox2->TabIndex = 4;

            // giveup_button
            this->giveup_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->giveup_button->Location = System::Drawing::Point(304, 379);
            this->giveup_button->Name = L"giveup_button";
            this->giveup_button->Size = System::Drawing::Size(115, 42);
            this->giveup_button->TabIndex = 2;
            this->giveup_button->Text = L"Сдаться";
            this->giveup_button->UseVisualStyleBackColor = true;
            this->giveup_button->Click += gcnew System::EventHandler(this, &cities_game::giveup_button_Click);

            // label3
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label3->Location = System::Drawing::Point(12, 235);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(230, 20);
            this->label3->TabIndex = 5;
            this->label3->Text = L"Оставшееся кол-во попыток:";

            // attempts_count
            this->attempts_count->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->attempts_count->Location = System::Drawing::Point(247, 232);
            this->attempts_count->Name = L"attempts_count";
            this->attempts_count->Size = System::Drawing::Size(37, 26);
            this->attempts_count->TabIndex = 6;

            // incorrect_data
            this->incorrect_data->AutoSize = true;
            this->incorrect_data->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->incorrect_data->ForeColor = System::Drawing::Color::Maroon;
            this->incorrect_data->Location = System::Drawing::Point(12, 329);
            this->incorrect_data->Name = L"incorrect_data";
            this->incorrect_data->Size = System::Drawing::Size(242, 20);
            this->incorrect_data->TabIndex = 7;
            this->incorrect_data->Text = L"Неверно введены данные";
            this->incorrect_data->Visible = false;

            // info_game
            this->info_game->AutoSize = true;
            this->info_game->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->info_game->Location = System::Drawing::Point(12, 300);
            this->info_game->Name = L"info_game";
            this->info_game->Size = System::Drawing::Size(185, 20);
            this->info_game->TabIndex = 8;
            this->info_game->Text = L"Введите первый город";

            // cities_game
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::Silver;
            this->ClientSize = System::Drawing::Size(541, 433);
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
            this->Name = L"cities_game";
            this->Text = L"Игра в города";
            this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &cities_game::cities_game_FormClosing);
            this->Load += gcnew System::EventHandler(this, &cities_game::cities_game_Load);
            this->ResumeLayout(false);
            this->PerformLayout();
        }
#pragma endregion

    private:
        System::Void cities_game_Load(System::Object^ sender, System::EventArgs^ e) {
            // Инициализация при загрузке формы
        }

        System::Void back_button_Click(System::Object^ sender, System::EventArgs^ e) {
            this->Hide();
            obj->Show();
        }

        System::Void move_button_Click(System::Object^ sender, System::EventArgs^ e) {
            if (game_over == 1) return;

            incorrect_data->Visible = false;
            String^ inputCity = textBox2->Text;
            if (String::IsNullOrWhiteSpace(inputCity))
            {
                incorrect_data->Text = "Введите название города!";
                incorrect_data->Visible = true;
                return;
            }

            // Конвертируем String^ в char*
            char city[50];
            StringToChar(inputCity, city, 50);

            if (city_in_file(city, cities) == 0)
            {
                incorrect_data->Text = "Такого города нет в базе!";
                incorrect_data->Visible = true;
                attempts_left--;
                attempts_count->Text = attempts_left.ToString();
                if (attempts_left <= 0)
                {
                    EndGame();
                }
                return;
            }

            if (city_out(city, cities_out) == 1)
            {
                incorrect_data->Text = "Этот город уже был!";
                incorrect_data->Visible = true;
                attempts_left--;
                attempts_count->Text = attempts_left.ToString();
                if (attempts_left <= 0)
                {
                    EndGame();
                }
                return;
            }

            if (first_turn == 0)
            {
                last_letter = city[strlen(city) - 1];
                if (last_letter == 'ь' || last_letter == 'ъ' || last_letter == 'ы')
                    last_letter = city[strlen(city) - 2];

                save_out_city(city, cities_out);
                first_turn = 1;
                score += 50;

                info_game->Text = "Ответ принят! Следующий город должен начинаться на '" + gcnew String(&last_letter, 1, 1) + "'";
                textBox2->Text = "";
                computer_move();
            }
            else
            {
                char first_letter = city[0];
                if (last_letter == first_letter)
                {
                    last_letter = city[strlen(city) - 1];
                    if (last_letter == 'ь' || last_letter == 'ъ' || last_letter == 'ы')
                        last_letter = city[strlen(city) - 2];

                    save_out_city(city, cities_out);
                    score += 50;

                    info_game->Text = "Ответ принят! Следующий город должен начинаться на '" + gcnew String(&last_letter, 1, 1) + "'";
                    textBox2->Text = "";
                    computer_move();
                }
                else
                {
                    incorrect_data->Text = "Город должен начинаться на '" + gcnew String(&last_letter, 1, 1) + "'!";
                    incorrect_data->Visible = true;
                    attempts_left--;
                    attempts_count->Text = attempts_left.ToString();
                    if (attempts_left <= 0)
                    {
                        EndGame();
                    }
                }
            }
        }

        void EndGame()
        {
            game_over = 1;
            move_button->Enabled = false;
            info_game->Text = "Игра окончена!\nВаш счет: " + score + " очков";
        }

        System::Void giveup_button_Click(System::Object^ sender, System::EventArgs^ e) {
            EndGame();
        }

        System::Void cities_game_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
            if (cities != NULL) fclose(cities);
            if (cities_out != NULL) fclose(cities_out);
        }
    };
}