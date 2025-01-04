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
	/// Сводка для editsupplier
	/// </summary>
	public ref class editsupplier : public System::Windows::Forms::Form
	{
	public:
		editsupplier(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	private: System::Windows::Forms::ComboBox^ comboBox_editsupplier_name;
	private: System::Windows::Forms::Button^ button_editsupplier_delete;
	public:

	public:


	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox_editsupplier_phone;
	private: System::Windows::Forms::TextBox^ textBox_editsupplier_address;






	private: System::Windows::Forms::Label^ label_editsupplier_name;
	private: System::Windows::Forms::Label^ label_editsupplier_edname;
	private: System::Windows::Forms::Label^ label_editsupplier_phone;
	private: System::Windows::Forms::Label^ label_editsupplier_address;
	private: System::Windows::Forms::TextBox^ textBox_editsupplier_name;



	public: void SetValues_comboBox_suppliername(List<String^>^ values, List<String^>^ phone_list, List<String^>^ address_list) {
		phone_supplier = phone_list;
		address_supplier = address_list;
		comboBox_editsupplier_name->Items->Clear(); // Очищаем предыдущие значения
		comboBox_editsupplier_name->Items->AddRange(values->ToArray()); // Добавляем новые значения
	}

		  /*Строка для изменения*/
	public: String^ edit_supplier;
	public: int number_edit_supplier;
	public: List<String^>^ phone_supplier;
	public: List<String^>^ address_supplier;
	public: int supplier_delete;
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~editsupplier()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_editsupplier_head;
	protected:

	private: System::Windows::Forms::Button^ button_editsupplier_enter;
	private: System::Windows::Forms::Button^ button_editsupplier_exit;
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
			this->label_editsupplier_head = (gcnew System::Windows::Forms::Label());
			this->button_editsupplier_enter = (gcnew System::Windows::Forms::Button());
			this->button_editsupplier_exit = (gcnew System::Windows::Forms::Button());
			this->comboBox_editsupplier_name = (gcnew System::Windows::Forms::ComboBox());
			this->button_editsupplier_delete = (gcnew System::Windows::Forms::Button());
			this->textBox_editsupplier_name = (gcnew System::Windows::Forms::TextBox());
			this->maskedTextBox_editsupplier_phone = (gcnew System::Windows::Forms::MaskedTextBox());
			this->textBox_editsupplier_address = (gcnew System::Windows::Forms::TextBox());
			this->label_editsupplier_name = (gcnew System::Windows::Forms::Label());
			this->label_editsupplier_edname = (gcnew System::Windows::Forms::Label());
			this->label_editsupplier_phone = (gcnew System::Windows::Forms::Label());
			this->label_editsupplier_address = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label_editsupplier_head
			// 
			this->label_editsupplier_head->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label_editsupplier_head->AutoSize = true;
			this->label_editsupplier_head->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_editsupplier_head->Location = System::Drawing::Point(195, 52);
			this->label_editsupplier_head->Name = L"label_editsupplier_head";
			this->label_editsupplier_head->Size = System::Drawing::Size(1591, 61);
			this->label_editsupplier_head->TabIndex = 0;
			this->label_editsupplier_head->Text = L"Для редактирования данных поставщиков, заполните все поля";
			// 
			// button_editsupplier_enter
			// 
			this->button_editsupplier_enter->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_editsupplier_enter->BackColor = System::Drawing::Color::SeaShell;
			this->button_editsupplier_enter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_editsupplier_enter->Location = System::Drawing::Point(857, 687);
			this->button_editsupplier_enter->Name = L"button_editsupplier_enter";
			this->button_editsupplier_enter->Size = System::Drawing::Size(380, 130);
			this->button_editsupplier_enter->TabIndex = 7;
			this->button_editsupplier_enter->Text = L"Редактировать поставщика";
			this->button_editsupplier_enter->UseVisualStyleBackColor = false;
			this->button_editsupplier_enter->Click += gcnew System::EventHandler(this, &editsupplier::button_editclient_enter_Click);
			// 
			// button_editsupplier_exit
			// 
			this->button_editsupplier_exit->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_editsupplier_exit->BackColor = System::Drawing::Color::SeaShell;
			this->button_editsupplier_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_editsupplier_exit->Location = System::Drawing::Point(1330, 687);
			this->button_editsupplier_exit->Name = L"button_editsupplier_exit";
			this->button_editsupplier_exit->Size = System::Drawing::Size(380, 130);
			this->button_editsupplier_exit->TabIndex = 8;
			this->button_editsupplier_exit->Text = L"Вернуться назад";
			this->button_editsupplier_exit->UseVisualStyleBackColor = false;
			this->button_editsupplier_exit->Click += gcnew System::EventHandler(this, &editsupplier::button_editsupplier_exit_Click);
			// 
			// comboBox_editsupplier_name
			// 
			this->comboBox_editsupplier_name->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboBox_editsupplier_name->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_editsupplier_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBox_editsupplier_name->FormattingEnabled = true;
			this->comboBox_editsupplier_name->Location = System::Drawing::Point(74, 274);
			this->comboBox_editsupplier_name->Name = L"comboBox_editsupplier_name";
			this->comboBox_editsupplier_name->Size = System::Drawing::Size(774, 50);
			this->comboBox_editsupplier_name->TabIndex = 12;
			this->comboBox_editsupplier_name->SelectedIndexChanged += gcnew System::EventHandler(this, &editsupplier::comboBox_editsupplier_name_SelectedIndexChanged);
			// 
			// button_editsupplier_delete
			// 
			this->button_editsupplier_delete->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_editsupplier_delete->BackColor = System::Drawing::Color::SeaShell;
			this->button_editsupplier_delete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_editsupplier_delete->Location = System::Drawing::Point(381, 687);
			this->button_editsupplier_delete->Name = L"button_editsupplier_delete";
			this->button_editsupplier_delete->Size = System::Drawing::Size(380, 130);
			this->button_editsupplier_delete->TabIndex = 23;
			this->button_editsupplier_delete->Text = L"Удалить поставщика";
			this->button_editsupplier_delete->UseVisualStyleBackColor = false;
			this->button_editsupplier_delete->Click += gcnew System::EventHandler(this, &editsupplier::button_editsupplier_delete_Click);
			// 
			// textBox_editsupplier_name
			// 
			this->textBox_editsupplier_name->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox_editsupplier_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox_editsupplier_name->Location = System::Drawing::Point(74, 451);
			this->textBox_editsupplier_name->Name = L"textBox_editsupplier_name";
			this->textBox_editsupplier_name->Size = System::Drawing::Size(774, 56);
			this->textBox_editsupplier_name->TabIndex = 25;
			// 
			// maskedTextBox_editsupplier_phone
			// 
			this->maskedTextBox_editsupplier_phone->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->maskedTextBox_editsupplier_phone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->maskedTextBox_editsupplier_phone->Location = System::Drawing::Point(1144, 274);
			this->maskedTextBox_editsupplier_phone->Mask = L"(999) 000-0000";
			this->maskedTextBox_editsupplier_phone->Name = L"maskedTextBox_editsupplier_phone";
			this->maskedTextBox_editsupplier_phone->Size = System::Drawing::Size(460, 56);
			this->maskedTextBox_editsupplier_phone->TabIndex = 27;
			this->maskedTextBox_editsupplier_phone->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &editsupplier::maskedTextBox_editsupplier_phone_KeyPress);
			// 
			// textBox_editsupplier_address
			// 
			this->textBox_editsupplier_address->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox_editsupplier_address->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox_editsupplier_address->Location = System::Drawing::Point(1144, 451);
			this->textBox_editsupplier_address->Name = L"textBox_editsupplier_address";
			this->textBox_editsupplier_address->Size = System::Drawing::Size(733, 56);
			this->textBox_editsupplier_address->TabIndex = 29;
			// 
			// label_editsupplier_name
			// 
			this->label_editsupplier_name->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label_editsupplier_name->AutoSize = true;
			this->label_editsupplier_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_editsupplier_name->Location = System::Drawing::Point(67, 165);
			this->label_editsupplier_name->Name = L"label_editsupplier_name";
			this->label_editsupplier_name->Size = System::Drawing::Size(597, 84);
			this->label_editsupplier_name->TabIndex = 30;
			this->label_editsupplier_name->Text = L"Выберите название поставщика:\r\nОбразец: 5. ООО Агроторг";
			// 
			// label_editsupplier_edname
			// 
			this->label_editsupplier_edname->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label_editsupplier_edname->AutoSize = true;
			this->label_editsupplier_edname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_editsupplier_edname->Location = System::Drawing::Point(67, 350);
			this->label_editsupplier_edname->Name = L"label_editsupplier_edname";
			this->label_editsupplier_edname->Size = System::Drawing::Size(570, 84);
			this->label_editsupplier_edname->TabIndex = 31;
			this->label_editsupplier_edname->Text = L"Введите название поставщика:\r\nОбразец: ООО Агроторг";
			// 
			// label_editsupplier_phone
			// 
			this->label_editsupplier_phone->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label_editsupplier_phone->AutoSize = true;
			this->label_editsupplier_phone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_editsupplier_phone->Location = System::Drawing::Point(1137, 165);
			this->label_editsupplier_phone->Name = L"label_editsupplier_phone";
			this->label_editsupplier_phone->Size = System::Drawing::Size(558, 84);
			this->label_editsupplier_phone->TabIndex = 32;
			this->label_editsupplier_phone->Text = L"Введите телефон поставщика:\r\nОбразец: (987) 654-3210\r\n";
			// 
			// label_editsupplier_address
			// 
			this->label_editsupplier_address->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label_editsupplier_address->AutoSize = true;
			this->label_editsupplier_address->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_editsupplier_address->Location = System::Drawing::Point(1137, 350);
			this->label_editsupplier_address->Name = L"label_editsupplier_address";
			this->label_editsupplier_address->Size = System::Drawing::Size(730, 84);
			this->label_editsupplier_address->TabIndex = 33;
			this->label_editsupplier_address->Text = L"Введите адрес поставщика:\r\nОбразец: Барнаул, ул.Пушкина 22, кв.22\r\n";
			// 
			// editsupplier
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ClientSize = System::Drawing::Size(1943, 922);
			this->Controls->Add(this->label_editsupplier_address);
			this->Controls->Add(this->label_editsupplier_phone);
			this->Controls->Add(this->label_editsupplier_edname);
			this->Controls->Add(this->label_editsupplier_name);
			this->Controls->Add(this->textBox_editsupplier_address);
			this->Controls->Add(this->maskedTextBox_editsupplier_phone);
			this->Controls->Add(this->textBox_editsupplier_name);
			this->Controls->Add(this->button_editsupplier_delete);
			this->Controls->Add(this->comboBox_editsupplier_name);
			this->Controls->Add(this->button_editsupplier_exit);
			this->Controls->Add(this->button_editsupplier_enter);
			this->Controls->Add(this->label_editsupplier_head);
			this->MinimumSize = System::Drawing::Size(1969, 993);
			this->Name = L"editsupplier";
			this->Text = L"Редактирование поставщиков";
			this->Load += gcnew System::EventHandler(this, &editsupplier::editsupplier_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
		//Обработка кнопки вернуться назад
	private: System::Void button_editsupplier_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult dialog = MessageBox::Show("Все введенные данные, будут утеряны.\nВы уверены?", "Возвращение к базе данных", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (dialog == System::Windows::Forms::DialogResult::No) return;
		else {
			this->Close();
		}
		supplier_delete = 0;
		number_edit_supplier = 0;
		edit_supplier = String::Empty;
	}

	private: System::Void editsupplier_Load(System::Object^ sender, System::EventArgs^ e) {
		edit_supplier = String::Empty;
		supplier_delete = 0;
		number_edit_supplier = 0;
	}

	/*Обработка кнопки редактировать клиента*/
	private: System::Void button_editclient_enter_Click(System::Object^ sender, System::EventArgs^ e) {
		/*Проверки на правильность введенных данных в текстбоксы*/
		if (comboBox_editsupplier_name->Text == String::Empty) {
			MessageBox::Show("Некорректный ввод номера поставщика!\nЕсли поставщика нет в списке, добавьте его!", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (textBox_editsupplier_name->Text == String::Empty) {
			MessageBox::Show("Для редактирования, введите название поставщика!", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (maskedTextBox_editsupplier_phone->Text == String::Empty) {
			MessageBox::Show("Для редактирования поставщика, введите номер телефона!", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (textBox_editsupplier_address->Text == String::Empty) {
			MessageBox::Show("Для редактирования поставщика, введите адрес!", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		/*Добавление в строку всех данных заполненных, в форме*/
		edit_supplier = textBox_editsupplier_name->Text + "&" + textBox_editsupplier_address->Text + "&" + maskedTextBox_editsupplier_phone->Text;
		MessageBox::Show("Поставщик изменен успешно!", "Успешно", MessageBoxButtons::OK, MessageBoxIcon::Information);
		this->Close();
	}

	private: System::Void textBox_editsupplier_count_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		/*Если вводятся цифры от 0 до 9 или символ Backspase (код = 8) то далее*/
		if (((e->KeyChar >= '0') && (e->KeyChar <= '9')) || e->KeyChar == 8) return;
		e->Handled = true; // Остальные символы запрещены для ввода
	}
		   //Удаление поставщика
	private: System::Void button_editsupplier_delete_Click(System::Object^ sender, System::EventArgs^ e) {
		/*Проверки на правильность введенных данных в текстбокс*/
		if (comboBox_editsupplier_name->Text == String::Empty) {
			MessageBox::Show("Некорректный выбор номера поставщика!\nЕсли поставщика нет в списке, добавьте его!", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		String^ resultString = ""; // Строка для хранения символов до точки
		// Перебираем символы строки
		for (int i = 0; i < comboBox_editsupplier_name->Text->Length; i++) {
			// Если встречаем точку, выходим из цикла
			if (comboBox_editsupplier_name->Text[i] == '.') {
				break;
			}
			// Добавляем символ к результату
			resultString += comboBox_editsupplier_name->Text[i];
		}
		supplier_delete = Convert::ToInt32(resultString);
		MessageBox::Show("Поставщик удален успешно!", "Успешно", MessageBoxButtons::OK, MessageBoxIcon::Information);
		this->Close();
	}
	private: System::Void comboBox_editsupplier_name_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		/*Проверки на правильность введенных данных в текстбокс*/
		if (comboBox_editsupplier_name->Text == String::Empty) {
			MessageBox::Show("Некорректный выбор номера поставщика!\nЕсли поставщика нет в списке, добавьте его!", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		String^ resultString = ""; // Строка для хранения символов до точки
		// Перебираем символы строки
		for (int i = 0; i < comboBox_editsupplier_name->Text->Length; i++) {
			// Если встречаем точку, выходим из цикла
			if (comboBox_editsupplier_name->Text[i] == '.') {
				break;
			}
			// Добавляем символ к результату
			resultString += comboBox_editsupplier_name->Text[i];
		}
		int number = Convert::ToInt32(resultString) - 1;
		number_edit_supplier = number + 1;
		maskedTextBox_editsupplier_phone->Text = phone_supplier[number];
		textBox_editsupplier_address->Text = address_supplier[number];
	}

	private: System::Void maskedTextBox_editsupplier_phone_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		/*Если вводятся цифры от 0 до 9 или символ Backspase (код = 8) то далее*/
		if (((e->KeyChar >= '0') && (e->KeyChar <= '9')) || e->KeyChar == 8) return;
		e->Handled = true; // Остальные символы запрещены для ввода
	}
};
}
