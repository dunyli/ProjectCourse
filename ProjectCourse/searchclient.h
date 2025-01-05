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
	/// Сводка для searchclient
	/// </summary>
	public ref class searchclient : public System::Windows::Forms::Form
	{
	public:
		searchclient(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	private: System::Windows::Forms::Label^ label_searchclient_head;
	private: System::Windows::Forms::CheckBox^ checkBox_searchclient_name;
	private: System::Windows::Forms::CheckBox^ checkBox_searchclient_phone;

	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox_searchclient;
	private: System::Windows::Forms::CheckBox^ checkBox_searchclient_address;
	private: System::Windows::Forms::TextBox^ textBox_searchclient_address;
	private: System::Windows::Forms::Button^ button_searchclient_remove;
	private: System::Windows::Forms::Button^ button_searchclient_enter;
	private: System::Windows::Forms::Button^ button_searchclient_exit;
	private: System::Windows::Forms::DataGridView^ dataGridView_searchclient;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ client_Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ client_Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ client_Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ client_Column4;






	public: 
	/*Строка для добавления*/
	public: bool prov = false;
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~searchclient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox_searchclient_name;
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
			this->textBox_searchclient_name = (gcnew System::Windows::Forms::TextBox());
			this->label_searchclient_head = (gcnew System::Windows::Forms::Label());
			this->checkBox_searchclient_name = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_searchclient_phone = (gcnew System::Windows::Forms::CheckBox());
			this->maskedTextBox_searchclient = (gcnew System::Windows::Forms::MaskedTextBox());
			this->checkBox_searchclient_address = (gcnew System::Windows::Forms::CheckBox());
			this->textBox_searchclient_address = (gcnew System::Windows::Forms::TextBox());
			this->button_searchclient_remove = (gcnew System::Windows::Forms::Button());
			this->button_searchclient_enter = (gcnew System::Windows::Forms::Button());
			this->button_searchclient_exit = (gcnew System::Windows::Forms::Button());
			this->dataGridView_searchclient = (gcnew System::Windows::Forms::DataGridView());
			this->client_Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->client_Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->client_Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->client_Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_searchclient))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox_searchclient_name
			// 
			this->textBox_searchclient_name->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox_searchclient_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox_searchclient_name->Location = System::Drawing::Point(48, 229);
			this->textBox_searchclient_name->Name = L"textBox_searchclient_name";
			this->textBox_searchclient_name->Size = System::Drawing::Size(664, 49);
			this->textBox_searchclient_name->TabIndex = 2;
			this->textBox_searchclient_name->Visible = false;
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
			// checkBox_searchclient_name
			// 
			this->checkBox_searchclient_name->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->checkBox_searchclient_name->AutoSize = true;
			this->checkBox_searchclient_name->BackColor = System::Drawing::SystemColors::Info;
			this->checkBox_searchclient_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->checkBox_searchclient_name->Location = System::Drawing::Point(48, 150);
			this->checkBox_searchclient_name->Margin = System::Windows::Forms::Padding(6);
			this->checkBox_searchclient_name->Name = L"checkBox_searchclient_name";
			this->checkBox_searchclient_name->Size = System::Drawing::Size(329, 55);
			this->checkBox_searchclient_name->TabIndex = 27;
			this->checkBox_searchclient_name->Text = L"ФИО клиента";
			this->checkBox_searchclient_name->UseVisualStyleBackColor = false;
			this->checkBox_searchclient_name->CheckStateChanged += gcnew System::EventHandler(this, &searchclient::checkBox_searchclient_name_CheckStateChanged);
			// 
			// checkBox_searchclient_phone
			// 
			this->checkBox_searchclient_phone->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->checkBox_searchclient_phone->AutoSize = true;
			this->checkBox_searchclient_phone->BackColor = System::Drawing::SystemColors::Info;
			this->checkBox_searchclient_phone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->checkBox_searchclient_phone->Location = System::Drawing::Point(48, 447);
			this->checkBox_searchclient_phone->Margin = System::Windows::Forms::Padding(6);
			this->checkBox_searchclient_phone->Name = L"checkBox_searchclient_phone";
			this->checkBox_searchclient_phone->Size = System::Drawing::Size(410, 55);
			this->checkBox_searchclient_phone->TabIndex = 28;
			this->checkBox_searchclient_phone->Text = L"Телефон клиента";
			this->checkBox_searchclient_phone->UseVisualStyleBackColor = false;
			this->checkBox_searchclient_phone->CheckStateChanged += gcnew System::EventHandler(this, &searchclient::checkBox_searchclient_phone_CheckStateChanged);
			// 
			// maskedTextBox_searchclient
			// 
			this->maskedTextBox_searchclient->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->maskedTextBox_searchclient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->maskedTextBox_searchclient->Location = System::Drawing::Point(48, 522);
			this->maskedTextBox_searchclient->Mask = L"(999) 000-0000";
			this->maskedTextBox_searchclient->Name = L"maskedTextBox_searchclient";
			this->maskedTextBox_searchclient->Size = System::Drawing::Size(410, 49);
			this->maskedTextBox_searchclient->TabIndex = 29;
			this->maskedTextBox_searchclient->Visible = false;
			// 
			// checkBox_searchclient_address
			// 
			this->checkBox_searchclient_address->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->checkBox_searchclient_address->AutoSize = true;
			this->checkBox_searchclient_address->BackColor = System::Drawing::SystemColors::Info;
			this->checkBox_searchclient_address->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->checkBox_searchclient_address->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->checkBox_searchclient_address->Location = System::Drawing::Point(48, 298);
			this->checkBox_searchclient_address->Margin = System::Windows::Forms::Padding(6);
			this->checkBox_searchclient_address->Name = L"checkBox_searchclient_address";
			this->checkBox_searchclient_address->Size = System::Drawing::Size(352, 55);
			this->checkBox_searchclient_address->TabIndex = 32;
			this->checkBox_searchclient_address->Text = L"Адрес клиента";
			this->checkBox_searchclient_address->UseVisualStyleBackColor = false;
			this->checkBox_searchclient_address->CheckStateChanged += gcnew System::EventHandler(this, &searchclient::checkBox_searchclient_address_CheckStateChanged);
			// 
			// textBox_searchclient_address
			// 
			this->textBox_searchclient_address->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox_searchclient_address->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox_searchclient_address->Location = System::Drawing::Point(48, 379);
			this->textBox_searchclient_address->Name = L"textBox_searchclient_address";
			this->textBox_searchclient_address->Size = System::Drawing::Size(664, 49);
			this->textBox_searchclient_address->TabIndex = 33;
			this->textBox_searchclient_address->Visible = false;
			// 
			// button_searchclient_remove
			// 
			this->button_searchclient_remove->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_searchclient_remove->BackColor = System::Drawing::Color::SeaShell;
			this->button_searchclient_remove->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_searchclient_remove->Location = System::Drawing::Point(397, 594);
			this->button_searchclient_remove->Name = L"button_searchclient_remove";
			this->button_searchclient_remove->Size = System::Drawing::Size(340, 140);
			this->button_searchclient_remove->TabIndex = 8;
			this->button_searchclient_remove->Text = L"Снять выделение";
			this->button_searchclient_remove->UseVisualStyleBackColor = false;
			this->button_searchclient_remove->Click += gcnew System::EventHandler(this, &searchclient::button_searchclient_remove_Click);
			// 
			// button_searchclient_enter
			// 
			this->button_searchclient_enter->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_searchclient_enter->BackColor = System::Drawing::Color::SeaShell;
			this->button_searchclient_enter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_searchclient_enter->Location = System::Drawing::Point(37, 594);
			this->button_searchclient_enter->Name = L"button_searchclient_enter";
			this->button_searchclient_enter->Size = System::Drawing::Size(340, 140);
			this->button_searchclient_enter->TabIndex = 35;
			this->button_searchclient_enter->Text = L"Поиск";
			this->button_searchclient_enter->UseVisualStyleBackColor = false;
			this->button_searchclient_enter->Click += gcnew System::EventHandler(this, &searchclient::button_searchclient_enter_Click);
			// 
			// button_searchclient_exit
			// 
			this->button_searchclient_exit->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_searchclient_exit->BackColor = System::Drawing::Color::SeaShell;
			this->button_searchclient_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_searchclient_exit->Location = System::Drawing::Point(219, 752);
			this->button_searchclient_exit->Name = L"button_searchclient_exit";
			this->button_searchclient_exit->Size = System::Drawing::Size(340, 140);
			this->button_searchclient_exit->TabIndex = 36;
			this->button_searchclient_exit->Text = L"Вернуться назад";
			this->button_searchclient_exit->UseVisualStyleBackColor = false;
			this->button_searchclient_exit->Click += gcnew System::EventHandler(this, &searchclient::button_searchclient_exit_Click);
			// 
			// dataGridView_searchclient
			// 
			this->dataGridView_searchclient->AllowUserToAddRows = false;
			this->dataGridView_searchclient->AllowUserToDeleteRows = false;
			this->dataGridView_searchclient->AllowUserToOrderColumns = true;
			this->dataGridView_searchclient->Anchor = System::Windows::Forms::AnchorStyles::None;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView_searchclient->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView_searchclient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_searchclient->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->client_Column1,
					this->client_Column2, this->client_Column3, this->client_Column4
			});
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView_searchclient->DefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView_searchclient->Location = System::Drawing::Point(815, 139);
			this->dataGridView_searchclient->Name = L"dataGridView_searchclient";
			this->dataGridView_searchclient->ReadOnly = true;
			this->dataGridView_searchclient->RowHeadersWidth = 60;
			this->dataGridView_searchclient->RowTemplate->Height = 33;
			this->dataGridView_searchclient->Size = System::Drawing::Size(1066, 442);
			this->dataGridView_searchclient->TabIndex = 37;
			// 
			// client_Column1
			// 
			this->client_Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->client_Column1->HeaderText = L"Номер клиента";
			this->client_Column1->MinimumWidth = 10;
			this->client_Column1->Name = L"client_Column1";
			this->client_Column1->ReadOnly = true;
			this->client_Column1->Width = 257;
			// 
			// client_Column2
			// 
			this->client_Column2->HeaderText = L"ФИО Клиента";
			this->client_Column2->MinimumWidth = 10;
			this->client_Column2->Name = L"client_Column2";
			this->client_Column2->ReadOnly = true;
			this->client_Column2->Width = 250;
			// 
			// client_Column3
			// 
			this->client_Column3->HeaderText = L"Адрес клиента";
			this->client_Column3->MinimumWidth = 10;
			this->client_Column3->Name = L"client_Column3";
			this->client_Column3->ReadOnly = true;
			this->client_Column3->Width = 300;
			// 
			// client_Column4
			// 
			this->client_Column4->HeaderText = L"Телефон клиента";
			this->client_Column4->MinimumWidth = 10;
			this->client_Column4->Name = L"client_Column4";
			this->client_Column4->ReadOnly = true;
			this->client_Column4->Width = 200;
			// 
			// searchclient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ClientSize = System::Drawing::Size(1973, 922);
			this->Controls->Add(this->dataGridView_searchclient);
			this->Controls->Add(this->button_searchclient_exit);
			this->Controls->Add(this->button_searchclient_enter);
			this->Controls->Add(this->textBox_searchclient_address);
			this->Controls->Add(this->checkBox_searchclient_address);
			this->Controls->Add(this->maskedTextBox_searchclient);
			this->Controls->Add(this->checkBox_searchclient_phone);
			this->Controls->Add(this->checkBox_searchclient_name);
			this->Controls->Add(this->label_searchclient_head);
			this->Controls->Add(this->button_searchclient_remove);
			this->Controls->Add(this->textBox_searchclient_name);
			this->Name = L"searchclient";
			this->Text = L"Поиск клиентов";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_searchclient))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//Обработка кнопки вернуться назад
	private: System::Void button_searchclient_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult dialog = MessageBox::Show("Все введенные данные, будут утеряны.\nВы уверены?", "Возвращение к базе данных", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (dialog == System::Windows::Forms::DialogResult::No) return;
		else {
			this->Close();
		}
	}

	private: System::Void maskedTextBox_searchclient_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		/*Если вводятся цифры от 0 до 9 или символ Backspase (код = 8) то далее*/
		if (((e->KeyChar >= '0') && (e->KeyChar <= '9')) || e->KeyChar == 8) return;
		e->Handled = true; // Остальные символы запрещены для ввода
	}

	/*Обработка кнопки поиск*/
	private: System::Void button_searchclient_enter_Click(System::Object^ sender, System::EventArgs^ e) {
		prov = false;
		int i = 0; //нумерация строк
		int spros = 0;				//переменая для хранения кол-ва полей запроса
		int spros_prov = 0; //переменная для хранения кол-ва совпавших полей

		/*Если не введено название*/
		if (checkBox_searchclient_name->Checked == true) {
			if (textBox_searchclient_name->Text == String::Empty) {
				MessageBox::Show("Если вы передумали искать по этому полю, снимите галочку", "Некорректный ввод названия клиента!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			spros++;
		}
		/*Если не введен адресс*/
		if (checkBox_searchclient_address->Checked == true) {
			if (textBox_searchclient_address->Text == String::Empty) {
				MessageBox::Show("Если вы передумали искать  по этому полю, снимите галочку", "Некорректный ввод адреса клиента!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			spros++;
		}
		/*Если не введен телефон*/
		if (checkBox_searchclient_phone->Checked == true) {
			if (maskedTextBox_searchclient->Text == String::Empty) {
				MessageBox::Show("Если вы передумали искать  по этому полю, снимите галочку", "Некорректный ввод телефона клиента!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			spros++;
		}
		/*Открываем файл для чтения*/
		StreamReader^ file = gcnew StreamReader("client.txt");
		for (int i = 0; i < dataGridView_searchclient->Rows->Count; i++)
		{
			dataGridView_searchclient->Rows->Clear();
		}
		/*Пока не конец файла*/
		while (file->Peek() >= 0)
		{
			spros_prov = 0;
			/*Массив строк из файла*/
			array <String^>^ cells = (file->ReadLine())->Split('&', '\0');
			/*Проверка на совпадение названий*/
			if (checkBox_searchclient_name->Checked == true)
				if (textBox_searchclient_name->Text->CompareTo(cells[0]) == 0) spros_prov++;
			/*Проверка по адресу*/
			if (checkBox_searchclient_address->Checked == true)
				if (textBox_searchclient_address->Text->CompareTo(cells[1]) == 0) spros_prov++;
			/*Проверка по номеру телефона*/
			if (checkBox_searchclient_phone->Checked == true)
				if (maskedTextBox_searchclient->Text->CompareTo(cells[2]) == 0) spros_prov++;
			if (spros == spros_prov && spros != 0)
			{
				dataGridView_searchclient->Rows->Add();
				dataGridView_searchclient->Rows[i]->Cells[0]->Value = i + 1;
				for (int j = 0; j < 3; j++)
				{
					dataGridView_searchclient->Rows[i]->Cells[j + 1]->Value = cells[j];
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
	private: System::Void button_searchclient_remove_Click(System::Object^ sender, System::EventArgs^ e) {
		/*Очищаем таблицу*/
		for (int i = 0; i < dataGridView_searchclient->Rows->Count; i++)
		{
			dataGridView_searchclient->Rows->Clear();
		}
		/*Снимаем выделение со всех checkBox*/
		checkBox_searchclient_name->Checked = false;
		checkBox_searchclient_address->Checked = false;
		checkBox_searchclient_phone->Checked = false;
		/*Снимаем выделение со всех textBox*/
		textBox_searchclient_name->Clear();
		textBox_searchclient_address->Clear();
		maskedTextBox_searchclient->Clear();
	}
	//Выбор checkBox
	private: System::Void checkBox_searchclient_name_CheckStateChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox_searchclient_name->Visible = true;
		if (checkBox_searchclient_name->Checked != 1) textBox_searchclient_name->Visible = false;
	}

	private: System::Void checkBox_searchclient_address_CheckStateChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox_searchclient_address->Visible = true;
		if (checkBox_searchclient_address->Checked != 1) textBox_searchclient_address->Visible = false;
	}

	private: System::Void checkBox_searchclient_phone_CheckStateChanged(System::Object^ sender, System::EventArgs^ e) {
		maskedTextBox_searchclient->Visible = true;
		if (checkBox_searchclient_phone->Checked != 1) maskedTextBox_searchclient->Visible = false;
	}
};
}
