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
	/// Сводка для searchsupplier
	/// </summary>
	public ref class searchsupplier : public System::Windows::Forms::Form
	{
	public:
		searchsupplier(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	private: System::Windows::Forms::Label^ label_searchclient_head;
	private: System::Windows::Forms::CheckBox^ checkBox_searchsupplier_name;

	private: System::Windows::Forms::CheckBox^ checkBox_searchsupplier_phone;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox_searchsupplier;

	private: System::Windows::Forms::CheckBox^ checkBox_searchsupplier_address;
	private: System::Windows::Forms::TextBox^ textBox_searchsupplier_address;
	private: System::Windows::Forms::Button^ button_searchsupplier_remove;
	private: System::Windows::Forms::Button^ button_searchsupplier_enter;
	private: System::Windows::Forms::Button^ button_searchsupplier_exit;
	private: System::Windows::Forms::DataGridView^ dataGridView_searchsupplier;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ supplier_Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ supplier_Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ supplier_Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ supplier_Column4;
	public:
		/*Строка для добавления*/
	public: bool prov = false;
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~searchsupplier()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox_searchsupplier_name;
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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->textBox_searchsupplier_name = (gcnew System::Windows::Forms::TextBox());
			this->label_searchclient_head = (gcnew System::Windows::Forms::Label());
			this->checkBox_searchsupplier_name = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_searchsupplier_phone = (gcnew System::Windows::Forms::CheckBox());
			this->maskedTextBox_searchsupplier = (gcnew System::Windows::Forms::MaskedTextBox());
			this->checkBox_searchsupplier_address = (gcnew System::Windows::Forms::CheckBox());
			this->textBox_searchsupplier_address = (gcnew System::Windows::Forms::TextBox());
			this->button_searchsupplier_remove = (gcnew System::Windows::Forms::Button());
			this->button_searchsupplier_enter = (gcnew System::Windows::Forms::Button());
			this->button_searchsupplier_exit = (gcnew System::Windows::Forms::Button());
			this->dataGridView_searchsupplier = (gcnew System::Windows::Forms::DataGridView());
			this->supplier_Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->supplier_Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->supplier_Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->supplier_Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_searchsupplier))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox_searchsupplier_name
			// 
			this->textBox_searchsupplier_name->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox_searchsupplier_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox_searchsupplier_name->Location = System::Drawing::Point(48, 229);
			this->textBox_searchsupplier_name->Name = L"textBox_searchsupplier_name";
			this->textBox_searchsupplier_name->Size = System::Drawing::Size(664, 49);
			this->textBox_searchsupplier_name->TabIndex = 2;
			this->textBox_searchsupplier_name->Visible = false;
			// 
			// label_searchclient_head
			// 
			this->label_searchclient_head->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label_searchclient_head->AutoSize = true;
			this->label_searchclient_head->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_searchclient_head->Location = System::Drawing::Point(180, 29);
			this->label_searchclient_head->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label_searchclient_head->Name = L"label_searchclient_head";
			this->label_searchclient_head->Size = System::Drawing::Size(1633, 88);
			this->label_searchclient_head->TabIndex = 9;
			this->label_searchclient_head->Text = L"Для выбора параметра необходимо поставить галочку в окошко, рядом с  нужным полем"
				L". \r\nДалее, необходимо выбрать критерии для поиска и нажать кнопку \"Поиск\".\r\n";
			// 
			// checkBox_searchsupplier_name
			// 
			this->checkBox_searchsupplier_name->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->checkBox_searchsupplier_name->AutoSize = true;
			this->checkBox_searchsupplier_name->BackColor = System::Drawing::SystemColors::Info;
			this->checkBox_searchsupplier_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->checkBox_searchsupplier_name->Location = System::Drawing::Point(48, 150);
			this->checkBox_searchsupplier_name->Margin = System::Windows::Forms::Padding(6);
			this->checkBox_searchsupplier_name->Name = L"checkBox_searchsupplier_name";
			this->checkBox_searchsupplier_name->Size = System::Drawing::Size(503, 55);
			this->checkBox_searchsupplier_name->TabIndex = 27;
			this->checkBox_searchsupplier_name->Text = L"Название поставщика";
			this->checkBox_searchsupplier_name->UseVisualStyleBackColor = false;
			this->checkBox_searchsupplier_name->CheckStateChanged += gcnew System::EventHandler(this, &searchsupplier::checkBox_searchsupplier_name_CheckStateChanged);
			// 
			// checkBox_searchsupplier_phone
			// 
			this->checkBox_searchsupplier_phone->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->checkBox_searchsupplier_phone->AutoSize = true;
			this->checkBox_searchsupplier_phone->BackColor = System::Drawing::SystemColors::Info;
			this->checkBox_searchsupplier_phone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->checkBox_searchsupplier_phone->Location = System::Drawing::Point(48, 447);
			this->checkBox_searchsupplier_phone->Margin = System::Windows::Forms::Padding(6);
			this->checkBox_searchsupplier_phone->Name = L"checkBox_searchsupplier_phone";
			this->checkBox_searchsupplier_phone->Size = System::Drawing::Size(489, 55);
			this->checkBox_searchsupplier_phone->TabIndex = 28;
			this->checkBox_searchsupplier_phone->Text = L"Телефон поставщика";
			this->checkBox_searchsupplier_phone->UseVisualStyleBackColor = false;
			this->checkBox_searchsupplier_phone->CheckStateChanged += gcnew System::EventHandler(this, &searchsupplier::checkBox_searchsupplier_phone_CheckStateChanged);
			// 
			// maskedTextBox_searchsupplier
			// 
			this->maskedTextBox_searchsupplier->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->maskedTextBox_searchsupplier->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->maskedTextBox_searchsupplier->Location = System::Drawing::Point(48, 522);
			this->maskedTextBox_searchsupplier->Mask = L"(999) 000-0000";
			this->maskedTextBox_searchsupplier->Name = L"maskedTextBox_searchsupplier";
			this->maskedTextBox_searchsupplier->Size = System::Drawing::Size(410, 49);
			this->maskedTextBox_searchsupplier->TabIndex = 29;
			this->maskedTextBox_searchsupplier->Visible = false;
			// 
			// checkBox_searchsupplier_address
			// 
			this->checkBox_searchsupplier_address->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->checkBox_searchsupplier_address->AutoSize = true;
			this->checkBox_searchsupplier_address->BackColor = System::Drawing::SystemColors::Info;
			this->checkBox_searchsupplier_address->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->checkBox_searchsupplier_address->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->checkBox_searchsupplier_address->Location = System::Drawing::Point(48, 298);
			this->checkBox_searchsupplier_address->Margin = System::Windows::Forms::Padding(6);
			this->checkBox_searchsupplier_address->Name = L"checkBox_searchsupplier_address";
			this->checkBox_searchsupplier_address->Size = System::Drawing::Size(431, 55);
			this->checkBox_searchsupplier_address->TabIndex = 32;
			this->checkBox_searchsupplier_address->Text = L"Адрес поставщика";
			this->checkBox_searchsupplier_address->UseVisualStyleBackColor = false;
			this->checkBox_searchsupplier_address->CheckStateChanged += gcnew System::EventHandler(this, &searchsupplier::checkBox_searchsupplier_address_CheckStateChanged);
			// 
			// textBox_searchsupplier_address
			// 
			this->textBox_searchsupplier_address->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox_searchsupplier_address->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox_searchsupplier_address->Location = System::Drawing::Point(48, 379);
			this->textBox_searchsupplier_address->Name = L"textBox_searchsupplier_address";
			this->textBox_searchsupplier_address->Size = System::Drawing::Size(664, 49);
			this->textBox_searchsupplier_address->TabIndex = 33;
			this->textBox_searchsupplier_address->Visible = false;
			// 
			// button_searchsupplier_remove
			// 
			this->button_searchsupplier_remove->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_searchsupplier_remove->BackColor = System::Drawing::Color::SeaShell;
			this->button_searchsupplier_remove->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_searchsupplier_remove->Location = System::Drawing::Point(397, 594);
			this->button_searchsupplier_remove->Name = L"button_searchsupplier_remove";
			this->button_searchsupplier_remove->Size = System::Drawing::Size(340, 140);
			this->button_searchsupplier_remove->TabIndex = 8;
			this->button_searchsupplier_remove->Text = L"Снять выделение";
			this->button_searchsupplier_remove->UseVisualStyleBackColor = false;
			this->button_searchsupplier_remove->Click += gcnew System::EventHandler(this, &searchsupplier::button_searchsupplier_remove_Click);
			// 
			// button_searchsupplier_enter
			// 
			this->button_searchsupplier_enter->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_searchsupplier_enter->BackColor = System::Drawing::Color::SeaShell;
			this->button_searchsupplier_enter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_searchsupplier_enter->Location = System::Drawing::Point(37, 594);
			this->button_searchsupplier_enter->Name = L"button_searchsupplier_enter";
			this->button_searchsupplier_enter->Size = System::Drawing::Size(340, 140);
			this->button_searchsupplier_enter->TabIndex = 35;
			this->button_searchsupplier_enter->Text = L"Поиск";
			this->button_searchsupplier_enter->UseVisualStyleBackColor = false;
			this->button_searchsupplier_enter->Click += gcnew System::EventHandler(this, &searchsupplier::button_searchsupplier_enter_Click);
			// 
			// button_searchsupplier_exit
			// 
			this->button_searchsupplier_exit->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_searchsupplier_exit->BackColor = System::Drawing::Color::SeaShell;
			this->button_searchsupplier_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_searchsupplier_exit->Location = System::Drawing::Point(219, 752);
			this->button_searchsupplier_exit->Name = L"button_searchsupplier_exit";
			this->button_searchsupplier_exit->Size = System::Drawing::Size(340, 140);
			this->button_searchsupplier_exit->TabIndex = 36;
			this->button_searchsupplier_exit->Text = L"Вернуться назад";
			this->button_searchsupplier_exit->UseVisualStyleBackColor = false;
			this->button_searchsupplier_exit->Click += gcnew System::EventHandler(this, &searchsupplier::button_searchsupplier_exit_Click);
			// 
			// dataGridView_searchsupplier
			// 
			this->dataGridView_searchsupplier->AllowUserToAddRows = false;
			this->dataGridView_searchsupplier->AllowUserToDeleteRows = false;
			this->dataGridView_searchsupplier->AllowUserToOrderColumns = true;
			this->dataGridView_searchsupplier->Anchor = System::Windows::Forms::AnchorStyles::None;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView_searchsupplier->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView_searchsupplier->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_searchsupplier->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->supplier_Column1,
					this->supplier_Column2, this->supplier_Column3, this->supplier_Column4
			});
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView_searchsupplier->DefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView_searchsupplier->Location = System::Drawing::Point(804, 150);
			this->dataGridView_searchsupplier->Name = L"dataGridView_searchsupplier";
			this->dataGridView_searchsupplier->ReadOnly = true;
			this->dataGridView_searchsupplier->RowHeadersWidth = 60;
			this->dataGridView_searchsupplier->RowTemplate->Height = 33;
			this->dataGridView_searchsupplier->Size = System::Drawing::Size(1157, 442);
			this->dataGridView_searchsupplier->TabIndex = 37;
			// 
			// supplier_Column1
			// 
			this->supplier_Column1->HeaderText = L"Номер поставщика";
			this->supplier_Column1->MinimumWidth = 10;
			this->supplier_Column1->Name = L"supplier_Column1";
			this->supplier_Column1->ReadOnly = true;
			this->supplier_Column1->Width = 220;
			// 
			// supplier_Column2
			// 
			this->supplier_Column2->HeaderText = L"Название поставщика";
			this->supplier_Column2->MinimumWidth = 10;
			this->supplier_Column2->Name = L"supplier_Column2";
			this->supplier_Column2->ReadOnly = true;
			this->supplier_Column2->Width = 280;
			// 
			// supplier_Column3
			// 
			this->supplier_Column3->HeaderText = L"Адрес поставщика";
			this->supplier_Column3->MinimumWidth = 10;
			this->supplier_Column3->Name = L"supplier_Column3";
			this->supplier_Column3->ReadOnly = true;
			this->supplier_Column3->Width = 350;
			// 
			// supplier_Column4
			// 
			this->supplier_Column4->HeaderText = L"Телефон поставщика";
			this->supplier_Column4->MinimumWidth = 10;
			this->supplier_Column4->Name = L"supplier_Column4";
			this->supplier_Column4->ReadOnly = true;
			this->supplier_Column4->Width = 250;
			// 
			// searchsupplier
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ClientSize = System::Drawing::Size(1973, 922);
			this->Controls->Add(this->dataGridView_searchsupplier);
			this->Controls->Add(this->button_searchsupplier_exit);
			this->Controls->Add(this->button_searchsupplier_enter);
			this->Controls->Add(this->textBox_searchsupplier_address);
			this->Controls->Add(this->checkBox_searchsupplier_address);
			this->Controls->Add(this->maskedTextBox_searchsupplier);
			this->Controls->Add(this->checkBox_searchsupplier_phone);
			this->Controls->Add(this->checkBox_searchsupplier_name);
			this->Controls->Add(this->label_searchclient_head);
			this->Controls->Add(this->button_searchsupplier_remove);
			this->Controls->Add(this->textBox_searchsupplier_name);
			this->Name = L"searchsupplier";
			this->Text = L"Поиск поставщиков";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_searchsupplier))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Обработка кнопки вернуться назад
	private: System::Void button_searchsupplier_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult dialog = MessageBox::Show("Все введенные данные, будут утеряны.\nВы уверены?", "Возвращение к базе данных", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (dialog == System::Windows::Forms::DialogResult::No) return;
		else {
			this->Close();
		}
	}

	private: System::Void maskedTextBox_searchsupplier_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		/*Если вводятся цифры от 0 до 9 или символ Backspase (код = 8) то далее*/
		if (((e->KeyChar >= '0') && (e->KeyChar <= '9')) || e->KeyChar == 8) return;
		e->Handled = true; // Остальные символы запрещены для ввода
	}

	/*Обработка кнопки поиск*/
	private: System::Void button_searchsupplier_enter_Click(System::Object^ sender, System::EventArgs^ e) {
		prov = false;
		int i = 0; //нумерация строк
		int spros = 0;				//переменая для хранения кол-ва полей запроса
		int spros_prov = 0; //переменная для хранения кол-ва совпавших полей

		/*Если не введено название*/
		if (checkBox_searchsupplier_name->Checked == true) {
			if (textBox_searchsupplier_name->Text == String::Empty) {
				MessageBox::Show("Если вы передумали искать по этому полю, снимите галочку", "Некорректный ввод названия!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			spros++;
		}
		/*Если не введен адресс*/
		if (checkBox_searchsupplier_address->Checked == true) {
			if (textBox_searchsupplier_address->Text == String::Empty) {
				MessageBox::Show("Если вы передумали искать  по этому полю, снимите галочку", "Некорректный ввод адреса!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			spros++;
		}
		/*Если не введен телефон*/
		if (checkBox_searchsupplier_phone->Checked == true) {
			if (maskedTextBox_searchsupplier->Text == String::Empty) {
				MessageBox::Show("Если вы передумали искать  по этому полю, снимите галочку", "Некорректный ввод телефона!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			spros++;
		}
		/*Открываем файл для чтения*/
		StreamReader^ file = gcnew StreamReader("supplier.txt");
		for (int i = 0; i < dataGridView_searchsupplier->Rows->Count; i++)
		{
			dataGridView_searchsupplier->Rows->Clear();
		}
		/*Пока не конец файла*/
		while (file->Peek() >= 0)
		{
			spros_prov = 0;
			/*Массив строк из файла*/
			array <String^>^ cells = (file->ReadLine())->Split('&', '\0');
			/*Проверка на совпадение названий*/
			if (checkBox_searchsupplier_name->Checked == true)
				if (textBox_searchsupplier_name->Text->CompareTo(cells[0]) == 0) spros_prov++;
			/*Проверка по адресу*/
			if (checkBox_searchsupplier_address->Checked == true)
				if (textBox_searchsupplier_address->Text->CompareTo(cells[1]) == 0) spros_prov++;
			/*Проверка по номеру телефона*/
			if (checkBox_searchsupplier_phone->Checked == true)
				if (maskedTextBox_searchsupplier->Text->CompareTo(cells[2]) == 0) spros_prov++;
			if (spros == spros_prov && spros != 0)
			{
				dataGridView_searchsupplier->Rows->Add();
				dataGridView_searchsupplier->Rows[i]->Cells[0]->Value = i + 1;
				for (int j = 0; j < 3; j++)
				{
					dataGridView_searchsupplier->Rows[i]->Cells[j + 1]->Value = cells[j];
				}
				i++;
				prov = true;
			}
		}
		if (prov == false)
		{
			if (spros == 0)
			{
				MessageBox::Show("Вы не ввели поля для поиска, введите их и попробуйте снова", "Поиск", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else MessageBox::Show("По вашему запросу ничего не найдено", "Поиск", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	//Обработка кнопки снять выделение
	private: System::Void button_searchsupplier_remove_Click(System::Object^ sender, System::EventArgs^ e) {
		/*Очищаем таблицу*/
		for (int i = 0; i < dataGridView_searchsupplier->Rows->Count; i++)
		{
			dataGridView_searchsupplier->Rows->Clear();
		}
		/*Снимаем выделение со всех checkBox*/
		checkBox_searchsupplier_name->Checked = false;
		checkBox_searchsupplier_address->Checked = false;
		checkBox_searchsupplier_phone->Checked = false;
		/*Снимаем выделение со всех textBox*/
		textBox_searchsupplier_name->Clear();
		textBox_searchsupplier_address->Clear();
		maskedTextBox_searchsupplier->Clear();
	}

	//Выбор checkBox
	private: System::Void checkBox_searchsupplier_name_CheckStateChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox_searchsupplier_name->Visible = true;
		if (checkBox_searchsupplier_name->Checked != 1) textBox_searchsupplier_name->Visible = false;
	}

	private: System::Void checkBox_searchsupplier_address_CheckStateChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox_searchsupplier_address->Visible = true;
		if (checkBox_searchsupplier_address->Checked != 1) textBox_searchsupplier_address->Visible = false;
	}

	private: System::Void checkBox_searchsupplier_phone_CheckStateChanged(System::Object^ sender, System::EventArgs^ e) {
		maskedTextBox_searchsupplier->Visible = true;
		if (checkBox_searchsupplier_phone->Checked != 1) maskedTextBox_searchsupplier->Visible = false;
	}
	};
}
