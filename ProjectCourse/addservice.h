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
	public ref class addservice : public System::Windows::Forms::Form
	{
	public:
		addservice(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	private: System::Windows::Forms::TextBox^ textBox_addservice_type;
	public:

	public:

	public:

		/*Строка для добавления*/
	public: String^ serviceadding;
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~addservice()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_addservice_head;
	protected:

	private: System::Windows::Forms::Label^ label_addservice_name;

	private: System::Windows::Forms::TextBox^ textBox_addservice_name;

	private: System::Windows::Forms::Label^ label_addservice_price;




	private: System::Windows::Forms::TextBox^ textBox_addservice_price;
	private: System::Windows::Forms::Label^ label_addservice_type;



	protected:

	protected:

	protected:





	private: System::Windows::Forms::Button^ button_addservice_enter;


	private: System::Windows::Forms::Button^ button_addservice_exit;







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
			this->label_addservice_head = (gcnew System::Windows::Forms::Label());
			this->label_addservice_name = (gcnew System::Windows::Forms::Label());
			this->textBox_addservice_name = (gcnew System::Windows::Forms::TextBox());
			this->label_addservice_price = (gcnew System::Windows::Forms::Label());
			this->textBox_addservice_price = (gcnew System::Windows::Forms::TextBox());
			this->label_addservice_type = (gcnew System::Windows::Forms::Label());
			this->button_addservice_enter = (gcnew System::Windows::Forms::Button());
			this->button_addservice_exit = (gcnew System::Windows::Forms::Button());
			this->textBox_addservice_type = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label_addservice_head
			// 
			this->label_addservice_head->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label_addservice_head->AutoSize = true;
			this->label_addservice_head->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_addservice_head->Location = System::Drawing::Point(181, 43);
			this->label_addservice_head->Name = L"label_addservice_head";
			this->label_addservice_head->Size = System::Drawing::Size(1323, 61);
			this->label_addservice_head->TabIndex = 0;
			this->label_addservice_head->Text = L"Для добавления услуги, заполните все данные поля";
			// 
			// label_addservice_name
			// 
			this->label_addservice_name->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label_addservice_name->AutoSize = true;
			this->label_addservice_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_addservice_name->Location = System::Drawing::Point(49, 165);
			this->label_addservice_name->Name = L"label_addservice_name";
			this->label_addservice_name->Size = System::Drawing::Size(473, 84);
			this->label_addservice_name->TabIndex = 1;
			this->label_addservice_name->Text = L"Введите название услуги:\r\nОбразец: Стрижка\r\n";
			// 
			// textBox_addservice_name
			// 
			this->textBox_addservice_name->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox_addservice_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox_addservice_name->Location = System::Drawing::Point(56, 274);
			this->textBox_addservice_name->Name = L"textBox_addservice_name";
			this->textBox_addservice_name->Size = System::Drawing::Size(466, 56);
			this->textBox_addservice_name->TabIndex = 2;
			// 
			// label_addservice_price
			// 
			this->label_addservice_price->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label_addservice_price->AutoSize = true;
			this->label_addservice_price->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_addservice_price->Location = System::Drawing::Point(848, 155);
			this->label_addservice_price->Name = L"label_addservice_price";
			this->label_addservice_price->Size = System::Drawing::Size(390, 126);
			this->label_addservice_price->TabIndex = 3;
			this->label_addservice_price->Text = L"Введите цену услуги:\r\nОбразец: 1000\r\n\r\n";
			// 
			// textBox_addservice_price
			// 
			this->textBox_addservice_price->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox_addservice_price->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox_addservice_price->Location = System::Drawing::Point(855, 274);
			this->textBox_addservice_price->Name = L"textBox_addservice_price";
			this->textBox_addservice_price->Size = System::Drawing::Size(383, 56);
			this->textBox_addservice_price->TabIndex = 4;
			this->textBox_addservice_price->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &addservice::textBox_addservice_price_KeyPress);
			// 
			// label_addservice_type
			// 
			this->label_addservice_type->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label_addservice_type->AutoSize = true;
			this->label_addservice_type->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_addservice_type->Location = System::Drawing::Point(49, 367);
			this->label_addservice_type->Name = L"label_addservice_type";
			this->label_addservice_type->Size = System::Drawing::Size(440, 84);
			this->label_addservice_type->TabIndex = 5;
			this->label_addservice_type->Text = L"Введите вид животного:\r\nОбразец: Собака\r\n";
			// 
			// button_addservice_enter
			// 
			this->button_addservice_enter->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_addservice_enter->BackColor = System::Drawing::Color::SeaShell;
			this->button_addservice_enter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_addservice_enter->Location = System::Drawing::Point(593, 552);
			this->button_addservice_enter->Name = L"button_addservice_enter";
			this->button_addservice_enter->Size = System::Drawing::Size(493, 141);
			this->button_addservice_enter->TabIndex = 7;
			this->button_addservice_enter->Text = L"Добавить услугу";
			this->button_addservice_enter->UseVisualStyleBackColor = false;
			this->button_addservice_enter->Click += gcnew System::EventHandler(this, &addservice::button_addservice_enter_Click);
			// 
			// button_addservice_exit
			// 
			this->button_addservice_exit->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_addservice_exit->BackColor = System::Drawing::Color::SeaShell;
			this->button_addservice_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_addservice_exit->Location = System::Drawing::Point(593, 715);
			this->button_addservice_exit->Name = L"button_addservice_exit";
			this->button_addservice_exit->Size = System::Drawing::Size(493, 141);
			this->button_addservice_exit->TabIndex = 8;
			this->button_addservice_exit->Text = L"Вернуться назад";
			this->button_addservice_exit->UseVisualStyleBackColor = false;
			this->button_addservice_exit->Click += gcnew System::EventHandler(this, &addservice::button_addservice_exit_Click);
			// 
			// textBox_addservice_type
			// 
			this->textBox_addservice_type->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox_addservice_type->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox_addservice_type->Location = System::Drawing::Point(56, 470);
			this->textBox_addservice_type->Name = L"textBox_addservice_type";
			this->textBox_addservice_type->Size = System::Drawing::Size(433, 56);
			this->textBox_addservice_type->TabIndex = 9;
			// 
			// addservice
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ClientSize = System::Drawing::Size(1639, 922);
			this->Controls->Add(this->textBox_addservice_type);
			this->Controls->Add(this->button_addservice_exit);
			this->Controls->Add(this->button_addservice_enter);
			this->Controls->Add(this->label_addservice_type);
			this->Controls->Add(this->textBox_addservice_price);
			this->Controls->Add(this->label_addservice_price);
			this->Controls->Add(this->textBox_addservice_name);
			this->Controls->Add(this->label_addservice_name);
			this->Controls->Add(this->label_addservice_head);
			this->Name = L"addservice";
			this->Text = L"Добавление услуги";
			this->Load += gcnew System::EventHandler(this, &addservice::addservice_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Обработка кнопки вернуться назад
	private: System::Void button_addservice_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult dialog = MessageBox::Show("Все введенные данные, будут утеряны.\nВы уверены?", "Возвращение к базе данных", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (dialog == System::Windows::Forms::DialogResult::No) return;
		else {
			this->Close();
			serviceadding = String::Empty;
		}
	}

	private: System::Void addservice_Load(System::Object^ sender, System::EventArgs^ e) {
		serviceadding = String::Empty;
	}

	/*Обработка кнопки добавить услугу*/
	private: System::Void button_addservice_enter_Click(System::Object^ sender, System::EventArgs^ e) {
		/*Проверки на правильность введенных данных в текстбоксы*/
		if (textBox_addservice_name->Text == String::Empty) {
			MessageBox::Show("Некорректный ввод названия услуги!", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (textBox_addservice_type->Text == String::Empty) {
			MessageBox::Show("Некорректный ввод вида животного!", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (textBox_addservice_price->Text == String::Empty) {
			MessageBox::Show("Некорректный ввод цены услуги!", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		/*Добавление в строку всех данных заполненных, в форме*/
		serviceadding = textBox_addservice_name->Text + "&" + textBox_addservice_type->Text + "&" + textBox_addservice_price->Text;
		MessageBox::Show("Услуга добавлена успешно!", "Успешно", MessageBoxButtons::OK, MessageBoxIcon::Information);
		this->Close();
	}

	private: System::Void textBox_addservice_price_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		/*Если вводятся цифры от 0 до 9 или символ Backspase (код = 8) то далее*/
		if (((e->KeyChar >= '0') && (e->KeyChar <= '9')) || e->KeyChar == 8) return;
		e->Handled = true; // Остальные символы запрещены для ввода
	}
};
}
