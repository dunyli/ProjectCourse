#pragma once
#include "change_pass.h"

namespace ProjectCourse {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для password
	/// </summary>
	public ref class password : public System::Windows::Forms::Form
	{
	public:
		password(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	public: bool prov_pass = false;
	public:
		/*Переменная для проверки пароля*/
		String^ pass_right;
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~password()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_password;
	protected:
	private: System::Windows::Forms::TextBox^ textBox_password;
	private: System::Windows::Forms::Button^ button_password_enter;
	private: System::Windows::Forms::Button^ button_password_back;
	private: System::Windows::Forms::Button^ button_password_change;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label_password = (gcnew System::Windows::Forms::Label());
			this->textBox_password = (gcnew System::Windows::Forms::TextBox());
			this->button_password_enter = (gcnew System::Windows::Forms::Button());
			this->button_password_back = (gcnew System::Windows::Forms::Button());
			this->button_password_change = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label_password
			// 
			this->label_password->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label_password->AutoSize = true;
			this->label_password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_password->Location = System::Drawing::Point(271, 218);
			this->label_password->Name = L"label_password";
			this->label_password->Size = System::Drawing::Size(932, 201);
			this->label_password->TabIndex = 0;
			this->label_password->Text = L"   Вход в режим администратора\r\n\r\n              Введите пароль:";
			// 
			// textBox_password
			// 
			this->textBox_password->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox_password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox_password->Location = System::Drawing::Point(500, 444);
			this->textBox_password->Name = L"textBox_password";
			this->textBox_password->Size = System::Drawing::Size(462, 67);
			this->textBox_password->TabIndex = 1;
			// 
			// button_password_enter
			// 
			this->button_password_enter->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_password_enter->BackColor = System::Drawing::Color::SeaShell;
			this->button_password_enter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_password_enter->Location = System::Drawing::Point(500, 541);
			this->button_password_enter->Name = L"button_password_enter";
			this->button_password_enter->Size = System::Drawing::Size(462, 141);
			this->button_password_enter->TabIndex = 2;
			this->button_password_enter->Text = L"Ввод";
			this->button_password_enter->UseVisualStyleBackColor = false;
			this->button_password_enter->Click += gcnew System::EventHandler(this, &password::button_password_enter_Click);
			// 
			// button_password_back
			// 
			this->button_password_back->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_password_back->BackColor = System::Drawing::Color::SeaShell;
			this->button_password_back->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_password_back->Location = System::Drawing::Point(976, 31);
			this->button_password_back->Name = L"button_password_back";
			this->button_password_back->Size = System::Drawing::Size(435, 108);
			this->button_password_back->TabIndex = 3;
			this->button_password_back->Text = L"Вернуться назад";
			this->button_password_back->UseVisualStyleBackColor = false;
			this->button_password_back->Click += gcnew System::EventHandler(this, &password::button_password_back_Click);
			// 
			// button_password_change
			// 
			this->button_password_change->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_password_change->BackColor = System::Drawing::Color::SeaShell;
			this->button_password_change->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_password_change->Location = System::Drawing::Point(31, 764);
			this->button_password_change->Name = L"button_password_change";
			this->button_password_change->Size = System::Drawing::Size(395, 108);
			this->button_password_change->TabIndex = 4;
			this->button_password_change->Text = L"Сменить пароль";
			this->button_password_change->UseVisualStyleBackColor = false;
			this->button_password_change->Click += gcnew System::EventHandler(this, &password::button_password_change_Click);
			// 
			// password
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ClientSize = System::Drawing::Size(1448, 902);
			this->Controls->Add(this->button_password_change);
			this->Controls->Add(this->button_password_back);
			this->Controls->Add(this->button_password_enter);
			this->Controls->Add(this->textBox_password);
			this->Controls->Add(this->label_password);
			this->Name = L"password";
			this->Text = L"Ввод пароля";
			this->Load += gcnew System::EventHandler(this, &password::password_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		/*Возвращение назад, к форме login*/
	private: System::Void button_password_back_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
		   /*Нажатие кнопки ВВОД*/
	private: System::Void button_password_enter_Click(System::Object^ sender, System::EventArgs^ e) {
		/*Открытие заранее созданного файла, с записанным паролем*/
		if (IO::File::Exists("pass.txt")) {
			StreamReader^ pass = gcnew StreamReader("pass.txt");
			pass_right = pass->ReadLine();
			pass->Close();
			String^ pass_input = textBox_password->Text;
			if (pass_input == pass_right)
			{
				prov_pass = true;
				this->Hide();
			}
			else {
				textBox_password->Text = "";
				MessageBox::Show("Неверный пароль!\nПовторите ввод.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else {
			StreamWriter^ new_pass = gcnew StreamWriter("pass.txt");
			pass_right = textBox_password->Text;
			new_pass->Write(pass_right);
			new_pass->WriteLine();
			new_pass->Close();
			MessageBox::Show("Пароль сохранён", "Успешно", MessageBoxButtons::OK, MessageBoxIcon::Information);
			textBox_password->Clear();
			this->Hide();
		}
	}
		   /*Нажатие кнопки Сменить пароль, открывается форма change_pass.h*/
	private: System::Void button_password_change_Click(System::Object^ sender, System::EventArgs^ e) {
		change_pass^ change = gcnew change_pass;
		change->Show();
	}
	private: System::Void password_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
