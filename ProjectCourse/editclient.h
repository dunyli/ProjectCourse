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
	/// Сводка для editclient
	/// </summary>
	public ref class editclient : public System::Windows::Forms::Form
	{
	public:
		editclient(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	private: System::Windows::Forms::ComboBox^ comboBox_editclient_name;
	public:

	private: System::Windows::Forms::Button^ button_editclient_delete;
	private: System::Windows::Forms::Label^ label_editclient_edname;
	private: System::Windows::Forms::Label^ label_editclient_phone;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox_editclient_phone;
	private: System::Windows::Forms::Label^ label_editclient_address;
	private: System::Windows::Forms::TextBox^ textBox_editclient_address;

	private: System::Windows::Forms::TextBox^ textBox_editclient_name;

	public: void SetValues_comboBox_clientname(List<String^>^ values, List<String^>^ phone_list, List<String^>^ address_list) {
		phone = phone_list;
		address = address_list;
		comboBox_editclient_name->Items->Clear(); // Очищаем предыдущие значения
		comboBox_editclient_name->Items->AddRange(values->ToArray()); // Добавляем новые значения
	}

	/*Строка для изменения*/
	public: String^ edit_client;
	public: int number_edit_client;
	public: List<String^>^ phone;
	public: List<String^>^ address;
	public: int client_delete;
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~editclient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_editclient_head;
	private: System::Windows::Forms::Label^ label_editclient_name;
	protected:
	private: System::Windows::Forms::Button^ button_editclient_enter;

	private: System::Windows::Forms::Button^ button_editclient_exit;

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
			this->label_editclient_head = (gcnew System::Windows::Forms::Label());
			this->label_editclient_name = (gcnew System::Windows::Forms::Label());
			this->button_editclient_enter = (gcnew System::Windows::Forms::Button());
			this->button_editclient_exit = (gcnew System::Windows::Forms::Button());
			this->comboBox_editclient_name = (gcnew System::Windows::Forms::ComboBox());
			this->button_editclient_delete = (gcnew System::Windows::Forms::Button());
			this->label_editclient_edname = (gcnew System::Windows::Forms::Label());
			this->textBox_editclient_name = (gcnew System::Windows::Forms::TextBox());
			this->label_editclient_phone = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox_editclient_phone = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label_editclient_address = (gcnew System::Windows::Forms::Label());
			this->textBox_editclient_address = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label_editclient_head
			// 
			this->label_editclient_head->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label_editclient_head->AutoSize = true;
			this->label_editclient_head->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_editclient_head->Location = System::Drawing::Point(252, 40);
			this->label_editclient_head->Name = L"label_editclient_head";
			this->label_editclient_head->Size = System::Drawing::Size(1494, 61);
			this->label_editclient_head->TabIndex = 0;
			this->label_editclient_head->Text = L"Для редактирования данных клиентов, заполните все поля";
			// 
			// label_editclient_name
			// 
			this->label_editclient_name->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label_editclient_name->AutoSize = true;
			this->label_editclient_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_editclient_name->Location = System::Drawing::Point(67, 165);
			this->label_editclient_name->Name = L"label_editclient_name";
			this->label_editclient_name->Size = System::Drawing::Size(781, 126);
			this->label_editclient_name->TabIndex = 1;
			this->label_editclient_name->Text = L"Выберите номер клиента:\r\nОбразец: 5. Медведев Даниил Дмитриевич\r\n\r\n";
			// 
			// button_editclient_enter
			// 
			this->button_editclient_enter->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_editclient_enter->BackColor = System::Drawing::Color::SeaShell;
			this->button_editclient_enter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_editclient_enter->Location = System::Drawing::Point(857, 687);
			this->button_editclient_enter->Name = L"button_editclient_enter";
			this->button_editclient_enter->Size = System::Drawing::Size(380, 130);
			this->button_editclient_enter->TabIndex = 7;
			this->button_editclient_enter->Text = L"Редактировать клиента";
			this->button_editclient_enter->UseVisualStyleBackColor = false;
			this->button_editclient_enter->Click += gcnew System::EventHandler(this, &editclient::button_editclient_enter_Click);
			// 
			// button_editclient_exit
			// 
			this->button_editclient_exit->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_editclient_exit->BackColor = System::Drawing::Color::SeaShell;
			this->button_editclient_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_editclient_exit->Location = System::Drawing::Point(1330, 687);
			this->button_editclient_exit->Name = L"button_editclient_exit";
			this->button_editclient_exit->Size = System::Drawing::Size(380, 130);
			this->button_editclient_exit->TabIndex = 8;
			this->button_editclient_exit->Text = L"Вернуться назад";
			this->button_editclient_exit->UseVisualStyleBackColor = false;
			// 
			// comboBox_editclient_name
			// 
			this->comboBox_editclient_name->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboBox_editclient_name->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_editclient_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBox_editclient_name->FormattingEnabled = true;
			this->comboBox_editclient_name->Location = System::Drawing::Point(74, 274);
			this->comboBox_editclient_name->Name = L"comboBox_editclient_name";
			this->comboBox_editclient_name->Size = System::Drawing::Size(774, 50);
			this->comboBox_editclient_name->TabIndex = 12;
			this->comboBox_editclient_name->SelectedIndexChanged += gcnew System::EventHandler(this, &editclient::comboBox_editclient_name_SelectedIndexChanged);
			// 
			// button_editclient_delete
			// 
			this->button_editclient_delete->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_editclient_delete->BackColor = System::Drawing::Color::SeaShell;
			this->button_editclient_delete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_editclient_delete->Location = System::Drawing::Point(381, 687);
			this->button_editclient_delete->Name = L"button_editclient_delete";
			this->button_editclient_delete->Size = System::Drawing::Size(380, 130);
			this->button_editclient_delete->TabIndex = 23;
			this->button_editclient_delete->Text = L"Удалить клиента";
			this->button_editclient_delete->UseVisualStyleBackColor = false;
			this->button_editclient_delete->Click += gcnew System::EventHandler(this, &editclient::button_editclient_delete_Click);
			// 
			// label_editclient_edname
			// 
			this->label_editclient_edname->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label_editclient_edname->AutoSize = true;
			this->label_editclient_edname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_editclient_edname->Location = System::Drawing::Point(67, 350);
			this->label_editclient_edname->Name = L"label_editclient_edname";
			this->label_editclient_edname->Size = System::Drawing::Size(740, 84);
			this->label_editclient_edname->TabIndex = 24;
			this->label_editclient_edname->Text = L"Введите ФИО клиента для изменения:\r\nОбразец: Медведев Даниил Дмитриевич";
			// 
			// textBox_editclient_name
			// 
			this->textBox_editclient_name->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox_editclient_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox_editclient_name->Location = System::Drawing::Point(74, 451);
			this->textBox_editclient_name->Name = L"textBox_editclient_name";
			this->textBox_editclient_name->Size = System::Drawing::Size(733, 56);
			this->textBox_editclient_name->TabIndex = 25;
			// 
			// label_editclient_phone
			// 
			this->label_editclient_phone->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label_editclient_phone->AutoSize = true;
			this->label_editclient_phone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_editclient_phone->Location = System::Drawing::Point(1137, 165);
			this->label_editclient_phone->Name = L"label_editclient_phone";
			this->label_editclient_phone->Size = System::Drawing::Size(763, 84);
			this->label_editclient_phone->TabIndex = 26;
			this->label_editclient_phone->Text = L"Введите телефон клиента для изменения:\r\nОбразец: (987) 654-3210\r\n";
			// 
			// maskedTextBox_editclient_phone
			// 
			this->maskedTextBox_editclient_phone->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->maskedTextBox_editclient_phone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->maskedTextBox_editclient_phone->Location = System::Drawing::Point(1144, 274);
			this->maskedTextBox_editclient_phone->Mask = L"(999) 000-0000";
			this->maskedTextBox_editclient_phone->Name = L"maskedTextBox_editclient_phone";
			this->maskedTextBox_editclient_phone->Size = System::Drawing::Size(482, 56);
			this->maskedTextBox_editclient_phone->TabIndex = 27;
			this->maskedTextBox_editclient_phone->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &editclient::maskedTextBox_editclient_phone_KeyPress);
			// 
			// label_editclient_address
			// 
			this->label_editclient_address->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label_editclient_address->AutoSize = true;
			this->label_editclient_address->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_editclient_address->Location = System::Drawing::Point(1137, 350);
			this->label_editclient_address->Name = L"label_editclient_address";
			this->label_editclient_address->Size = System::Drawing::Size(730, 84);
			this->label_editclient_address->TabIndex = 28;
			this->label_editclient_address->Text = L"Введите адрес клиента для изменения:\r\nОбразец: Барнаул, ул.Пушкина 22, кв.22\r\n";
			// 
			// textBox_editclient_address
			// 
			this->textBox_editclient_address->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox_editclient_address->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox_editclient_address->Location = System::Drawing::Point(1144, 451);
			this->textBox_editclient_address->Name = L"textBox_editclient_address";
			this->textBox_editclient_address->Size = System::Drawing::Size(733, 56);
			this->textBox_editclient_address->TabIndex = 29;
			// 
			// editclient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ClientSize = System::Drawing::Size(1943, 922);
			this->Controls->Add(this->textBox_editclient_address);
			this->Controls->Add(this->label_editclient_address);
			this->Controls->Add(this->maskedTextBox_editclient_phone);
			this->Controls->Add(this->label_editclient_phone);
			this->Controls->Add(this->textBox_editclient_name);
			this->Controls->Add(this->label_editclient_edname);
			this->Controls->Add(this->button_editclient_delete);
			this->Controls->Add(this->comboBox_editclient_name);
			this->Controls->Add(this->button_editclient_exit);
			this->Controls->Add(this->button_editclient_enter);
			this->Controls->Add(this->label_editclient_name);
			this->Controls->Add(this->label_editclient_head);
			this->MinimumSize = System::Drawing::Size(1969, 993);
			this->Name = L"editclient";
			this->Text = L"Редактирование клиентов";
			this->Load += gcnew System::EventHandler(this, &editclient::editclient_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
		//Обработка кнопки вернуться назад
	private: System::Void button_editclient_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult dialog = MessageBox::Show("Все введенные данные, будут утеряны.\nВы уверены?", "Возвращение к базе данных", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (dialog == System::Windows::Forms::DialogResult::No) return;
		else {
			this->Close();
		}
		client_delete = 0;
		number_edit_client = 0;
		edit_client = String::Empty;
	}

	private: System::Void editclient_Load(System::Object^ sender, System::EventArgs^ e) {
		edit_client = String::Empty;
		client_delete = 0;
		number_edit_client = 0;
	}

	/*Обработка кнопки редактировать клиента*/
	private: System::Void button_editclient_enter_Click(System::Object^ sender, System::EventArgs^ e) {
		/*Проверки на правильность введенных данных в текстбоксы*/
		if (comboBox_editclient_name->Text == String::Empty) {
			MessageBox::Show("Некорректный ввод номера клиента!\nЕсли клиента нет в списке, добавьте его!", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (textBox_editclient_name->Text == String::Empty) {
			MessageBox::Show("Для редактирования клиента, введите ФИО!", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (maskedTextBox_editclient_phone->Text == String::Empty) {
			MessageBox::Show("Для редактирования клиента, введите номер телефона!", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (textBox_editclient_address->Text == String::Empty) {
			MessageBox::Show("Для редактирования клиента, введите адрес!", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		/*Добавление в строку всех данных заполненных, в форме*/
		edit_client = textBox_editclient_name->Text + "&" + textBox_editclient_address->Text + "&" + maskedTextBox_editclient_phone->Text;
		MessageBox::Show("Клиент изменен успешно!", "Успешно", MessageBoxButtons::OK, MessageBoxIcon::Information);
		this->Close();
	}

	private: System::Void textBox_addorder_count_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		/*Если вводятся цифры от 0 до 9 или символ Backspase (код = 8) то далее*/
		if (((e->KeyChar >= '0') && (e->KeyChar <= '9')) || e->KeyChar == 8) return;
		e->Handled = true; // Остальные символы запрещены для ввода
	}
	//Удаление клиента
	private: System::Void button_editclient_delete_Click(System::Object^ sender, System::EventArgs^ e) {
		/*Проверки на правильность введенных данных в текстбокс*/
		if (comboBox_editclient_name->Text == String::Empty) {
			MessageBox::Show("Некорректный выбор номера клиента!\nЕсли клиента нет в списке, добавьте его!", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		String^ resultString = ""; // Строка для хранения символов до точки
		// Перебираем символы строки
		for (int i = 0; i < comboBox_editclient_name->Text->Length; i++) {
			// Если встречаем точку, выходим из цикла
			if (comboBox_editclient_name->Text[i] == '.') {
				break;
			}
			// Добавляем символ к результату
			resultString += comboBox_editclient_name->Text[i];
		}
		client_delete = Convert::ToInt32(resultString);
		MessageBox::Show("Клиент удален успешно!", "Успешно", MessageBoxButtons::OK, MessageBoxIcon::Information);
		this->Close();
	}
	private: System::Void comboBox_editclient_name_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		/*Проверки на правильность введенных данных в текстбокс*/
		if (comboBox_editclient_name->Text == String::Empty) {
			MessageBox::Show("Некорректный выбор номера клиента!\nЕсли клиента нет в списке, добавьте его!", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		String^ resultString = ""; // Строка для хранения символов до точки
		// Перебираем символы строки
		for (int i = 0; i < comboBox_editclient_name->Text->Length; i++) {
			// Если встречаем точку, выходим из цикла
			if (comboBox_editclient_name->Text[i] == '.') {
				break;
			}
			// Добавляем символ к результату
			resultString += comboBox_editclient_name->Text[i];
		}
		int number = Convert::ToInt32(resultString) - 1;
		number_edit_client = number + 1;
		maskedTextBox_editclient_phone->Text = phone[number];
		textBox_editclient_address->Text = address[number];
	}

	private: System::Void maskedTextBox_editclient_phone_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		/*Если вводятся цифры от 0 до 9 или символ Backspase (код = 8) то далее*/
		if (((e->KeyChar >= '0') && (e->KeyChar <= '9')) || e->KeyChar == 8) return;
		e->Handled = true; // Остальные символы запрещены для ввода
	}
};
}
