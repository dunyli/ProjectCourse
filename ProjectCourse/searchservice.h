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
	/// Сводка для searchservice
	/// </summary>
	public ref class searchservice : public System::Windows::Forms::Form
	{
	public:
		searchservice(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	private: System::Windows::Forms::Label^ label_searchclient_head;
	private: System::Windows::Forms::CheckBox^ checkBox_searchservice_name;
	private: System::Windows::Forms::CheckBox^ checkBox_searchservice_price;
	private: System::Windows::Forms::CheckBox^ checkBox_searchservice_type;
	private: System::Windows::Forms::TextBox^ textBox_searchservice_type;
	private: System::Windows::Forms::Button^ button_searchservice_remove;
	private: System::Windows::Forms::Button^ button_searchservice_enter;
	private: System::Windows::Forms::Button^ button_searchservice_exit;
	private: System::Windows::Forms::DataGridView^ dataGridView_searchservice;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ service_Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ service_Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ service_Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ service_Column4;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox_searchservice;
	private: System::Windows::Forms::TextBox^ textBox_searchservice_price;
	public: bool prov = false;
	public: int numbers;
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~searchservice()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox_searchservice_name;
	protected:

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->textBox_searchservice_name = (gcnew System::Windows::Forms::TextBox());
			this->label_searchclient_head = (gcnew System::Windows::Forms::Label());
			this->checkBox_searchservice_name = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_searchservice_price = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_searchservice_type = (gcnew System::Windows::Forms::CheckBox());
			this->textBox_searchservice_type = (gcnew System::Windows::Forms::TextBox());
			this->button_searchservice_remove = (gcnew System::Windows::Forms::Button());
			this->button_searchservice_enter = (gcnew System::Windows::Forms::Button());
			this->button_searchservice_exit = (gcnew System::Windows::Forms::Button());
			this->dataGridView_searchservice = (gcnew System::Windows::Forms::DataGridView());
			this->service_Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->service_Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->service_Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->service_Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->checkedListBox_searchservice = (gcnew System::Windows::Forms::CheckedListBox());
			this->textBox_searchservice_price = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_searchservice))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox_searchservice_name
			// 
			this->textBox_searchservice_name->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox_searchservice_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox_searchservice_name->Location = System::Drawing::Point(48, 244);
			this->textBox_searchservice_name->Name = L"textBox_searchservice_name";
			this->textBox_searchservice_name->Size = System::Drawing::Size(664, 49);
			this->textBox_searchservice_name->TabIndex = 2;
			this->textBox_searchservice_name->Visible = false;
			// 
			// label_searchclient_head
			// 
			this->label_searchclient_head->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label_searchclient_head->AutoSize = true;
			this->label_searchclient_head->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_searchclient_head->Location = System::Drawing::Point(185, 29);
			this->label_searchclient_head->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label_searchclient_head->Name = L"label_searchclient_head";
			this->label_searchclient_head->Size = System::Drawing::Size(1633, 88);
			this->label_searchclient_head->TabIndex = 9;
			this->label_searchclient_head->Text = L"Для выбора параметра необходимо поставить галочку в окошко, рядом с  нужным полем"
				L". \r\nДалее, необходимо выбрать критерии для поиска и нажать кнопку \"Поиск\".\r\n";
			// 
			// checkBox_searchservice_name
			// 
			this->checkBox_searchservice_name->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->checkBox_searchservice_name->AutoSize = true;
			this->checkBox_searchservice_name->BackColor = System::Drawing::SystemColors::Info;
			this->checkBox_searchservice_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->checkBox_searchservice_name->Location = System::Drawing::Point(48, 159);
			this->checkBox_searchservice_name->Margin = System::Windows::Forms::Padding(6);
			this->checkBox_searchservice_name->Name = L"checkBox_searchservice_name";
			this->checkBox_searchservice_name->Size = System::Drawing::Size(392, 55);
			this->checkBox_searchservice_name->TabIndex = 27;
			this->checkBox_searchservice_name->Text = L"Название услуги";
			this->checkBox_searchservice_name->UseVisualStyleBackColor = false;
			this->checkBox_searchservice_name->CheckStateChanged += gcnew System::EventHandler(this, &searchservice::checkBox_searchservice_name_CheckStateChanged);
			// 
			// checkBox_searchservice_price
			// 
			this->checkBox_searchservice_price->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->checkBox_searchservice_price->AutoSize = true;
			this->checkBox_searchservice_price->BackColor = System::Drawing::SystemColors::Info;
			this->checkBox_searchservice_price->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->checkBox_searchservice_price->Location = System::Drawing::Point(48, 479);
			this->checkBox_searchservice_price->Margin = System::Windows::Forms::Padding(6);
			this->checkBox_searchservice_price->Name = L"checkBox_searchservice_price";
			this->checkBox_searchservice_price->Size = System::Drawing::Size(300, 55);
			this->checkBox_searchservice_price->TabIndex = 28;
			this->checkBox_searchservice_price->Text = L"Цена услуги";
			this->checkBox_searchservice_price->UseVisualStyleBackColor = false;
			this->checkBox_searchservice_price->CheckStateChanged += gcnew System::EventHandler(this, &searchservice::checkBox_searchservice_price_CheckStateChanged);
			// 
			// checkBox_searchservice_type
			// 
			this->checkBox_searchservice_type->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->checkBox_searchservice_type->AutoSize = true;
			this->checkBox_searchservice_type->BackColor = System::Drawing::SystemColors::Info;
			this->checkBox_searchservice_type->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->checkBox_searchservice_type->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->checkBox_searchservice_type->Location = System::Drawing::Point(48, 324);
			this->checkBox_searchservice_type->Margin = System::Windows::Forms::Padding(6);
			this->checkBox_searchservice_type->Name = L"checkBox_searchservice_type";
			this->checkBox_searchservice_type->Size = System::Drawing::Size(352, 55);
			this->checkBox_searchservice_type->TabIndex = 32;
			this->checkBox_searchservice_type->Text = L"Вид животного";
			this->checkBox_searchservice_type->UseVisualStyleBackColor = false;
			this->checkBox_searchservice_type->CheckStateChanged += gcnew System::EventHandler(this, &searchservice::checkBox_searchservice_type_CheckStateChanged);
			// 
			// textBox_searchservice_type
			// 
			this->textBox_searchservice_type->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox_searchservice_type->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox_searchservice_type->Location = System::Drawing::Point(48, 401);
			this->textBox_searchservice_type->Name = L"textBox_searchservice_type";
			this->textBox_searchservice_type->Size = System::Drawing::Size(664, 49);
			this->textBox_searchservice_type->TabIndex = 33;
			this->textBox_searchservice_type->Visible = false;
			// 
			// button_searchservice_remove
			// 
			this->button_searchservice_remove->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_searchservice_remove->BackColor = System::Drawing::Color::SeaShell;
			this->button_searchservice_remove->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_searchservice_remove->Location = System::Drawing::Point(409, 815);
			this->button_searchservice_remove->Name = L"button_searchservice_remove";
			this->button_searchservice_remove->Size = System::Drawing::Size(340, 140);
			this->button_searchservice_remove->TabIndex = 8;
			this->button_searchservice_remove->Text = L"Снять выделение";
			this->button_searchservice_remove->UseVisualStyleBackColor = false;
			this->button_searchservice_remove->Click += gcnew System::EventHandler(this, &searchservice::button_searchservice_remove_Click);
			// 
			// button_searchservice_enter
			// 
			this->button_searchservice_enter->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_searchservice_enter->BackColor = System::Drawing::Color::SeaShell;
			this->button_searchservice_enter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_searchservice_enter->Location = System::Drawing::Point(26, 815);
			this->button_searchservice_enter->Name = L"button_searchservice_enter";
			this->button_searchservice_enter->Size = System::Drawing::Size(340, 140);
			this->button_searchservice_enter->TabIndex = 35;
			this->button_searchservice_enter->Text = L"Поиск";
			this->button_searchservice_enter->UseVisualStyleBackColor = false;
			this->button_searchservice_enter->Click += gcnew System::EventHandler(this, &searchservice::button_searchservice_enter_Click);
			// 
			// button_searchservice_exit
			// 
			this->button_searchservice_exit->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_searchservice_exit->BackColor = System::Drawing::Color::SeaShell;
			this->button_searchservice_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_searchservice_exit->Location = System::Drawing::Point(222, 978);
			this->button_searchservice_exit->Name = L"button_searchservice_exit";
			this->button_searchservice_exit->Size = System::Drawing::Size(340, 140);
			this->button_searchservice_exit->TabIndex = 36;
			this->button_searchservice_exit->Text = L"Вернуться назад";
			this->button_searchservice_exit->UseVisualStyleBackColor = false;
			this->button_searchservice_exit->Click += gcnew System::EventHandler(this, &searchservice::button_searchservice_exit_Click);
			// 
			// dataGridView_searchservice
			// 
			this->dataGridView_searchservice->AllowUserToAddRows = false;
			this->dataGridView_searchservice->AllowUserToDeleteRows = false;
			this->dataGridView_searchservice->AllowUserToOrderColumns = true;
			this->dataGridView_searchservice->Anchor = System::Windows::Forms::AnchorStyles::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView_searchservice->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView_searchservice->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_searchservice->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->service_Column1,
					this->service_Column2, this->service_Column3, this->service_Column4
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView_searchservice->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView_searchservice->Location = System::Drawing::Point(869, 139);
			this->dataGridView_searchservice->Name = L"dataGridView_searchservice";
			this->dataGridView_searchservice->ReadOnly = true;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView_searchservice->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView_searchservice->RowHeadersWidth = 60;
			this->dataGridView_searchservice->RowTemplate->Height = 33;
			this->dataGridView_searchservice->Size = System::Drawing::Size(938, 442);
			this->dataGridView_searchservice->TabIndex = 37;
			// 
			// service_Column1
			// 
			this->service_Column1->HeaderText = L"Номер услуги";
			this->service_Column1->MinimumWidth = 10;
			this->service_Column1->Name = L"service_Column1";
			this->service_Column1->ReadOnly = true;
			this->service_Column1->Width = 180;
			// 
			// service_Column2
			// 
			this->service_Column2->HeaderText = L"Название услуги";
			this->service_Column2->MinimumWidth = 10;
			this->service_Column2->Name = L"service_Column2";
			this->service_Column2->ReadOnly = true;
			this->service_Column2->Width = 250;
			// 
			// service_Column3
			// 
			this->service_Column3->HeaderText = L"Вид животного";
			this->service_Column3->MinimumWidth = 10;
			this->service_Column3->Name = L"service_Column3";
			this->service_Column3->ReadOnly = true;
			this->service_Column3->Width = 250;
			// 
			// service_Column4
			// 
			this->service_Column4->HeaderText = L"Цена услуги";
			this->service_Column4->MinimumWidth = 10;
			this->service_Column4->Name = L"service_Column4";
			this->service_Column4->ReadOnly = true;
			this->service_Column4->Width = 200;
			// 
			// checkedListBox_searchservice
			// 
			this->checkedListBox_searchservice->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->checkedListBox_searchservice->CheckOnClick = true;
			this->checkedListBox_searchservice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->checkedListBox_searchservice->FormattingEnabled = true;
			this->checkedListBox_searchservice->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Больше", L"Меньше", L"Полное совпадение" });
			this->checkedListBox_searchservice->Location = System::Drawing::Point(48, 637);
			this->checkedListBox_searchservice->Margin = System::Windows::Forms::Padding(6);
			this->checkedListBox_searchservice->Name = L"checkedListBox_searchservice";
			this->checkedListBox_searchservice->Size = System::Drawing::Size(438, 148);
			this->checkedListBox_searchservice->TabIndex = 38;
			this->checkedListBox_searchservice->Visible = false;
			this->checkedListBox_searchservice->ItemCheck += gcnew System::Windows::Forms::ItemCheckEventHandler(this, &searchservice::checkedListBox_searchservice_ItemCheck);
			// 
			// textBox_searchservice_price
			// 
			this->textBox_searchservice_price->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox_searchservice_price->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox_searchservice_price->Location = System::Drawing::Point(48, 558);
			this->textBox_searchservice_price->Name = L"textBox_searchservice_price";
			this->textBox_searchservice_price->Size = System::Drawing::Size(383, 56);
			this->textBox_searchservice_price->TabIndex = 39;
			this->textBox_searchservice_price->Visible = false;
			this->textBox_searchservice_price->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &searchservice::textBox_searchservice_price_KeyPress);
			// 
			// searchservice
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ClientSize = System::Drawing::Size(1973, 1121);
			this->Controls->Add(this->textBox_searchservice_price);
			this->Controls->Add(this->checkedListBox_searchservice);
			this->Controls->Add(this->dataGridView_searchservice);
			this->Controls->Add(this->button_searchservice_exit);
			this->Controls->Add(this->button_searchservice_enter);
			this->Controls->Add(this->textBox_searchservice_type);
			this->Controls->Add(this->checkBox_searchservice_type);
			this->Controls->Add(this->checkBox_searchservice_price);
			this->Controls->Add(this->checkBox_searchservice_name);
			this->Controls->Add(this->label_searchclient_head);
			this->Controls->Add(this->button_searchservice_remove);
			this->Controls->Add(this->textBox_searchservice_name);
			this->Name = L"searchservice";
			this->Text = L"Поиск услуг";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_searchservice))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//Обработка кнопки вернуться назад
	private: System::Void button_searchservice_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult dialog = MessageBox::Show("Все введенные данные, будут утеряны.\nВы уверены?", "Возвращение к базе данных", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (dialog == System::Windows::Forms::DialogResult::No) return;
		else {
			this->Close();
		}
	}

	/*Обработка кнопки поиск*/
	private: System::Void button_searchservice_enter_Click(System::Object^ sender, System::EventArgs^ e) {
		prov = false;
		int i = 0; //нумерация строк
		int spros = 0;				//переменая для хранения кол-ва полей запроса
		int spros_prov = 0; //переменная для хранения кол-ва совпавших полей

		/*Если не введено название*/
		if (checkBox_searchservice_name->Checked == true) {
			if (textBox_searchservice_name->Text == String::Empty) {
				MessageBox::Show("Если вы передумали искать по этому полю, снимите галочку", "Некорректный ввод названия!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			spros++;
		}
		/*Если не введен вид животного*/
		if (checkBox_searchservice_type->Checked == true) {
			if (textBox_searchservice_type->Text == String::Empty) {
				MessageBox::Show("Если вы передумали искать  по этому полю, снимите галочку", "Некорректный ввод вида животного!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			spros++;
		}
		/*Если не введена цена услуги*/
		if (checkBox_searchservice_price->Checked == true) {
			if (checkedListBox_searchservice->GetItemChecked(0) == false && checkedListBox_searchservice->GetItemChecked(1) == false && checkedListBox_searchservice->GetItemChecked(2) == false) numbers = 0; //Невыбрано
			if (checkedListBox_searchservice->GetItemChecked(0) == true && checkedListBox_searchservice->GetItemChecked(2) == false) numbers = 1; //Больше
			if (checkedListBox_searchservice->GetItemChecked(0) == true && checkedListBox_searchservice->GetItemChecked(2) == true) numbers = 2; //Больше, либо равно
			if (checkedListBox_searchservice->GetItemChecked(1) == true && checkedListBox_searchservice->GetItemChecked(2) == false) numbers = 3; //Меньше
			if (checkedListBox_searchservice->GetItemChecked(1) == true && checkedListBox_searchservice->GetItemChecked(2) == true) numbers = 4; //Меньше, либо равно
			if (checkedListBox_searchservice->GetItemChecked(0) == false && checkedListBox_searchservice->GetItemChecked(1) == false && checkedListBox_searchservice->GetItemChecked(2) == true) numbers = 5; //Точное совпадение
			if (textBox_searchservice_price->Text == String::Empty || numbers == 0) {
				MessageBox::Show("Если вы передумали искать  по этому полю, снимите галочку", "Некорректный ввод цены товара!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			spros++;
		}

		/*Открываем файл для чтения*/
		StreamReader^ file = gcnew StreamReader("services.txt");
		for (int i = 0; i < dataGridView_searchservice->Rows->Count; i++)
		{
			dataGridView_searchservice->Rows->Clear();
		}
		/*Пока не конец файла*/
		while (file->Peek() >= 0)
		{
			spros_prov = 0;
			/*Массив строк из файла*/
			array <String^>^ cells = (file->ReadLine())->Split('&', '\0');
			/*Проверка на совпадение названий*/
			if (checkBox_searchservice_name->Checked == true)
				if (textBox_searchservice_name->Text->CompareTo(cells[0]) == 0) spros_prov++;
			/*Проверка по виду животного*/
			if (checkBox_searchservice_type->Checked == true)
				if (textBox_searchservice_type->Text->CompareTo(cells[1]) == 0) spros_prov++;
			/*Проверка по цене услуги*/
			if (checkBox_searchservice_price->Checked)
			{
				switch (numbers) {
				case 1:
					if (Int32::Parse(cells[2]) > Int32::Parse(textBox_searchservice_price->Text)) spros_prov++;
					break;
				case 2:
					if (Int32::Parse(cells[2]) >= Int32::Parse(textBox_searchservice_price->Text)) spros_prov++;
					break;
				case 3:
					if ((Int32::Parse(cells[2])) < Int32::Parse(textBox_searchservice_price->Text)) spros_prov++;
					break;
				case 4:
					if ((Int32::Parse(cells[2])) <= Int32::Parse(textBox_searchservice_price->Text)) spros_prov++;
					break;
				case 5:
					if ((Int32::Parse(cells[2])) == Int32::Parse(textBox_searchservice_price->Text)) spros_prov++;
					break;
				}
			}

			if (spros == spros_prov && spros != 0)
			{
				dataGridView_searchservice->Rows->Add();
				dataGridView_searchservice->Rows[i]->Cells[0]->Value = i + 1;
				for (int j = 0; j < 3; j++)
				{
					dataGridView_searchservice->Rows[i]->Cells[j + 1]->Value = cells[j];
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
	private: System::Void button_searchservice_remove_Click(System::Object^ sender, System::EventArgs^ e) {
		/*Очищаем таблицу*/
		for (int i = 0; i < dataGridView_searchservice->Rows->Count; i++)
		{
			dataGridView_searchservice->Rows->Clear();
		}

		/*Снимаем выделение с checkedListBox*/
		for (int k = 0; k < 3; k++) {
			if (checkedListBox_searchservice->GetItemChecked(k) == true) checkedListBox_searchservice->SetItemChecked(k, false);
		}

		/*Снимаем выделение со всех checkBox*/
		checkBox_searchservice_name->Checked = false;
		checkBox_searchservice_type->Checked = false;
		checkBox_searchservice_price->Checked = false;
		/*Снимаем выделение со всех textBox*/
		textBox_searchservice_name->Clear();
		textBox_searchservice_type->Clear();
		textBox_searchservice_price->Clear();
	}

	//Выбор checkBox
	private: System::Void checkBox_searchservice_name_CheckStateChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox_searchservice_name->Visible = true;
		if (checkBox_searchservice_name->Checked != 1) textBox_searchservice_name->Visible = false;
	}

	private: System::Void checkBox_searchservice_type_CheckStateChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox_searchservice_type->Visible = true;
		if (checkBox_searchservice_type->Checked != 1) textBox_searchservice_type->Visible = false;
	}

	private: System::Void checkBox_searchservice_price_CheckStateChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox_searchservice_price->Visible = true;
		checkedListBox_searchservice->Visible = true;
		if (checkBox_searchservice_price->Checked != 1) {
			textBox_searchservice_price->Visible = false;
			checkedListBox_searchservice->Visible = false;
		}
	}

	private: System::Void textBox_searchservice_price_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		/*Если вводятся цифры от 0 до 9 или символ Backspase (код = 8) то далее*/
		if (((e->KeyChar >= '0') && (e->KeyChar <= '9')) || e->KeyChar == 8) return;
		e->Handled = true; // Остальные символы запрещены для ввода
	}

	private: System::Void checkedListBox_searchservice_ItemCheck(System::Object^ sender, System::Windows::Forms::ItemCheckEventArgs^ e) {
		int index = e->Index; //индекс элемента который нажали
		/*Снимаем выделение с флажка "Больше" если сделали активным "Меньше" и наоборот*/
		for (int i = 0; i < 2; i++)
			if (i != index && index != 2) checkedListBox_searchservice->SetItemChecked(i, false);
	}
};
}
