#pragma once

namespace ProjectCourse {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для change_pass
	/// </summary>
	public ref class change_pass : public System::Windows::Forms::Form
	{
	public:
		change_pass(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	private: System::Windows::Forms::Button^ button_change_pass_enter_new;
	private: System::Windows::Forms::TextBox^ textBox_change_pass_new;
	private: System::Windows::Forms::Label^ label_change_pass_new;


	public:
	public:
		/*Переменная для проверки пароля*/
		String^ pass_right;
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~change_pass()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_change_pass_back;
	private: System::Windows::Forms::Button^ button_change_pass_enter_old;
	private: System::Windows::Forms::TextBox^ textBox_change_pass_old;


	private: System::Windows::Forms::Label^ label_change_pass_old;
	protected:

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
			this->button_change_pass_back = (gcnew System::Windows::Forms::Button());
			this->button_change_pass_enter_old = (gcnew System::Windows::Forms::Button());
			this->textBox_change_pass_old = (gcnew System::Windows::Forms::TextBox());
			this->label_change_pass_old = (gcnew System::Windows::Forms::Label());
			this->button_change_pass_enter_new = (gcnew System::Windows::Forms::Button());
			this->textBox_change_pass_new = (gcnew System::Windows::Forms::TextBox());
			this->label_change_pass_new = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button_change_pass_back
			// 
			this->button_change_pass_back->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_change_pass_back->BackColor = System::Drawing::Color::SeaShell;
			this->button_change_pass_back->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_change_pass_back->Location = System::Drawing::Point(936, 29);
			this->button_change_pass_back->Name = L"button_change_pass_back";
			this->button_change_pass_back->Size = System::Drawing::Size(435, 108);
			this->button_change_pass_back->TabIndex = 4;
			this->button_change_pass_back->Text = L"Вернуться назад";
			this->button_change_pass_back->UseVisualStyleBackColor = false;
			this->button_change_pass_back->Click += gcnew System::EventHandler(this, &change_pass::button_change_pass_back_Click);
			// 
			// button_change_pass_enter_old
			// 
			this->button_change_pass_enter_old->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_change_pass_enter_old->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_change_pass_enter_old->Location = System::Drawing::Point(494, 545);
			this->button_change_pass_enter_old->Name = L"button_change_pass_enter_old";
			this->button_change_pass_enter_old->Size = System::Drawing::Size(462, 141);
			this->button_change_pass_enter_old->TabIndex = 5;
			this->button_change_pass_enter_old->Text = L"Ввод";
			this->button_change_pass_enter_old->UseVisualStyleBackColor = true;
			this->button_change_pass_enter_old->Click += gcnew System::EventHandler(this, &change_pass::button_change_pass_enter_old_Click);
			// 
			// textBox_change_pass_old
			// 
			this->textBox_change_pass_old->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox_change_pass_old->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox_change_pass_old->Location = System::Drawing::Point(494, 436);
			this->textBox_change_pass_old->Name = L"textBox_change_pass_old";
			this->textBox_change_pass_old->Size = System::Drawing::Size(462, 67);
			this->textBox_change_pass_old->TabIndex = 6;
			// 
			// label_change_pass_old
			// 
			this->label_change_pass_old->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label_change_pass_old->AutoSize = true;
			this->label_change_pass_old->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_change_pass_old->Location = System::Drawing::Point(125, 298);
			this->label_change_pass_old->Name = L"label_change_pass_old";
			this->label_change_pass_old->Size = System::Drawing::Size(1172, 110);
			this->label_change_pass_old->TabIndex = 7;
			this->label_change_pass_old->Text = L"Смена пароля для входа в режим администратора\r\n      Для смены пароля, введите ст"
				L"арый пароль:\r\n";
			// 
			// button_change_pass_enter_new
			// 
			this->button_change_pass_enter_new->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_change_pass_enter_new->BackColor = System::Drawing::Color::SeaShell;
			this->button_change_pass_enter_new->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_change_pass_enter_new->Location = System::Drawing::Point(494, 545);
			this->button_change_pass_enter_new->Name = L"button_change_pass_enter_new";
			this->button_change_pass_enter_new->Size = System::Drawing::Size(462, 141);
			this->button_change_pass_enter_new->TabIndex = 8;
			this->button_change_pass_enter_new->Text = L"Ввод";
			this->button_change_pass_enter_new->UseVisualStyleBackColor = false;
			this->button_change_pass_enter_new->Visible = false;
			this->button_change_pass_enter_new->Click += gcnew System::EventHandler(this, &change_pass::button_change_pass_enter_new_Click);
			// 
			// textBox_change_pass_new
			// 
			this->textBox_change_pass_new->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox_change_pass_new->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox_change_pass_new->Location = System::Drawing::Point(494, 436);
			this->textBox_change_pass_new->Name = L"textBox_change_pass_new";
			this->textBox_change_pass_new->Size = System::Drawing::Size(462, 67);
			this->textBox_change_pass_new->TabIndex = 9;
			this->textBox_change_pass_new->Visible = false;
			// 
			// label_change_pass_new
			// 
			this->label_change_pass_new->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label_change_pass_new->AutoSize = true;
			this->label_change_pass_new->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_change_pass_new->Location = System::Drawing::Point(448, 353);
			this->label_change_pass_new->Name = L"label_change_pass_new";
			this->label_change_pass_new->Size = System::Drawing::Size(551, 55);
			this->label_change_pass_new->TabIndex = 10;
			this->label_change_pass_new->Text = L"Введите новый пароль:";
			this->label_change_pass_new->Visible = false;
			// 
			// change_pass
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ClientSize = System::Drawing::Size(1429, 907);
			this->Controls->Add(this->label_change_pass_new);
			this->Controls->Add(this->textBox_change_pass_new);
			this->Controls->Add(this->button_change_pass_enter_new);
			this->Controls->Add(this->label_change_pass_old);
			this->Controls->Add(this->textBox_change_pass_old);
			this->Controls->Add(this->button_change_pass_enter_old);
			this->Controls->Add(this->button_change_pass_back);
			this->Name = L"change_pass";
			this->Text = L"Смена пароля";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		/*Обработка кнопки вернуться обратно*/
	private: System::Void button_change_pass_back_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}
		   /*Обработка кнопки Ввод новового пароля*/
	private: System::Void button_change_pass_enter_new_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox_change_pass_new->Text == String::Empty)
		{
			MessageBox::Show("Введите пароль!", "Неверный ввод!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else {
			StreamWriter^ new_pass = gcnew StreamWriter("pass.txt");
			pass_right = textBox_change_pass_new->Text;
			new_pass->Write(pass_right);
			new_pass->WriteLine();
			new_pass->Close();
			MessageBox::Show("Пароль сохранён", "Успешно", MessageBoxButtons::OK, MessageBoxIcon::Information);
			textBox_change_pass_new->Clear();
			this->Hide();
		}
	}
		   /*Обработка кнопки Ввод старого пароля*/
	private: System::Void button_change_pass_enter_old_Click(System::Object^ sender, System::EventArgs^ e) {
		/*Открытие заранее созданного файла, с записанным паролем*/
		StreamReader^ pass = gcnew  StreamReader("pass.txt");
		pass_right = pass->ReadLine();
		pass->Close();
		String^ pass_input;
		pass_input = textBox_change_pass_old->Text;
		if (pass_input == pass_right)
		{
			label_change_pass_old->Visible = false;
			label_change_pass_new->Visible = true;
			textBox_change_pass_old->Visible = false;
			textBox_change_pass_new->Visible = true;
			button_change_pass_enter_old->Visible = false;
			button_change_pass_enter_new->Visible = true;
			textBox_change_pass_old->Clear();
		}
		else {
			textBox_change_pass_old->Text = "";
			MessageBox::Show("Неверный пароль!\nПовторите ввод.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	};
}
