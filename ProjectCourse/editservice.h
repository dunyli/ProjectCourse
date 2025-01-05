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
	/// Сводка для editservice
	/// </summary>
	public ref class editservice : public System::Windows::Forms::Form
	{
	public:
		editservice(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	private: System::Windows::Forms::ComboBox^ comboBox_editservice_name;
	private: System::Windows::Forms::Button^ button_editservice_delete;
	private: System::Windows::Forms::Label^ label_editservice_edname;
	private: System::Windows::Forms::Label^ label_editservice_type;
	private: System::Windows::Forms::TextBox^ textBox_editservice_type;
	private: System::Windows::Forms::Label^ label_editservice_price;
	private: System::Windows::Forms::TextBox^ textBox_editservice_price;
	private: System::Windows::Forms::TextBox^ textBox_editservice_name;
	public: void SetValues_comboBox_servicename(List<String^>^ values, List<String^>^ type_list, List<int>^ price_list) {
		type_name = type_list;
		price_service = price_list;
		comboBox_editservice_name->Items->Clear(); // Очищаем предыдущие значения
		comboBox_editservice_name->Items->AddRange(values->ToArray()); // Добавляем новые значения
	}
	/*Строка для изменения*/
	public: String^ edit_service;
	public: int number_edit_service;
	public: List<String^>^ type_name;
	public: List<int>^ price_service;
	public: int service_delete;
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~editservice()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_editservice_head;
	private: System::Windows::Forms::Label^ label_editservice_name;
	private: System::Windows::Forms::Button^ button_editservice_enter;
	private: System::Windows::Forms::Button^ button_editservice_exit;
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
			this->label_editservice_head = (gcnew System::Windows::Forms::Label());
			this->label_editservice_name = (gcnew System::Windows::Forms::Label());
			this->button_editservice_enter = (gcnew System::Windows::Forms::Button());
			this->button_editservice_exit = (gcnew System::Windows::Forms::Button());
			this->comboBox_editservice_name = (gcnew System::Windows::Forms::ComboBox());
			this->button_editservice_delete = (gcnew System::Windows::Forms::Button());
			this->textBox_editservice_name = (gcnew System::Windows::Forms::TextBox());
			this->label_editservice_edname = (gcnew System::Windows::Forms::Label());
			this->label_editservice_type = (gcnew System::Windows::Forms::Label());
			this->textBox_editservice_type = (gcnew System::Windows::Forms::TextBox());
			this->label_editservice_price = (gcnew System::Windows::Forms::Label());
			this->textBox_editservice_price = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label_editservice_head
			// 
			this->label_editservice_head->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label_editservice_head->AutoSize = true;
			this->label_editservice_head->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_editservice_head->Location = System::Drawing::Point(328, 52);
			this->label_editservice_head->Name = L"label_editservice_head";
			this->label_editservice_head->Size = System::Drawing::Size(1202, 61);
			this->label_editservice_head->TabIndex = 0;
			this->label_editservice_head->Text = L"Для редактирования услуг, заполните все поля";
			// 
			// label_editservice_name
			// 
			this->label_editservice_name->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label_editservice_name->AutoSize = true;
			this->label_editservice_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_editservice_name->Location = System::Drawing::Point(67, 165);
			this->label_editservice_name->Name = L"label_editservice_name";
			this->label_editservice_name->Size = System::Drawing::Size(500, 126);
			this->label_editservice_name->TabIndex = 1;
			this->label_editservice_name->Text = L"Выберите название услуги:\r\nОбразец: 5. Стрижка\r\n\r\n";
			// 
			// button_editservice_enter
			// 
			this->button_editservice_enter->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_editservice_enter->BackColor = System::Drawing::Color::SeaShell;
			this->button_editservice_enter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_editservice_enter->Location = System::Drawing::Point(857, 687);
			this->button_editservice_enter->Name = L"button_editservice_enter";
			this->button_editservice_enter->Size = System::Drawing::Size(380, 130);
			this->button_editservice_enter->TabIndex = 7;
			this->button_editservice_enter->Text = L"Редактировать услугу";
			this->button_editservice_enter->UseVisualStyleBackColor = false;
			this->button_editservice_enter->Click += gcnew System::EventHandler(this, &editservice::button_editservice_enter_Click);
			// 
			// button_editservice_exit
			// 
			this->button_editservice_exit->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_editservice_exit->BackColor = System::Drawing::Color::SeaShell;
			this->button_editservice_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_editservice_exit->Location = System::Drawing::Point(1330, 687);
			this->button_editservice_exit->Name = L"button_editservice_exit";
			this->button_editservice_exit->Size = System::Drawing::Size(380, 130);
			this->button_editservice_exit->TabIndex = 8;
			this->button_editservice_exit->Text = L"Вернуться назад";
			this->button_editservice_exit->UseVisualStyleBackColor = false;
			// 
			// comboBox_editservice_name
			// 
			this->comboBox_editservice_name->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboBox_editservice_name->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_editservice_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBox_editservice_name->FormattingEnabled = true;
			this->comboBox_editservice_name->Location = System::Drawing::Point(74, 274);
			this->comboBox_editservice_name->Name = L"comboBox_editservice_name";
			this->comboBox_editservice_name->Size = System::Drawing::Size(733, 50);
			this->comboBox_editservice_name->TabIndex = 12;
			this->comboBox_editservice_name->SelectedIndexChanged += gcnew System::EventHandler(this, &editservice::comboBox_editclient_name_SelectedIndexChanged);
			// 
			// button_editservice_delete
			// 
			this->button_editservice_delete->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_editservice_delete->BackColor = System::Drawing::Color::SeaShell;
			this->button_editservice_delete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_editservice_delete->Location = System::Drawing::Point(381, 687);
			this->button_editservice_delete->Name = L"button_editservice_delete";
			this->button_editservice_delete->Size = System::Drawing::Size(380, 130);
			this->button_editservice_delete->TabIndex = 23;
			this->button_editservice_delete->Text = L"Удалить услугу";
			this->button_editservice_delete->UseVisualStyleBackColor = false;
			this->button_editservice_delete->Click += gcnew System::EventHandler(this, &editservice::button_editservice_delete_Click);
			// 
			// textBox_editservice_name
			// 
			this->textBox_editservice_name->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox_editservice_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox_editservice_name->Location = System::Drawing::Point(74, 451);
			this->textBox_editservice_name->Name = L"textBox_editservice_name";
			this->textBox_editservice_name->Size = System::Drawing::Size(733, 56);
			this->textBox_editservice_name->TabIndex = 25;
			// 
			// label_editservice_edname
			// 
			this->label_editservice_edname->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label_editservice_edname->AutoSize = true;
			this->label_editservice_edname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_editservice_edname->Location = System::Drawing::Point(67, 350);
			this->label_editservice_edname->Name = L"label_editservice_edname";
			this->label_editservice_edname->Size = System::Drawing::Size(473, 84);
			this->label_editservice_edname->TabIndex = 30;
			this->label_editservice_edname->Text = L"Введите название услуги:\r\nОбразец: Стрижка\r\n";
			// 
			// label_editservice_type
			// 
			this->label_editservice_type->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label_editservice_type->AutoSize = true;
			this->label_editservice_type->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_editservice_type->Location = System::Drawing::Point(1137, 165);
			this->label_editservice_type->Name = L"label_editservice_type";
			this->label_editservice_type->Size = System::Drawing::Size(440, 84);
			this->label_editservice_type->TabIndex = 31;
			this->label_editservice_type->Text = L"Введите вид животного:\r\nОбразец: Собака\r\n";
			// 
			// textBox_editservice_type
			// 
			this->textBox_editservice_type->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox_editservice_type->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox_editservice_type->Location = System::Drawing::Point(1144, 268);
			this->textBox_editservice_type->Name = L"textBox_editservice_type";
			this->textBox_editservice_type->Size = System::Drawing::Size(433, 56);
			this->textBox_editservice_type->TabIndex = 32;
			// 
			// label_editservice_price
			// 
			this->label_editservice_price->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label_editservice_price->AutoSize = true;
			this->label_editservice_price->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_editservice_price->Location = System::Drawing::Point(1137, 350);
			this->label_editservice_price->Name = L"label_editservice_price";
			this->label_editservice_price->Size = System::Drawing::Size(390, 84);
			this->label_editservice_price->TabIndex = 33;
			this->label_editservice_price->Text = L"Введите цену услуги:\r\nОбразец: 1000";
			// 
			// textBox_editservice_price
			// 
			this->textBox_editservice_price->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox_editservice_price->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox_editservice_price->Location = System::Drawing::Point(1144, 451);
			this->textBox_editservice_price->Name = L"textBox_editservice_price";
			this->textBox_editservice_price->Size = System::Drawing::Size(383, 56);
			this->textBox_editservice_price->TabIndex = 34;
			this->textBox_editservice_price->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &editservice::textBox_editservice_price_KeyPress);
			// 
			// editservice
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ClientSize = System::Drawing::Size(1943, 922);
			this->Controls->Add(this->textBox_editservice_price);
			this->Controls->Add(this->label_editservice_price);
			this->Controls->Add(this->textBox_editservice_type);
			this->Controls->Add(this->label_editservice_type);
			this->Controls->Add(this->label_editservice_edname);
			this->Controls->Add(this->textBox_editservice_name);
			this->Controls->Add(this->button_editservice_delete);
			this->Controls->Add(this->comboBox_editservice_name);
			this->Controls->Add(this->button_editservice_exit);
			this->Controls->Add(this->button_editservice_enter);
			this->Controls->Add(this->label_editservice_name);
			this->Controls->Add(this->label_editservice_head);
			this->MinimumSize = System::Drawing::Size(1969, 993);
			this->Name = L"editservice";
			this->Text = L"Редактирование услуг";
			this->Load += gcnew System::EventHandler(this, &editservice::editclient_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	//Обработка кнопки вернуться назад
	private: System::Void button_editservice_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult dialog = MessageBox::Show("Все введенные данные, будут утеряны.\nВы уверены?", "Возвращение к базе данных", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (dialog == System::Windows::Forms::DialogResult::No) return;
		else {
			this->Close();
		}
		service_delete = 0;
		number_edit_service = 0;
		edit_service = String::Empty;
	}

	private: System::Void editclient_Load(System::Object^ sender, System::EventArgs^ e) {
		edit_service = String::Empty;
		service_delete = 0;
		number_edit_service = 0;
	}

		   /*Обработка кнопки редактировать клиента*/
	private: System::Void button_editservice_enter_Click(System::Object^ sender, System::EventArgs^ e) {
		/*Проверки на правильность введенных данных в текстбоксы*/
		if (comboBox_editservice_name->Text == String::Empty) {
			MessageBox::Show("Некорректный ввод номера услуги!", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (textBox_editservice_name->Text == String::Empty) {
			MessageBox::Show("Для редактирования услуги, введите назвавние!", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (textBox_editservice_type->Text == String::Empty) {
			MessageBox::Show("Для редактирования услуги, введите тип животного!", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (textBox_editservice_price->Text == String::Empty) {
			MessageBox::Show("Для редактирования услуги, введите цену!", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		/*Добавление в строку всех данных заполненных, в форме*/
		edit_service = textBox_editservice_name->Text + "&" + textBox_editservice_type->Text + "&" + textBox_editservice_price->Text;
		MessageBox::Show("Услуга изменена успешно!", "Успешно", MessageBoxButtons::OK, MessageBoxIcon::Information);
		this->Close();
	}
	//Удаление услуги
	private: System::Void button_editservice_delete_Click(System::Object^ sender, System::EventArgs^ e) {
		/*Проверки на правильность введенных данных в текстбокс*/
		if (comboBox_editservice_name->Text == String::Empty) {
			MessageBox::Show("Некорректный выбор номера услуги!", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		String^ resultString = ""; // Строка для хранения символов до точки
		// Перебираем символы строки
		for (int i = 0; i < comboBox_editservice_name->Text->Length; i++) {
			// Если встречаем точку, выходим из цикла
			if (comboBox_editservice_name->Text[i] == '.') {
				break;
			}
			// Добавляем символ к результату
			resultString += comboBox_editservice_name->Text[i];
		}
		service_delete = Convert::ToInt32(resultString);
		MessageBox::Show("Услуга удалена успешно!", "Успешно", MessageBoxButtons::OK, MessageBoxIcon::Information);
		this->Close();
	}
	private: System::Void comboBox_editclient_name_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		/*Проверки на правильность введенных данных в текстбокс*/
		if (comboBox_editservice_name->Text == String::Empty) {
			MessageBox::Show("Некорректный выбор номера услуги!", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		String^ resultString = ""; // Строка для хранения символов до точки
		// Перебираем символы строки
		for (int i = 0; i < comboBox_editservice_name->Text->Length; i++) {
			// Если встречаем точку, выходим из цикла
			if (comboBox_editservice_name->Text[i] == '.') {
				break;
			}
			// Добавляем символ к результату
			resultString += comboBox_editservice_name->Text[i];
		}
		int number = Convert::ToInt32(resultString) - 1;
		number_edit_service = number + 1;
		textBox_editservice_type->Text = type_name[number];
		textBox_editservice_price->Text = price_service[number].ToString();
	}

	private: System::Void textBox_editservice_price_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		/*Если вводятся цифры от 0 до 9 или символ Backspase (код = 8) то далее*/
		if (((e->KeyChar >= '0') && (e->KeyChar <= '9')) || e->KeyChar == 8) return;
		e->Handled = true; // Остальные символы запрещены для ввода
	}
};
}
