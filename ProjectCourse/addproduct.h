#pragma once

namespace ProjectCourse {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Сводка для addclient
	/// </summary>
	public ref class addproduct : public System::Windows::Forms::Form
	{
	public:
		addproduct(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	private: System::Windows::Forms::Label^ label_addproduct_count;

	public: void SetValues_comboBox_supplier(List<String^>^ values) {
		comboBox_supplier->Items->Clear(); // Очищаем предыдущие значения
		comboBox_supplier->Items->AddRange(values->ToArray()); // Добавляем новые значения
	}

	private: System::Windows::Forms::TextBox^ textBox_addproduct_count;
	private: System::Windows::Forms::ComboBox^ comboBox_supplier;


		/*Строка для добавления*/
	public: String^ productadding;

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~addproduct()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_addproduct_head;
	private: System::Windows::Forms::Label^ label_addproduct_name;
	private: System::Windows::Forms::TextBox^ textBox_addproduct_name;
	private: System::Windows::Forms::Label^ label_addproduct_price;

	private: System::Windows::Forms::TextBox^ textBox_addproduct_price;
	private: System::Windows::Forms::Label^ label_addproduct_supplier;

	private: System::Windows::Forms::Button^ button_addproduct_enter;
	private: System::Windows::Forms::Button^ button_addproduct_exit;
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
			this->label_addproduct_head = (gcnew System::Windows::Forms::Label());
			this->label_addproduct_name = (gcnew System::Windows::Forms::Label());
			this->textBox_addproduct_name = (gcnew System::Windows::Forms::TextBox());
			this->label_addproduct_price = (gcnew System::Windows::Forms::Label());
			this->textBox_addproduct_price = (gcnew System::Windows::Forms::TextBox());
			this->label_addproduct_supplier = (gcnew System::Windows::Forms::Label());
			this->button_addproduct_enter = (gcnew System::Windows::Forms::Button());
			this->button_addproduct_exit = (gcnew System::Windows::Forms::Button());
			this->label_addproduct_count = (gcnew System::Windows::Forms::Label());
			this->textBox_addproduct_count = (gcnew System::Windows::Forms::TextBox());
			this->comboBox_supplier = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label_addproduct_head
			// 
			this->label_addproduct_head->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label_addproduct_head->AutoSize = true;
			this->label_addproduct_head->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_addproduct_head->Location = System::Drawing::Point(150, 51);
			this->label_addproduct_head->Name = L"label_addproduct_head";
			this->label_addproduct_head->Size = System::Drawing::Size(1508, 61);
			this->label_addproduct_head->TabIndex = 0;
			this->label_addproduct_head->Text = L"Для добавления нового товара, заполните все данные поля";
			// 
			// label_addproduct_name
			// 
			this->label_addproduct_name->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label_addproduct_name->AutoSize = true;
			this->label_addproduct_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_addproduct_name->Location = System::Drawing::Point(25, 165);
			this->label_addproduct_name->Name = L"label_addproduct_name";
			this->label_addproduct_name->Size = System::Drawing::Size(622, 126);
			this->label_addproduct_name->TabIndex = 1;
			this->label_addproduct_name->Text = L"Введите название нового товара:\r\nОбразец: корм для собак Pedigree\r\n\r\n";
			// 
			// textBox_addproduct_name
			// 
			this->textBox_addproduct_name->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox_addproduct_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox_addproduct_name->Location = System::Drawing::Point(32, 273);
			this->textBox_addproduct_name->Name = L"textBox_addproduct_name";
			this->textBox_addproduct_name->Size = System::Drawing::Size(733, 56);
			this->textBox_addproduct_name->TabIndex = 2;
			// 
			// label_addproduct_price
			// 
			this->label_addproduct_price->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label_addproduct_price->AutoSize = true;
			this->label_addproduct_price->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_addproduct_price->Location = System::Drawing::Point(991, 165);
			this->label_addproduct_price->Name = L"label_addproduct_price";
			this->label_addproduct_price->Size = System::Drawing::Size(560, 84);
			this->label_addproduct_price->TabIndex = 3;
			this->label_addproduct_price->Text = L"Введите цену товара (за 1 шт):\r\nОбразец: 500\r\n";
			// 
			// textBox_addproduct_price
			// 
			this->textBox_addproduct_price->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox_addproduct_price->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox_addproduct_price->Location = System::Drawing::Point(989, 273);
			this->textBox_addproduct_price->Name = L"textBox_addproduct_price";
			this->textBox_addproduct_price->Size = System::Drawing::Size(553, 56);
			this->textBox_addproduct_price->TabIndex = 4;
			this->textBox_addproduct_price->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &addproduct::textBox_addproduct_price_KeyPress);
			// 
			// label_addproduct_supplier
			// 
			this->label_addproduct_supplier->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label_addproduct_supplier->AutoSize = true;
			this->label_addproduct_supplier->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_addproduct_supplier->Location = System::Drawing::Point(25, 373);
			this->label_addproduct_supplier->Name = L"label_addproduct_supplier";
			this->label_addproduct_supplier->Size = System::Drawing::Size(542, 84);
			this->label_addproduct_supplier->TabIndex = 5;
			this->label_addproduct_supplier->Text = L"Выберите номер поставщика:\r\nОбразец: 12. ООО Мираторг\r\n";
			// 
			// button_addproduct_enter
			// 
			this->button_addproduct_enter->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_addproduct_enter->BackColor = System::Drawing::Color::SeaShell;
			this->button_addproduct_enter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_addproduct_enter->Location = System::Drawing::Point(669, 601);
			this->button_addproduct_enter->Name = L"button_addproduct_enter";
			this->button_addproduct_enter->Size = System::Drawing::Size(493, 141);
			this->button_addproduct_enter->TabIndex = 7;
			this->button_addproduct_enter->Text = L"Добавить товар";
			this->button_addproduct_enter->UseVisualStyleBackColor = false;
			this->button_addproduct_enter->Click += gcnew System::EventHandler(this, &addproduct::button_addproduct_enter_Click);
			// 
			// button_addproduct_exit
			// 
			this->button_addproduct_exit->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_addproduct_exit->BackColor = System::Drawing::Color::SeaShell;
			this->button_addproduct_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_addproduct_exit->Location = System::Drawing::Point(669, 760);
			this->button_addproduct_exit->Name = L"button_addproduct_exit";
			this->button_addproduct_exit->Size = System::Drawing::Size(493, 141);
			this->button_addproduct_exit->TabIndex = 8;
			this->button_addproduct_exit->Text = L"Вернуться назад";
			this->button_addproduct_exit->UseVisualStyleBackColor = false;
			this->button_addproduct_exit->Click += gcnew System::EventHandler(this, &addproduct::button_addproduct_exit_Click);
			// 
			// label_addproduct_count
			// 
			this->label_addproduct_count->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label_addproduct_count->AutoSize = true;
			this->label_addproduct_count->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_addproduct_count->Location = System::Drawing::Point(982, 373);
			this->label_addproduct_count->Name = L"label_addproduct_count";
			this->label_addproduct_count->Size = System::Drawing::Size(648, 84);
			this->label_addproduct_count->TabIndex = 9;
			this->label_addproduct_count->Text = L"Введите колличество товара (в шт):\r\nОбразец: 500\r\n";
			// 
			// textBox_addproduct_count
			// 
			this->textBox_addproduct_count->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox_addproduct_count->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox_addproduct_count->Location = System::Drawing::Point(989, 472);
			this->textBox_addproduct_count->Name = L"textBox_addproduct_count";
			this->textBox_addproduct_count->Size = System::Drawing::Size(553, 56);
			this->textBox_addproduct_count->TabIndex = 10;
			this->textBox_addproduct_count->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &addproduct::textBox_addproduct_count_KeyPress);
			// 
			// comboBox_supplier
			// 
			this->comboBox_supplier->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboBox_supplier->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_supplier->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBox_supplier->FormattingEnabled = true;
			this->comboBox_supplier->Location = System::Drawing::Point(32, 469);
			this->comboBox_supplier->Name = L"comboBox_supplier";
			this->comboBox_supplier->Size = System::Drawing::Size(535, 59);
			this->comboBox_supplier->TabIndex = 11;
			// 
			// addproduct
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ClientSize = System::Drawing::Size(1791, 922);
			this->Controls->Add(this->comboBox_supplier);
			this->Controls->Add(this->textBox_addproduct_count);
			this->Controls->Add(this->label_addproduct_count);
			this->Controls->Add(this->button_addproduct_exit);
			this->Controls->Add(this->button_addproduct_enter);
			this->Controls->Add(this->label_addproduct_supplier);
			this->Controls->Add(this->textBox_addproduct_price);
			this->Controls->Add(this->label_addproduct_price);
			this->Controls->Add(this->textBox_addproduct_name);
			this->Controls->Add(this->label_addproduct_name);
			this->Controls->Add(this->label_addproduct_head);
			this->Name = L"addproduct";
			this->Text = L"Добавление товара";
			this->Load += gcnew System::EventHandler(this, &addproduct::addproduct_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
		//Обработка кнопки вернуться назад
	private: System::Void button_addproduct_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult dialog = MessageBox::Show("Все введенные данные, будут утеряны.\nВы уверены?", "Возвращение к базе данных", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (dialog == System::Windows::Forms::DialogResult::No) return;
		else {
			this->Close();
			productadding = String::Empty;
		}
	}

	private: System::Void addproduct_Load(System::Object^ sender, System::EventArgs^ e) {
		productadding = String::Empty;
	}

	/*Обработка кнопки добавить поставщика*/
	private: System::Void button_addproduct_enter_Click(System::Object^ sender, System::EventArgs^ e) {
		/*Проверки на правильность введенных данных в текстбоксы*/
		if (textBox_addproduct_name->Text == String::Empty) {
			MessageBox::Show("Некорректный ввод названия товара!", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (textBox_addproduct_price->Text == String::Empty) {
			MessageBox::Show("Некорректный ввод цены товара!", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (comboBox_supplier->Text == String::Empty) {
			MessageBox::Show("Некорректный ввод номера поставщика!\nЕсли поставщика нет в списке, добавьте его!", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (textBox_addproduct_count->Text == String::Empty) {
			MessageBox::Show("Некорректный ввод колличества товара!", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		/*Добавление в строку всех данных заполненных, в форме*/
		productadding = textBox_addproduct_name->Text + "&" + comboBox_supplier->Text + "&" + textBox_addproduct_price->Text + "&" + textBox_addproduct_count->Text;
		MessageBox::Show("Товар добавлен успешно!", "Успешно", MessageBoxButtons::OK, MessageBoxIcon::Information);
		this->Close();
	}

	private: System::Void textBox_addproduct_count_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		/*Если вводятся цифры от 0 до 9 или символ Backspase (код = 8) то далее*/
		if (((e->KeyChar >= '0') && (e->KeyChar <= '9')) || e->KeyChar == 8) return;
		e->Handled = true; // Остальные символы запрещены для ввода
	}

	private: System::Void textBox_addproduct_price_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		/*Если вводятся цифры от 0 до 9 или символ Backspase (код = 8) то далее*/
		if (((e->KeyChar >= '0') && (e->KeyChar <= '9')) || e->KeyChar == 8) return;
		e->Handled = true; // Остальные символы запрещены для ввода
	}
};
}
