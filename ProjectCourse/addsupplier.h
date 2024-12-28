#pragma once

namespace ProjectCourse {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для addclient
	/// </summary>
	public ref class addsupplier : public System::Windows::Forms::Form
	{
	public:
		addsupplier(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

		/*Строка для добавления*/
	public: String^ supplieradding;
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~addsupplier()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_addsupplier_head;
	private: System::Windows::Forms::Label^ label_addsupplier_name;
	private: System::Windows::Forms::TextBox^ textBox_addsupplier_name;
	private: System::Windows::Forms::Label^ label_addsupplier_address;
	private: System::Windows::Forms::TextBox^ textBox_addsupplier_address;
	protected:

	protected:

	protected:




	private: System::Windows::Forms::Label^ label_addsupplier_phone;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox_addsupplier_phone;
	private: System::Windows::Forms::Button^ button_addsupplier_enter;
	private: System::Windows::Forms::Button^ button_addsupplier_exit;






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
			this->label_addsupplier_head = (gcnew System::Windows::Forms::Label());
			this->label_addsupplier_name = (gcnew System::Windows::Forms::Label());
			this->textBox_addsupplier_name = (gcnew System::Windows::Forms::TextBox());
			this->label_addsupplier_address = (gcnew System::Windows::Forms::Label());
			this->textBox_addsupplier_address = (gcnew System::Windows::Forms::TextBox());
			this->label_addsupplier_phone = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox_addsupplier_phone = (gcnew System::Windows::Forms::MaskedTextBox());
			this->button_addsupplier_enter = (gcnew System::Windows::Forms::Button());
			this->button_addsupplier_exit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label_addsupplier_head
			// 
			this->label_addsupplier_head->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label_addsupplier_head->AutoSize = true;
			this->label_addsupplier_head->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_addsupplier_head->Location = System::Drawing::Point(223, 44);
			this->label_addsupplier_head->Name = L"label_addsupplier_head";
			this->label_addsupplier_head->Size = System::Drawing::Size(1457, 61);
			this->label_addsupplier_head->TabIndex = 0;
			this->label_addsupplier_head->Text = L"Для добавления поставщика, заполните все данные поля";
			// 
			// label_addsupplier_name
			// 
			this->label_addsupplier_name->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label_addsupplier_name->AutoSize = true;
			this->label_addsupplier_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_addsupplier_name->Location = System::Drawing::Point(25, 165);
			this->label_addsupplier_name->Name = L"label_addsupplier_name";
			this->label_addsupplier_name->Size = System::Drawing::Size(570, 84);
			this->label_addsupplier_name->TabIndex = 1;
			this->label_addsupplier_name->Text = L"Введите название поставщика:\r\nОбразец: ООО Агроторг";
			// 
			// textBox_addsupplier_name
			// 
			this->textBox_addsupplier_name->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox_addsupplier_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox_addsupplier_name->Location = System::Drawing::Point(32, 274);
			this->textBox_addsupplier_name->Name = L"textBox_addsupplier_name";
			this->textBox_addsupplier_name->Size = System::Drawing::Size(733, 56);
			this->textBox_addsupplier_name->TabIndex = 2;
			// 
			// label_addsupplier_address
			// 
			this->label_addsupplier_address->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label_addsupplier_address->AutoSize = true;
			this->label_addsupplier_address->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_addsupplier_address->Location = System::Drawing::Point(982, 165);
			this->label_addsupplier_address->Name = L"label_addsupplier_address";
			this->label_addsupplier_address->Size = System::Drawing::Size(730, 84);
			this->label_addsupplier_address->TabIndex = 3;
			this->label_addsupplier_address->Text = L"Введите адрес поставщика:\r\nОбразец: Барнаул, ул.Пушкина 22, кв.22\r\n";
			// 
			// textBox_addsupplier_address
			// 
			this->textBox_addsupplier_address->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox_addsupplier_address->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox_addsupplier_address->Location = System::Drawing::Point(989, 274);
			this->textBox_addsupplier_address->Name = L"textBox_addsupplier_address";
			this->textBox_addsupplier_address->Size = System::Drawing::Size(733, 56);
			this->textBox_addsupplier_address->TabIndex = 4;
			// 
			// label_addsupplier_phone
			// 
			this->label_addsupplier_phone->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label_addsupplier_phone->AutoSize = true;
			this->label_addsupplier_phone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_addsupplier_phone->Location = System::Drawing::Point(25, 373);
			this->label_addsupplier_phone->Name = L"label_addsupplier_phone";
			this->label_addsupplier_phone->Size = System::Drawing::Size(558, 84);
			this->label_addsupplier_phone->TabIndex = 5;
			this->label_addsupplier_phone->Text = L"Введите телефон поставщика:\r\nОбразец: (987) 654-3210\r\n";
			// 
			// maskedTextBox_addsupplier_phone
			// 
			this->maskedTextBox_addsupplier_phone->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->maskedTextBox_addsupplier_phone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->maskedTextBox_addsupplier_phone->Location = System::Drawing::Point(32, 477);
			this->maskedTextBox_addsupplier_phone->Mask = L"(999) 000-0000";
			this->maskedTextBox_addsupplier_phone->Name = L"maskedTextBox_addsupplier_phone";
			this->maskedTextBox_addsupplier_phone->Size = System::Drawing::Size(482, 56);
			this->maskedTextBox_addsupplier_phone->TabIndex = 6;
			this->maskedTextBox_addsupplier_phone->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &addsupplier::maskedTextBox_addsupplier_phone_KeyPress);
			// 
			// button_addsupplier_enter
			// 
			this->button_addsupplier_enter->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_addsupplier_enter->BackColor = System::Drawing::Color::SeaShell;
			this->button_addsupplier_enter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_addsupplier_enter->Location = System::Drawing::Point(669, 601);
			this->button_addsupplier_enter->Name = L"button_addsupplier_enter";
			this->button_addsupplier_enter->Size = System::Drawing::Size(493, 141);
			this->button_addsupplier_enter->TabIndex = 7;
			this->button_addsupplier_enter->Text = L"Добавить поставщика";
			this->button_addsupplier_enter->UseVisualStyleBackColor = false;
			this->button_addsupplier_enter->Click += gcnew System::EventHandler(this, &addsupplier::button_addsupplier_enter_Click);
			// 
			// button_addsupplier_exit
			// 
			this->button_addsupplier_exit->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_addsupplier_exit->BackColor = System::Drawing::Color::SeaShell;
			this->button_addsupplier_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_addsupplier_exit->Location = System::Drawing::Point(669, 760);
			this->button_addsupplier_exit->Name = L"button_addsupplier_exit";
			this->button_addsupplier_exit->Size = System::Drawing::Size(493, 141);
			this->button_addsupplier_exit->TabIndex = 8;
			this->button_addsupplier_exit->Text = L"Вернуться назад";
			this->button_addsupplier_exit->UseVisualStyleBackColor = false;
			this->button_addsupplier_exit->Click += gcnew System::EventHandler(this, &addsupplier::button_addsupplier_exit_Click);
			// 
			// addsupplier
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ClientSize = System::Drawing::Size(1791, 922);
			this->Controls->Add(this->button_addsupplier_exit);
			this->Controls->Add(this->button_addsupplier_enter);
			this->Controls->Add(this->maskedTextBox_addsupplier_phone);
			this->Controls->Add(this->label_addsupplier_phone);
			this->Controls->Add(this->textBox_addsupplier_address);
			this->Controls->Add(this->label_addsupplier_address);
			this->Controls->Add(this->textBox_addsupplier_name);
			this->Controls->Add(this->label_addsupplier_name);
			this->Controls->Add(this->label_addsupplier_head);
			this->Name = L"addsupplier";
			this->Text = L"Добавление поставщика";
			this->Load += gcnew System::EventHandler(this, &addsupplier::addsupplier_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Обработка кнопки вернуться назад
	private: System::Void button_addsupplier_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult dialog = MessageBox::Show("Все введенные данные, будут утеряны.\nВы уверены?", "Возвращение к базе данных", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (dialog == System::Windows::Forms::DialogResult::No) return;
		else {
			this->Close();
			supplieradding = String::Empty;
		}
	}

	private: System::Void addsupplier_Load(System::Object^ sender, System::EventArgs^ e) {
		supplieradding = String::Empty;
	}

	private: System::Void maskedTextBox_addsupplier_phone_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		/*Если вводятся цифры от 0 до 9 или символ Backspase (код = 8) то далее*/
		if (((e->KeyChar >= '0') && (e->KeyChar <= '9')) || e->KeyChar == 8) return;
		e->Handled = true; // Остальные символы запрещены для ввода
	}

	/*Обработка кнопки добавить поставщика*/
	private: System::Void button_addsupplier_enter_Click(System::Object^ sender, System::EventArgs^ e) {
		/*Проверки на правильность введенных данных в текстбоксы*/
		if (textBox_addsupplier_name->Text == String::Empty) {
			MessageBox::Show("Некорректный ввод названия поставщика!", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (textBox_addsupplier_address->Text == String::Empty) {
			MessageBox::Show("Некорректный ввод адреса!", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (maskedTextBox_addsupplier_phone->Text == String::Empty) {
			MessageBox::Show("Некорректный ввод телефона!", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		/*Добавление в строку всех данных заполненных, в форме*/
		supplieradding = textBox_addsupplier_name->Text + "&" + textBox_addsupplier_address->Text + "&" + maskedTextBox_addsupplier_phone->Text;
		MessageBox::Show("Поставщик добавлен успешно!", "Успешно", MessageBoxButtons::OK, MessageBoxIcon::Information);
		this->Close();
	}
};
}
