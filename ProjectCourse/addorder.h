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
	using namespace System::Text::RegularExpressions;

	/// <summary>
	/// Сводка для addclient
	/// </summary>
	public ref class addorder : public System::Windows::Forms::Form
	{
	public:
		addorder(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	private: System::Windows::Forms::ComboBox^ comboBox_client;
	private: System::Windows::Forms::Button^ button_addorder_addproduct;
	private: System::Windows::Forms::TextBox^ textBox_addorder_order;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label_addorder_service;

	private: System::Windows::Forms::ComboBox^ comboBox_service;

	private: System::Windows::Forms::Button^ button_addorder_addservice;
	private: System::Windows::Forms::Button^ button_addorder_service;
	private: System::Windows::Forms::Button^ button_addorder_product;
	private: System::Windows::Forms::TextBox^ textBox_addorder_price;
	private: System::Windows::Forms::Label^ label_addorder_count;

	public: void SetValues_comboBox_client(List<String^>^ values) {
		comboBox_client->Items->Clear(); // Очищаем предыдущие значения
		comboBox_client->Items->AddRange(values->ToArray()); // Добавляем новые значения
	}
	public: void SetValues_comboBox_product(List<String^>^ values, List<int>^ max_count, List<int>^ price) {
		max_product = max_count;
		product_price = price;
		comboBox_product->Items->Clear(); // Очищаем предыдущие значения
		comboBox_product->Items->AddRange(values->ToArray()); // Добавляем новые значения
	}
	public: void SetValues_comboBox_service(List<String^>^ values, List<int>^ price_service) {
		service_price = price_service;
		comboBox_service->Items->Clear(); // Очищаем предыдущие значения
		comboBox_service->Items->AddRange(values->ToArray()); // Добавляем новые значения
	}
	private: System::Windows::Forms::TextBox^ textBox_addorder_count;
	private: System::Windows::Forms::ComboBox^ comboBox_product;
	/*Строка для добавления*/
	public: String^ combinedString;
	public: String^ orderadding;
	public: List<int>^ max_product;
	public: List<int>^ product_price;
	public: List<int>^ service_price;
	public: int result_price;
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~addorder()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_addorder_head;
	private: System::Windows::Forms::Label^ label_addorder_name;
	private: System::Windows::Forms::Label^ label_addorder_product;
	private: System::Windows::Forms::Button^ button_addorder_enter;
	private: System::Windows::Forms::Button^ button_addorder_exit;

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
			this->label_addorder_head = (gcnew System::Windows::Forms::Label());
			this->label_addorder_name = (gcnew System::Windows::Forms::Label());
			this->label_addorder_product = (gcnew System::Windows::Forms::Label());
			this->button_addorder_enter = (gcnew System::Windows::Forms::Button());
			this->button_addorder_exit = (gcnew System::Windows::Forms::Button());
			this->label_addorder_count = (gcnew System::Windows::Forms::Label());
			this->textBox_addorder_count = (gcnew System::Windows::Forms::TextBox());
			this->comboBox_product = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_client = (gcnew System::Windows::Forms::ComboBox());
			this->button_addorder_addproduct = (gcnew System::Windows::Forms::Button());
			this->textBox_addorder_order = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label_addorder_service = (gcnew System::Windows::Forms::Label());
			this->comboBox_service = (gcnew System::Windows::Forms::ComboBox());
			this->button_addorder_addservice = (gcnew System::Windows::Forms::Button());
			this->button_addorder_service = (gcnew System::Windows::Forms::Button());
			this->button_addorder_product = (gcnew System::Windows::Forms::Button());
			this->textBox_addorder_price = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label_addorder_head
			// 
			this->label_addorder_head->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label_addorder_head->AutoSize = true;
			this->label_addorder_head->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_addorder_head->Location = System::Drawing::Point(299, 44);
			this->label_addorder_head->Name = L"label_addorder_head";
			this->label_addorder_head->Size = System::Drawing::Size(1267, 61);
			this->label_addorder_head->TabIndex = 0;
			this->label_addorder_head->Text = L"Для создания заказа, заполните все данные поля";
			// 
			// label_addorder_name
			// 
			this->label_addorder_name->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label_addorder_name->AutoSize = true;
			this->label_addorder_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_addorder_name->Location = System::Drawing::Point(67, 165);
			this->label_addorder_name->Name = L"label_addorder_name";
			this->label_addorder_name->Size = System::Drawing::Size(781, 126);
			this->label_addorder_name->TabIndex = 1;
			this->label_addorder_name->Text = L"Выберите номер клиента:\r\nОбразец: 5. Медведев Даниил Дмитриевич\r\n\r\n";
			// 
			// label_addorder_product
			// 
			this->label_addorder_product->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label_addorder_product->AutoSize = true;
			this->label_addorder_product->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_addorder_product->Location = System::Drawing::Point(1050, 165);
			this->label_addorder_product->Name = L"label_addorder_product";
			this->label_addorder_product->Size = System::Drawing::Size(660, 84);
			this->label_addorder_product->TabIndex = 5;
			this->label_addorder_product->Text = L"Выберите номер товара:\r\nОбразец: 7. Корм для кошек Феликс";
			this->label_addorder_product->Visible = false;
			// 
			// button_addorder_enter
			// 
			this->button_addorder_enter->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_addorder_enter->BackColor = System::Drawing::Color::SeaShell;
			this->button_addorder_enter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_addorder_enter->Location = System::Drawing::Point(1057, 687);
			this->button_addorder_enter->Name = L"button_addorder_enter";
			this->button_addorder_enter->Size = System::Drawing::Size(380, 130);
			this->button_addorder_enter->TabIndex = 7;
			this->button_addorder_enter->Text = L"Сохранить заказ";
			this->button_addorder_enter->UseVisualStyleBackColor = false;
			this->button_addorder_enter->Click += gcnew System::EventHandler(this, &addorder::button_addorder_enter_Click);
			// 
			// button_addorder_exit
			// 
			this->button_addorder_exit->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_addorder_exit->BackColor = System::Drawing::Color::SeaShell;
			this->button_addorder_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_addorder_exit->Location = System::Drawing::Point(1450, 687);
			this->button_addorder_exit->Name = L"button_addorder_exit";
			this->button_addorder_exit->Size = System::Drawing::Size(380, 130);
			this->button_addorder_exit->TabIndex = 8;
			this->button_addorder_exit->Text = L"Вернуться назад";
			this->button_addorder_exit->UseVisualStyleBackColor = false;
			this->button_addorder_exit->Click += gcnew System::EventHandler(this, &addorder::button_addorder_exit_Click);
			// 
			// label_addorder_count
			// 
			this->label_addorder_count->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label_addorder_count->AutoSize = true;
			this->label_addorder_count->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_addorder_count->Location = System::Drawing::Point(1050, 336);
			this->label_addorder_count->Name = L"label_addorder_count";
			this->label_addorder_count->Size = System::Drawing::Size(648, 84);
			this->label_addorder_count->TabIndex = 9;
			this->label_addorder_count->Text = L"Введите колличество товара (в шт):\r\nОбразец: 500\r\n";
			this->label_addorder_count->Visible = false;
			// 
			// textBox_addorder_count
			// 
			this->textBox_addorder_count->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox_addorder_count->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox_addorder_count->Location = System::Drawing::Point(1057, 439);
			this->textBox_addorder_count->Name = L"textBox_addorder_count";
			this->textBox_addorder_count->Size = System::Drawing::Size(619, 49);
			this->textBox_addorder_count->TabIndex = 10;
			this->textBox_addorder_count->Visible = false;
			this->textBox_addorder_count->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &addorder::textBox_addorder_count_KeyPress);
			// 
			// comboBox_product
			// 
			this->comboBox_product->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboBox_product->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_product->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBox_product->FormattingEnabled = true;
			this->comboBox_product->Location = System::Drawing::Point(1057, 283);
			this->comboBox_product->Name = L"comboBox_product";
			this->comboBox_product->Size = System::Drawing::Size(773, 50);
			this->comboBox_product->TabIndex = 11;
			this->comboBox_product->Visible = false;
			// 
			// comboBox_client
			// 
			this->comboBox_client->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboBox_client->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_client->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBox_client->FormattingEnabled = true;
			this->comboBox_client->Location = System::Drawing::Point(74, 274);
			this->comboBox_client->Name = L"comboBox_client";
			this->comboBox_client->Size = System::Drawing::Size(816, 50);
			this->comboBox_client->TabIndex = 12;
			// 
			// button_addorder_addproduct
			// 
			this->button_addorder_addproduct->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_addorder_addproduct->BackColor = System::Drawing::Color::SeaShell;
			this->button_addorder_addproduct->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_addorder_addproduct->Location = System::Drawing::Point(1057, 515);
			this->button_addorder_addproduct->Name = L"button_addorder_addproduct";
			this->button_addorder_addproduct->Size = System::Drawing::Size(619, 92);
			this->button_addorder_addproduct->TabIndex = 13;
			this->button_addorder_addproduct->Text = L"Добавить товар в заказ";
			this->button_addorder_addproduct->UseVisualStyleBackColor = false;
			this->button_addorder_addproduct->Visible = false;
			this->button_addorder_addproduct->Click += gcnew System::EventHandler(this, &addorder::button_addorder_addproduct_Click);
			// 
			// textBox_addorder_order
			// 
			this->textBox_addorder_order->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox_addorder_order->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox_addorder_order->Location = System::Drawing::Point(74, 528);
			this->textBox_addorder_order->Multiline = true;
			this->textBox_addorder_order->Name = L"textBox_addorder_order";
			this->textBox_addorder_order->ReadOnly = true;
			this->textBox_addorder_order->Size = System::Drawing::Size(816, 337);
			this->textBox_addorder_order->TabIndex = 14;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(63, 455);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(188, 61);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Заказ:";
			// 
			// label_addorder_service
			// 
			this->label_addorder_service->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label_addorder_service->AutoSize = true;
			this->label_addorder_service->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_addorder_service->Location = System::Drawing::Point(1050, 145);
			this->label_addorder_service->Name = L"label_addorder_service";
			this->label_addorder_service->Size = System::Drawing::Size(606, 126);
			this->label_addorder_service->TabIndex = 16;
			this->label_addorder_service->Text = L"Выберите тип услуги:\r\nОбразец: 3. Стрижка, \r\nтип животного: Собака, цена: 500\r\n";
			this->label_addorder_service->Visible = false;
			// 
			// comboBox_service
			// 
			this->comboBox_service->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboBox_service->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_service->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBox_service->FormattingEnabled = true;
			this->comboBox_service->Location = System::Drawing::Point(1057, 283);
			this->comboBox_service->Name = L"comboBox_service";
			this->comboBox_service->Size = System::Drawing::Size(773, 50);
			this->comboBox_service->TabIndex = 18;
			this->comboBox_service->Visible = false;
			// 
			// button_addorder_addservice
			// 
			this->button_addorder_addservice->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_addorder_addservice->BackColor = System::Drawing::Color::SeaShell;
			this->button_addorder_addservice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_addorder_addservice->Location = System::Drawing::Point(1057, 515);
			this->button_addorder_addservice->Name = L"button_addorder_addservice";
			this->button_addorder_addservice->Size = System::Drawing::Size(619, 92);
			this->button_addorder_addservice->TabIndex = 20;
			this->button_addorder_addservice->Text = L"Добавить услугу в заказ";
			this->button_addorder_addservice->UseMnemonic = false;
			this->button_addorder_addservice->UseVisualStyleBackColor = false;
			this->button_addorder_addservice->Visible = false;
			this->button_addorder_addservice->Click += gcnew System::EventHandler(this, &addorder::button_addorder_addservice_Click);
			// 
			// button_addorder_service
			// 
			this->button_addorder_service->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_addorder_service->BackColor = System::Drawing::Color::SeaShell;
			this->button_addorder_service->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_addorder_service->Location = System::Drawing::Point(530, 352);
			this->button_addorder_service->Name = L"button_addorder_service";
			this->button_addorder_service->Size = System::Drawing::Size(360, 90);
			this->button_addorder_service->TabIndex = 21;
			this->button_addorder_service->Text = L"Выбор услуги";
			this->button_addorder_service->UseVisualStyleBackColor = false;
			this->button_addorder_service->Click += gcnew System::EventHandler(this, &addorder::button_addorder_service_Click);
			// 
			// button_addorder_product
			// 
			this->button_addorder_product->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_addorder_product->BackColor = System::Drawing::Color::SeaShell;
			this->button_addorder_product->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_addorder_product->Location = System::Drawing::Point(74, 352);
			this->button_addorder_product->Name = L"button_addorder_product";
			this->button_addorder_product->Size = System::Drawing::Size(360, 90);
			this->button_addorder_product->TabIndex = 22;
			this->button_addorder_product->Text = L"Выбор товара";
			this->button_addorder_product->UseMnemonic = false;
			this->button_addorder_product->UseVisualStyleBackColor = false;
			this->button_addorder_product->Click += gcnew System::EventHandler(this, &addorder::button_addorder_product_Click);
			// 
			// textBox_addorder_price
			// 
			this->textBox_addorder_price->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox_addorder_price->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox_addorder_price->Location = System::Drawing::Point(74, 880);
			this->textBox_addorder_price->Name = L"textBox_addorder_price";
			this->textBox_addorder_price->ReadOnly = true;
			this->textBox_addorder_price->Size = System::Drawing::Size(816, 49);
			this->textBox_addorder_price->TabIndex = 23;
			// 
			// addorder
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ClientSize = System::Drawing::Size(1943, 922);
			this->Controls->Add(this->textBox_addorder_price);
			this->Controls->Add(this->button_addorder_product);
			this->Controls->Add(this->button_addorder_service);
			this->Controls->Add(this->button_addorder_addservice);
			this->Controls->Add(this->comboBox_service);
			this->Controls->Add(this->label_addorder_service);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox_addorder_order);
			this->Controls->Add(this->button_addorder_addproduct);
			this->Controls->Add(this->comboBox_client);
			this->Controls->Add(this->comboBox_product);
			this->Controls->Add(this->textBox_addorder_count);
			this->Controls->Add(this->label_addorder_count);
			this->Controls->Add(this->button_addorder_exit);
			this->Controls->Add(this->button_addorder_enter);
			this->Controls->Add(this->label_addorder_product);
			this->Controls->Add(this->label_addorder_name);
			this->Controls->Add(this->label_addorder_head);
			this->MinimumSize = System::Drawing::Size(1969, 993);
			this->Name = L"addorder";
			this->Text = L"Создание заказа";
			this->Load += gcnew System::EventHandler(this, &addorder::addorder_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	//Обработка кнопки вернуться назад
	private: System::Void button_addorder_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult dialog = MessageBox::Show("Все введенные данные, будут утеряны.\nВы уверены?", "Возвращение к базе данных", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (dialog == System::Windows::Forms::DialogResult::No) return;
		else {
			this->Close();
			// Присваиваем пустой список строк
			orderadding = String::Empty;
			combinedString = String::Empty;
		}
	}

	private: System::Void addorder_Load(System::Object^ sender, System::EventArgs^ e) {
		textBox_addorder_order->Text = "";
		orderadding = String::Empty;
		combinedString = String::Empty;
		result_price = 0;
	}

	/*Обработка кнопки сохранить заказ*/
	private: System::Void button_addorder_enter_Click(System::Object^ sender, System::EventArgs^ e) {
		/*Проверки на правильность введенных данных в текстбоксы*/
		if (comboBox_client->Text == String::Empty) {
			MessageBox::Show("Некорректный ввод номера клиента!\nЕсли клиента нет в списке, добавьте его!", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (textBox_addorder_order->Text == String::Empty) {
			MessageBox::Show("Для сохранения заказа, добавьте товар или услугу!", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Получаем текст из TextBox
		String^ textBoxContent = textBox_addorder_order->Text;

		// Используем регулярное выражение для разделения по символам новой строки
		array<String^>^ lines = Regex::Split(textBoxContent, "\r\n|\n|\r");

		int j = 1;
		// Проходим по строкам и добавляем только нечетные
		for (int i = 0; i < lines->Length - 1; i++) {
			if (i % 2 == 0) { // Нечетные строки имеют четные индексы (0, 2, 4...)
				combinedString += j + ". " + lines[i] + "  "; // Объединяем с новой строкой
				j++;
			}
		}

		// Убираем последний переход на новую строку, если это необходимо
		if (combinedString->Length > 0) {
			combinedString = combinedString->TrimEnd('\r', '\n', '\r\n');
		}

		MessageBox::Show("Заказ сохранен успешно!", "Успешно", MessageBoxButtons::OK, MessageBoxIcon::Information);
		this->Close();
	}

	private: System::Void textBox_addorder_count_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		/*Если вводятся цифры от 0 до 9 или символ Backspase (код = 8) то далее*/
		if (((e->KeyChar >= '0') && (e->KeyChar <= '9')) || e->KeyChar == 8) return;
		e->Handled = true; // Остальные символы запрещены для ввода
	}

	//Обработка кнопки выбор товара
	private: System::Void button_addorder_product_Click(System::Object^ sender, System::EventArgs^ e) {
		label_addorder_service->Visible = false;
		comboBox_service->Visible = false;
		button_addorder_addservice->Visible = false;
		//Видимость кнопок для добавления товара в заказ
		label_addorder_product->Visible = true;
		comboBox_product->Visible = true;
		label_addorder_count->Visible = true;
		textBox_addorder_count->Visible = true;
		button_addorder_addproduct->Visible = true;
	}
	//Обработка кнопки выбор услуги
	private: System::Void button_addorder_service_Click(System::Object^ sender, System::EventArgs^ e) {
		label_addorder_product->Visible = false;
		comboBox_product->Visible = false;
		label_addorder_count->Visible = false;
		textBox_addorder_count->Visible = false;
		button_addorder_addproduct->Visible = false;
		//Видимость кнопок для добавления услуги в заказ
		label_addorder_service->Visible = true;
		comboBox_service->Visible = true;
		button_addorder_addservice->Visible = true;
	}
	//Обработка кнопки добавить услугу в заказ
	private: System::Void button_addorder_addservice_Click(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox_service->Text == String::Empty) {
			MessageBox::Show("Некорректный выбор номера услуги!", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		String^ resultString = ""; // Строка для хранения символов до точки
		// Перебираем символы строки
		for (int i = 0; i < comboBox_service->Text->Length; i++) {
			// Если встречаем точку, выходим из цикла
			if (comboBox_service->Text[i] == '.') {
				break;
			}
			// Добавляем символ к результату
			resultString += comboBox_product->Text[i];
		}
		int number = Convert::ToInt32(resultString) - 1;

		String^ text = comboBox_service->Text;
		if (text->Length > 3) {
			text = text->Substring(3); // Удаляем первые 3 символа
		}
		else MessageBox::Show("Некорректный выбор номера услуги!", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
		textBox_addorder_order->AppendText(text);
		textBox_addorder_order->AppendText(Environment::NewLine);
		result_price += service_price[number];
		textBox_addorder_price->Text = "Итоговая стоимость заказа: " + result_price;
	}
	//Обработка кнопки добавить товар в заказ
	private: System::Void button_addorder_addproduct_Click(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox_product->Text == String::Empty) {
			MessageBox::Show("Некорректный выбор товара!", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		String^ resultString = ""; // Строка для хранения символов до точки
		// Перебираем символы строки
		for (int i = 0; i < comboBox_product->Text->Length; i++) {
			// Если встречаем точку, выходим из цикла
			if (comboBox_product->Text[i] == '.') {
				break;
			}
			// Добавляем символ к результату
			resultString += comboBox_product->Text[i];
		}
		int number = Convert::ToInt32(resultString) - 1;
		if (textBox_addorder_count->Text == String::Empty) {
			MessageBox::Show("Некорректный ввод количества товара!", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (Convert::ToInt32(textBox_addorder_count->Text) > max_product[number]) {
			MessageBox::Show("Превышено максимальное количество товара!\nМаксимальное количество: " + max_product[number].ToString(), "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		String^ text = comboBox_product->Text;
		if (text->Length > 3) {
			text = text->Substring(3); // Удаляем первые 3 символа
		}
		else MessageBox::Show("Некорректный выбор товара!", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
		String^ product_order = text + ", количество: " + textBox_addorder_count->Text;
		int counter = Convert::ToInt32(textBox_addorder_count->Text) * product_price[number];
		textBox_addorder_order->AppendText(product_order + Environment::NewLine);
		textBox_addorder_order->AppendText("Стоимость: " + counter.ToString());
		textBox_addorder_order->AppendText(Environment::NewLine);
		result_price += counter;
		textBox_addorder_price->Text = "Итоговая стоимость заказа: " + result_price;
		max_product[number] = max_product[number] - Convert::ToInt32(textBox_addorder_count->Text);
	}
};
}
