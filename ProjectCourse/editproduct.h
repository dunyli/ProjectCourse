#pragma once
#include <stdlib.h>

namespace ProjectCourse {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Сводка для editproduct
	/// </summary>
	public ref class editproduct : public System::Windows::Forms::Form
	{
	public:
		editproduct(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	private: System::Windows::Forms::ComboBox^ comboBox_editproduct_name;
	private: System::Windows::Forms::Button^ button_editproduct_delete;
	private: System::Windows::Forms::Label^ label_editproduct_name;
	private: System::Windows::Forms::Label^ label_editproduct_edname;
	private: System::Windows::Forms::Label^ label_editproduct_price;
	private: System::Windows::Forms::TextBox^ textBox_editproduct_price;
	private: System::Windows::Forms::Label^ label_editproduct_count;
	private: System::Windows::Forms::TextBox^ textBox_editproduct_count;
	private: System::Windows::Forms::Label^ label_editproduct_supplier;
	private: System::Windows::Forms::ComboBox^ comboBox_editproduct_supplier;
	private: System::Windows::Forms::TextBox^ textBox_editproduct_edname;

	public: void SetValues_comboBox_productname(List<String^>^ values, List<String^>^ val, List<int>^ price_list, List<int>^ count_list, List<String^>^ sup) {
		price_product = price_list;
		count_product = count_list;
		comboBox_editproduct_name->Items->Clear(); // Очищаем предыдущие значения
		comboBox_editproduct_name->Items->AddRange(values->ToArray()); // Добавляем новые значения
		supplier_product = sup;
		comboBox_editproduct_supplier->Items->Clear(); // Очищаем предыдущие значения
		comboBox_editproduct_supplier->Items->AddRange(val->ToArray()); // Добавляем новые значения
	}

	/*Строка для изменения*/
	public: String^ edit_product;
	public: int number_edit_product;
	public: List<int>^ price_product;
	public: List<int>^ count_product;
	public: int product_delete;
	public: List<String^>^ supplier_product;
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~editproduct()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_editproduct_head;
	protected:

	private: System::Windows::Forms::Button^ button_editproduct_enter;

	private: System::Windows::Forms::Button^ button_editproduct_exit;

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
			this->label_editproduct_head = (gcnew System::Windows::Forms::Label());
			this->button_editproduct_enter = (gcnew System::Windows::Forms::Button());
			this->button_editproduct_exit = (gcnew System::Windows::Forms::Button());
			this->comboBox_editproduct_name = (gcnew System::Windows::Forms::ComboBox());
			this->button_editproduct_delete = (gcnew System::Windows::Forms::Button());
			this->textBox_editproduct_edname = (gcnew System::Windows::Forms::TextBox());
			this->label_editproduct_name = (gcnew System::Windows::Forms::Label());
			this->label_editproduct_edname = (gcnew System::Windows::Forms::Label());
			this->label_editproduct_price = (gcnew System::Windows::Forms::Label());
			this->textBox_editproduct_price = (gcnew System::Windows::Forms::TextBox());
			this->label_editproduct_count = (gcnew System::Windows::Forms::Label());
			this->textBox_editproduct_count = (gcnew System::Windows::Forms::TextBox());
			this->label_editproduct_supplier = (gcnew System::Windows::Forms::Label());
			this->comboBox_editproduct_supplier = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label_editproduct_head
			// 
			this->label_editproduct_head->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label_editproduct_head->AutoSize = true;
			this->label_editproduct_head->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_editproduct_head->Location = System::Drawing::Point(231, 58);
			this->label_editproduct_head->Name = L"label_editproduct_head";
			this->label_editproduct_head->Size = System::Drawing::Size(1436, 61);
			this->label_editproduct_head->TabIndex = 0;
			this->label_editproduct_head->Text = L"Для редактирования данных товара, заполните все поля";
			// 
			// button_editproduct_enter
			// 
			this->button_editproduct_enter->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_editproduct_enter->BackColor = System::Drawing::Color::SeaShell;
			this->button_editproduct_enter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_editproduct_enter->Location = System::Drawing::Point(468, 609);
			this->button_editproduct_enter->Name = L"button_editproduct_enter";
			this->button_editproduct_enter->Size = System::Drawing::Size(380, 130);
			this->button_editproduct_enter->TabIndex = 7;
			this->button_editproduct_enter->Text = L"Редактировать товар";
			this->button_editproduct_enter->UseVisualStyleBackColor = false;
			this->button_editproduct_enter->Click += gcnew System::EventHandler(this, &editproduct::button_editproduct_enter_Click);
			// 
			// button_editproduct_exit
			// 
			this->button_editproduct_exit->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_editproduct_exit->BackColor = System::Drawing::Color::SeaShell;
			this->button_editproduct_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_editproduct_exit->Location = System::Drawing::Point(273, 757);
			this->button_editproduct_exit->Name = L"button_editproduct_exit";
			this->button_editproduct_exit->Size = System::Drawing::Size(380, 130);
			this->button_editproduct_exit->TabIndex = 8;
			this->button_editproduct_exit->Text = L"Вернуться назад";
			this->button_editproduct_exit->UseVisualStyleBackColor = false;
			this->button_editproduct_exit->Click += gcnew System::EventHandler(this, &editproduct::button_editproduct_exit_Click);
			// 
			// comboBox_editproduct_name
			// 
			this->comboBox_editproduct_name->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboBox_editproduct_name->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_editproduct_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBox_editproduct_name->FormattingEnabled = true;
			this->comboBox_editproduct_name->Location = System::Drawing::Point(74, 274);
			this->comboBox_editproduct_name->Name = L"comboBox_editproduct_name";
			this->comboBox_editproduct_name->Size = System::Drawing::Size(774, 50);
			this->comboBox_editproduct_name->TabIndex = 12;
			this->comboBox_editproduct_name->SelectedIndexChanged += gcnew System::EventHandler(this, &editproduct::comboBox_editproduct_name_SelectedIndexChanged);
			// 
			// button_editproduct_delete
			// 
			this->button_editproduct_delete->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_editproduct_delete->BackColor = System::Drawing::Color::SeaShell;
			this->button_editproduct_delete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_editproduct_delete->Location = System::Drawing::Point(74, 609);
			this->button_editproduct_delete->Name = L"button_editproduct_delete";
			this->button_editproduct_delete->Size = System::Drawing::Size(380, 130);
			this->button_editproduct_delete->TabIndex = 23;
			this->button_editproduct_delete->Text = L"Удалить товар";
			this->button_editproduct_delete->UseVisualStyleBackColor = false;
			this->button_editproduct_delete->Click += gcnew System::EventHandler(this, &editproduct::button_editproduct_delete_Click);
			// 
			// textBox_editproduct_edname
			// 
			this->textBox_editproduct_edname->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox_editproduct_edname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox_editproduct_edname->Location = System::Drawing::Point(74, 451);
			this->textBox_editproduct_edname->Name = L"textBox_editproduct_edname";
			this->textBox_editproduct_edname->Size = System::Drawing::Size(774, 56);
			this->textBox_editproduct_edname->TabIndex = 25;
			// 
			// label_editproduct_name
			// 
			this->label_editproduct_name->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label_editproduct_name->AutoSize = true;
			this->label_editproduct_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_editproduct_name->Location = System::Drawing::Point(67, 165);
			this->label_editproduct_name->Name = L"label_editproduct_name";
			this->label_editproduct_name->Size = System::Drawing::Size(669, 84);
			this->label_editproduct_name->TabIndex = 34;
			this->label_editproduct_name->Text = L"Выберите название товара:\r\nОбразец: 7. Корм для собак Pedigree";
			// 
			// label_editproduct_edname
			// 
			this->label_editproduct_edname->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label_editproduct_edname->AutoSize = true;
			this->label_editproduct_edname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_editproduct_edname->Location = System::Drawing::Point(67, 350);
			this->label_editproduct_edname->Name = L"label_editproduct_edname";
			this->label_editproduct_edname->Size = System::Drawing::Size(622, 84);
			this->label_editproduct_edname->TabIndex = 35;
			this->label_editproduct_edname->Text = L"Введите название товара:\r\nОбразец: корм для собак Pedigree";
			// 
			// label_editproduct_price
			// 
			this->label_editproduct_price->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label_editproduct_price->AutoSize = true;
			this->label_editproduct_price->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_editproduct_price->Location = System::Drawing::Point(1137, 165);
			this->label_editproduct_price->Name = L"label_editproduct_price";
			this->label_editproduct_price->Size = System::Drawing::Size(560, 84);
			this->label_editproduct_price->TabIndex = 36;
			this->label_editproduct_price->Text = L"Введите цену товара (за 1 шт):\r\nОбразец: 500\r\n";
			// 
			// textBox_editproduct_price
			// 
			this->textBox_editproduct_price->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox_editproduct_price->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox_editproduct_price->Location = System::Drawing::Point(1144, 274);
			this->textBox_editproduct_price->Name = L"textBox_editproduct_price";
			this->textBox_editproduct_price->Size = System::Drawing::Size(553, 56);
			this->textBox_editproduct_price->TabIndex = 37;
			this->textBox_editproduct_price->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &editproduct::textBox_editproduct_price_KeyPress);
			// 
			// label_editproduct_count
			// 
			this->label_editproduct_count->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label_editproduct_count->AutoSize = true;
			this->label_editproduct_count->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_editproduct_count->Location = System::Drawing::Point(1137, 350);
			this->label_editproduct_count->Name = L"label_editproduct_count";
			this->label_editproduct_count->Size = System::Drawing::Size(648, 84);
			this->label_editproduct_count->TabIndex = 38;
			this->label_editproduct_count->Text = L"Введите колличество товара (в шт):\r\nОбразец: 500\r\n";
			// 
			// textBox_editproduct_count
			// 
			this->textBox_editproduct_count->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox_editproduct_count->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox_editproduct_count->Location = System::Drawing::Point(1144, 451);
			this->textBox_editproduct_count->Name = L"textBox_editproduct_count";
			this->textBox_editproduct_count->Size = System::Drawing::Size(641, 56);
			this->textBox_editproduct_count->TabIndex = 39;
			this->textBox_editproduct_count->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &editproduct::textBox_editproduct_count_KeyPress);
			// 
			// label_editproduct_supplier
			// 
			this->label_editproduct_supplier->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label_editproduct_supplier->AutoSize = true;
			this->label_editproduct_supplier->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_editproduct_supplier->Location = System::Drawing::Point(1137, 524);
			this->label_editproduct_supplier->Name = L"label_editproduct_supplier";
			this->label_editproduct_supplier->Size = System::Drawing::Size(542, 84);
			this->label_editproduct_supplier->TabIndex = 40;
			this->label_editproduct_supplier->Text = L"Выберите номер поставщика:\r\nОбразец: 12. ООО Мираторг\r\n";
			// 
			// comboBox_editproduct_supplier
			// 
			this->comboBox_editproduct_supplier->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboBox_editproduct_supplier->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_editproduct_supplier->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBox_editproduct_supplier->FormattingEnabled = true;
			this->comboBox_editproduct_supplier->Location = System::Drawing::Point(1144, 636);
			this->comboBox_editproduct_supplier->Name = L"comboBox_editproduct_supplier";
			this->comboBox_editproduct_supplier->Size = System::Drawing::Size(641, 59);
			this->comboBox_editproduct_supplier->TabIndex = 41;
			// 
			// editproduct
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ClientSize = System::Drawing::Size(1943, 922);
			this->Controls->Add(this->comboBox_editproduct_supplier);
			this->Controls->Add(this->label_editproduct_supplier);
			this->Controls->Add(this->textBox_editproduct_count);
			this->Controls->Add(this->label_editproduct_count);
			this->Controls->Add(this->textBox_editproduct_price);
			this->Controls->Add(this->label_editproduct_price);
			this->Controls->Add(this->label_editproduct_edname);
			this->Controls->Add(this->label_editproduct_name);
			this->Controls->Add(this->textBox_editproduct_edname);
			this->Controls->Add(this->button_editproduct_delete);
			this->Controls->Add(this->comboBox_editproduct_name);
			this->Controls->Add(this->button_editproduct_exit);
			this->Controls->Add(this->button_editproduct_enter);
			this->Controls->Add(this->label_editproduct_head);
			this->MinimumSize = System::Drawing::Size(1969, 993);
			this->Name = L"editproduct";
			this->Text = L"Редактирование товаров";
			this->Load += gcnew System::EventHandler(this, &editproduct::editproduct_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
		//Обработка кнопки вернуться назад
	private: System::Void button_editproduct_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult dialog = MessageBox::Show("Все введенные данные, будут утеряны.\nВы уверены?", "Возвращение к базе данных", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (dialog == System::Windows::Forms::DialogResult::No) return;
		else {
			this->Close();
		}
		product_delete = 0;
		number_edit_product = 0;
		edit_product = String::Empty;
	}

	private: System::Void editproduct_Load(System::Object^ sender, System::EventArgs^ e) {
		edit_product = String::Empty;
		product_delete = 0;
		number_edit_product = 0;
	}

		   /*Обработка кнопки редактировать клиента*/
	private: System::Void button_editproduct_enter_Click(System::Object^ sender, System::EventArgs^ e) {
		/*Проверки на правильность введенных данных в текстбоксы*/
		if (comboBox_editproduct_name->Text == String::Empty) {
			MessageBox::Show("Некорректный ввод номера товара!\nЕсли товара нет в списке, добавьте его!", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (textBox_editproduct_edname->Text == String::Empty) {
			MessageBox::Show("Для редактирования, введите название товара!", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (textBox_editproduct_price->Text == String::Empty) {
			MessageBox::Show("Для редактирования, введите цену товара!", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (textBox_editproduct_count->Text == String::Empty) {
			MessageBox::Show("Для редактирования, введите количество товара!", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (comboBox_editproduct_supplier->Text == String::Empty) {
			MessageBox::Show("Для редактирования, выберите номер поставщика!", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		/*Добавление в строку всех данных заполненных, в форме*/
		edit_product = textBox_editproduct_edname->Text + "&" + comboBox_editproduct_supplier->Text + "&" + textBox_editproduct_price->Text + "&" + textBox_editproduct_count->Text;
		MessageBox::Show("Товар изменен успешно!", "Успешно", MessageBoxButtons::OK, MessageBoxIcon::Information);
		this->Close();
	}

	//Удаление товара
	private: System::Void button_editproduct_delete_Click(System::Object^ sender, System::EventArgs^ e) {
		/*Проверки на правильность введенных данных в текстбокс*/
		if (comboBox_editproduct_name->Text == String::Empty) {
			MessageBox::Show("Некорректный выбор номера товара!", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		String^ resultString = ""; // Строка для хранения символов до точки
		// Перебираем символы строки
		for (int i = 0; i < comboBox_editproduct_name->Text->Length; i++) {
			// Если встречаем точку, выходим из цикла
			if (comboBox_editproduct_name->Text[i] == '.') {
				break;
			}
			// Добавляем символ к результату
			resultString += comboBox_editproduct_name->Text[i];
		}
		product_delete = Convert::ToInt32(resultString);
		MessageBox::Show("Товар удален успешно!", "Успешно", MessageBoxButtons::OK, MessageBoxIcon::Information);
		this->Close();
	}

	private: System::Void comboBox_editproduct_name_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		/*Проверки на правильность введенных данных в текстбокс*/
		if (comboBox_editproduct_name->Text == String::Empty) {
			MessageBox::Show("Некорректный выбор номера поставщика!\nЕсли поставщика нет в списке, добавьте его!", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		String^ resultString = ""; // Строка для хранения символов до точки
		// Перебираем символы строки
		for (int i = 0; i < comboBox_editproduct_name->Text->Length; i++) {
			// Если встречаем точку, выходим из цикла
			if (comboBox_editproduct_name->Text[i] == '.') {
				break;
			}
			// Добавляем символ к результату
			resultString += comboBox_editproduct_name->Text[i];
		}
		int number = Convert::ToInt32(resultString) - 1;
		number_edit_product = number + 1;
		textBox_editproduct_count->Text = count_product[number].ToString();
		textBox_editproduct_price->Text = price_product[number].ToString();
		String^ selectStr = "";
		// Перебираем символы строки
		// Перебираем каждую строку в списке
		for each (Char currentChar in supplier_product[number])
		{
			// Проверяем, является ли текущий символ точкой
			if (currentChar == '.') break;
			// Добавляем символ к результату
			selectStr += currentChar;
		}
		int num = Convert::ToInt32(selectStr) - 1;
		if (num < supplier_product->Count) comboBox_editproduct_supplier->SelectedIndex = num;
	}

	private: System::Void textBox_editproduct_price_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		/*Если вводятся цифры от 0 до 9 или символ Backspase (код = 8) то далее*/
		if (((e->KeyChar >= '0') && (e->KeyChar <= '9')) || e->KeyChar == 8) return;
		e->Handled = true; // Остальные символы запрещены для ввода
	}

	private: System::Void textBox_editproduct_count_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		/*Если вводятся цифры от 0 до 9 или символ Backspase (код = 8) то далее*/
		if (((e->KeyChar >= '0') && (e->KeyChar <= '9')) || e->KeyChar == 8) return;
		e->Handled = true; // Остальные символы запрещены для ввода
	}
};
}
