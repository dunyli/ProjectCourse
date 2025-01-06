#pragma once

namespace ProjectCourse {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Сводка для searchproduct
	/// </summary>
	public ref class searchproduct : public System::Windows::Forms::Form
	{
	public:
		searchproduct(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	public: void SetValues_comboBox_supplier(List<String^>^ values) {
		comboBox_supplier->Items->Clear(); // Очищаем предыдущие значения
		comboBox_supplier->Items->AddRange(values->ToArray()); // Добавляем новые значения
	}

	public: int numbers, counter;
	private: System::Windows::Forms::Label^ label_searchproduct_head;
	private: System::Windows::Forms::CheckBox^ checkBox_searchproduct_name;
	private: System::Windows::Forms::CheckBox^ checkBox_searchproduct_price;
	private: System::Windows::Forms::CheckBox^ checkBox_searchproduct_count;
	private: System::Windows::Forms::TextBox^ textBox_searchproduct_count;
	private: System::Windows::Forms::Button^ button_searchproduct_remove;
	private: System::Windows::Forms::Button^ button_searchproduct_enter;
	private: System::Windows::Forms::Button^ button_searchproduct_exit;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox_searchproduct_price;
	private: System::Windows::Forms::TextBox^ textBox_searchproduct_price;
	private: System::Windows::Forms::CheckBox^ checkBox_searchproduct_supplier;
	private: System::Windows::Forms::ComboBox^ comboBox_supplier;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox_searchproduct_count;
	private: System::Windows::Forms::DataGridView^ dataGridView_searchproduct;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ product_Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ product_Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ product_Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ product_Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ product_Column5;
	private: System::Windows::Forms::Label^ label_searchproduct;
	public:

	public:
	public: bool prov = false;
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~searchproduct()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox_searchproduct_name;
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
			this->textBox_searchproduct_name = (gcnew System::Windows::Forms::TextBox());
			this->label_searchproduct_head = (gcnew System::Windows::Forms::Label());
			this->checkBox_searchproduct_name = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_searchproduct_price = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_searchproduct_count = (gcnew System::Windows::Forms::CheckBox());
			this->textBox_searchproduct_count = (gcnew System::Windows::Forms::TextBox());
			this->button_searchproduct_remove = (gcnew System::Windows::Forms::Button());
			this->button_searchproduct_enter = (gcnew System::Windows::Forms::Button());
			this->button_searchproduct_exit = (gcnew System::Windows::Forms::Button());
			this->checkedListBox_searchproduct_price = (gcnew System::Windows::Forms::CheckedListBox());
			this->textBox_searchproduct_price = (gcnew System::Windows::Forms::TextBox());
			this->checkBox_searchproduct_supplier = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox_supplier = (gcnew System::Windows::Forms::ComboBox());
			this->checkedListBox_searchproduct_count = (gcnew System::Windows::Forms::CheckedListBox());
			this->dataGridView_searchproduct = (gcnew System::Windows::Forms::DataGridView());
			this->product_Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->product_Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->product_Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->product_Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->product_Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label_searchproduct = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_searchproduct))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox_searchproduct_name
			// 
			this->textBox_searchproduct_name->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox_searchproduct_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox_searchproduct_name->Location = System::Drawing::Point(62, 143);
			this->textBox_searchproduct_name->Margin = System::Windows::Forms::Padding(2);
			this->textBox_searchproduct_name->Name = L"textBox_searchproduct_name";
			this->textBox_searchproduct_name->Size = System::Drawing::Size(228, 28);
			this->textBox_searchproduct_name->TabIndex = 2;
			this->textBox_searchproduct_name->Visible = false;
			// 
			// label_searchproduct_head
			// 
			this->label_searchproduct_head->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label_searchproduct_head->AutoSize = true;
			this->label_searchproduct_head->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_searchproduct_head->Location = System::Drawing::Point(168, 33);
			this->label_searchproduct_head->Name = L"label_searchproduct_head";
			this->label_searchproduct_head->Size = System::Drawing::Size(828, 48);
			this->label_searchproduct_head->TabIndex = 9;
			this->label_searchproduct_head->Text = L"Для выбора параметра необходимо поставить галочку в окошко, рядом с  нужным полем"
				L". \r\nДалее, необходимо выбрать критерии для поиска и нажать кнопку \"Поиск\".\r\n";
			// 
			// checkBox_searchproduct_name
			// 
			this->checkBox_searchproduct_name->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->checkBox_searchproduct_name->AutoSize = true;
			this->checkBox_searchproduct_name->BackColor = System::Drawing::SystemColors::Info;
			this->checkBox_searchproduct_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->checkBox_searchproduct_name->Location = System::Drawing::Point(62, 103);
			this->checkBox_searchproduct_name->Name = L"checkBox_searchproduct_name";
			this->checkBox_searchproduct_name->Size = System::Drawing::Size(206, 30);
			this->checkBox_searchproduct_name->TabIndex = 27;
			this->checkBox_searchproduct_name->Text = L"Название товара";
			this->checkBox_searchproduct_name->UseVisualStyleBackColor = false;
			this->checkBox_searchproduct_name->CheckStateChanged += gcnew System::EventHandler(this, &searchproduct::checkBox_searchproduct_name_CheckStateChanged);
			// 
			// checkBox_searchproduct_price
			// 
			this->checkBox_searchproduct_price->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->checkBox_searchproduct_price->AutoSize = true;
			this->checkBox_searchproduct_price->BackColor = System::Drawing::SystemColors::Info;
			this->checkBox_searchproduct_price->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->checkBox_searchproduct_price->Location = System::Drawing::Point(60, 332);
			this->checkBox_searchproduct_price->Name = L"checkBox_searchproduct_price";
			this->checkBox_searchproduct_price->Size = System::Drawing::Size(159, 30);
			this->checkBox_searchproduct_price->TabIndex = 28;
			this->checkBox_searchproduct_price->Text = L"Цена товара";
			this->checkBox_searchproduct_price->UseVisualStyleBackColor = false;
			this->checkBox_searchproduct_price->CheckStateChanged += gcnew System::EventHandler(this, &searchproduct::checkBox_searchproduct_price_CheckStateChanged);
			// 
			// checkBox_searchproduct_count
			// 
			this->checkBox_searchproduct_count->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->checkBox_searchproduct_count->AutoSize = true;
			this->checkBox_searchproduct_count->BackColor = System::Drawing::SystemColors::Info;
			this->checkBox_searchproduct_count->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->checkBox_searchproduct_count->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->checkBox_searchproduct_count->Location = System::Drawing::Point(60, 176);
			this->checkBox_searchproduct_count->Name = L"checkBox_searchproduct_count";
			this->checkBox_searchproduct_count->Size = System::Drawing::Size(228, 30);
			this->checkBox_searchproduct_count->TabIndex = 32;
			this->checkBox_searchproduct_count->Text = L"Количество товара";
			this->checkBox_searchproduct_count->UseVisualStyleBackColor = false;
			this->checkBox_searchproduct_count->CheckStateChanged += gcnew System::EventHandler(this, &searchproduct::checkBox_searchproduct_count_CheckStateChanged);
			// 
			// textBox_searchproduct_count
			// 
			this->textBox_searchproduct_count->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox_searchproduct_count->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox_searchproduct_count->Location = System::Drawing::Point(60, 211);
			this->textBox_searchproduct_count->Margin = System::Windows::Forms::Padding(2);
			this->textBox_searchproduct_count->Name = L"textBox_searchproduct_count";
			this->textBox_searchproduct_count->Size = System::Drawing::Size(230, 28);
			this->textBox_searchproduct_count->TabIndex = 33;
			this->textBox_searchproduct_count->Visible = false;
			this->textBox_searchproduct_count->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &searchproduct::textBox_searchproduct_count_KeyPress);
			// 
			// button_searchproduct_remove
			// 
			this->button_searchproduct_remove->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_searchproduct_remove->BackColor = System::Drawing::Color::SeaShell;
			this->button_searchproduct_remove->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_searchproduct_remove->Location = System::Drawing::Point(652, 103);
			this->button_searchproduct_remove->Margin = System::Windows::Forms::Padding(2);
			this->button_searchproduct_remove->Name = L"button_searchproduct_remove";
			this->button_searchproduct_remove->Size = System::Drawing::Size(170, 73);
			this->button_searchproduct_remove->TabIndex = 8;
			this->button_searchproduct_remove->Text = L"Снять выделение";
			this->button_searchproduct_remove->UseVisualStyleBackColor = false;
			this->button_searchproduct_remove->Click += gcnew System::EventHandler(this, &searchproduct::button_searchproduct_remove_Click);
			// 
			// button_searchproduct_enter
			// 
			this->button_searchproduct_enter->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_searchproduct_enter->BackColor = System::Drawing::Color::SeaShell;
			this->button_searchproduct_enter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_searchproduct_enter->Location = System::Drawing::Point(468, 103);
			this->button_searchproduct_enter->Margin = System::Windows::Forms::Padding(2);
			this->button_searchproduct_enter->Name = L"button_searchproduct_enter";
			this->button_searchproduct_enter->Size = System::Drawing::Size(170, 73);
			this->button_searchproduct_enter->TabIndex = 35;
			this->button_searchproduct_enter->Text = L"Поиск";
			this->button_searchproduct_enter->UseVisualStyleBackColor = false;
			this->button_searchproduct_enter->Click += gcnew System::EventHandler(this, &searchproduct::button_searchproduct_enter_Click);
			// 
			// button_searchproduct_exit
			// 
			this->button_searchproduct_exit->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_searchproduct_exit->BackColor = System::Drawing::Color::SeaShell;
			this->button_searchproduct_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_searchproduct_exit->Location = System::Drawing::Point(826, 103);
			this->button_searchproduct_exit->Margin = System::Windows::Forms::Padding(2);
			this->button_searchproduct_exit->Name = L"button_searchproduct_exit";
			this->button_searchproduct_exit->Size = System::Drawing::Size(170, 73);
			this->button_searchproduct_exit->TabIndex = 36;
			this->button_searchproduct_exit->Text = L"Вернуться назад";
			this->button_searchproduct_exit->UseVisualStyleBackColor = false;
			this->button_searchproduct_exit->Click += gcnew System::EventHandler(this, &searchproduct::button_searchproduct_exit_Click);
			// 
			// checkedListBox_searchproduct_price
			// 
			this->checkedListBox_searchproduct_price->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->checkedListBox_searchproduct_price->CheckOnClick = true;
			this->checkedListBox_searchproduct_price->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->checkedListBox_searchproduct_price->FormattingEnabled = true;
			this->checkedListBox_searchproduct_price->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Больше", L"Меньше",
					L"Полное совпадение"
			});
			this->checkedListBox_searchproduct_price->Location = System::Drawing::Point(60, 400);
			this->checkedListBox_searchproduct_price->Name = L"checkedListBox_searchproduct_price";
			this->checkedListBox_searchproduct_price->Size = System::Drawing::Size(230, 76);
			this->checkedListBox_searchproduct_price->TabIndex = 38;
			this->checkedListBox_searchproduct_price->Visible = false;
			this->checkedListBox_searchproduct_price->ItemCheck += gcnew System::Windows::Forms::ItemCheckEventHandler(this, &searchproduct::checkedListBox_searchproduct_price_ItemCheck);
			// 
			// textBox_searchproduct_price
			// 
			this->textBox_searchproduct_price->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox_searchproduct_price->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox_searchproduct_price->Location = System::Drawing::Point(60, 367);
			this->textBox_searchproduct_price->Margin = System::Windows::Forms::Padding(2);
			this->textBox_searchproduct_price->Name = L"textBox_searchproduct_price";
			this->textBox_searchproduct_price->Size = System::Drawing::Size(230, 28);
			this->textBox_searchproduct_price->TabIndex = 39;
			this->textBox_searchproduct_price->Visible = false;
			this->textBox_searchproduct_price->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &searchproduct::textBox_searchproduct_price_KeyPress);
			// 
			// checkBox_searchproduct_supplier
			// 
			this->checkBox_searchproduct_supplier->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->checkBox_searchproduct_supplier->AutoSize = true;
			this->checkBox_searchproduct_supplier->BackColor = System::Drawing::SystemColors::Info;
			this->checkBox_searchproduct_supplier->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->checkBox_searchproduct_supplier->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->checkBox_searchproduct_supplier->Location = System::Drawing::Point(60, 482);
			this->checkBox_searchproduct_supplier->Name = L"checkBox_searchproduct_supplier";
			this->checkBox_searchproduct_supplier->Size = System::Drawing::Size(233, 30);
			this->checkBox_searchproduct_supplier->TabIndex = 40;
			this->checkBox_searchproduct_supplier->Text = L"Поставщик товаров";
			this->checkBox_searchproduct_supplier->UseVisualStyleBackColor = false;
			this->checkBox_searchproduct_supplier->CheckStateChanged += gcnew System::EventHandler(this, &searchproduct::checkBox_searchproduct_supplier_CheckStateChanged);
			// 
			// comboBox_supplier
			// 
			this->comboBox_supplier->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboBox_supplier->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_supplier->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBox_supplier->FormattingEnabled = true;
			this->comboBox_supplier->Location = System::Drawing::Point(60, 530);
			this->comboBox_supplier->Margin = System::Windows::Forms::Padding(2);
			this->comboBox_supplier->Name = L"comboBox_supplier";
			this->comboBox_supplier->Size = System::Drawing::Size(287, 32);
			this->comboBox_supplier->TabIndex = 41;
			this->comboBox_supplier->Visible = false;
			// 
			// checkedListBox_searchproduct_count
			// 
			this->checkedListBox_searchproduct_count->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->checkedListBox_searchproduct_count->CheckOnClick = true;
			this->checkedListBox_searchproduct_count->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->checkedListBox_searchproduct_count->FormattingEnabled = true;
			this->checkedListBox_searchproduct_count->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Больше", L"Меньше",
					L"Полное совпадение"
			});
			this->checkedListBox_searchproduct_count->Location = System::Drawing::Point(60, 248);
			this->checkedListBox_searchproduct_count->Name = L"checkedListBox_searchproduct_count";
			this->checkedListBox_searchproduct_count->Size = System::Drawing::Size(230, 76);
			this->checkedListBox_searchproduct_count->TabIndex = 42;
			this->checkedListBox_searchproduct_count->Visible = false;
			this->checkedListBox_searchproduct_count->ItemCheck += gcnew System::Windows::Forms::ItemCheckEventHandler(this, &searchproduct::checkedListBox_searchproduct_count_ItemCheck);
			// 
			// dataGridView_searchproduct
			// 
			this->dataGridView_searchproduct->AllowUserToAddRows = false;
			this->dataGridView_searchproduct->AllowUserToDeleteRows = false;
			this->dataGridView_searchproduct->AllowUserToOrderColumns = true;
			this->dataGridView_searchproduct->Anchor = System::Windows::Forms::AnchorStyles::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView_searchproduct->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView_searchproduct->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_searchproduct->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->product_Column1,
					this->product_Column2, this->product_Column3, this->product_Column4, this->product_Column5
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView_searchproduct->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView_searchproduct->Location = System::Drawing::Point(393, 228);
			this->dataGridView_searchproduct->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView_searchproduct->Name = L"dataGridView_searchproduct";
			this->dataGridView_searchproduct->ReadOnly = true;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView_searchproduct->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView_searchproduct->RowHeadersWidth = 60;
			this->dataGridView_searchproduct->RowTemplate->Height = 33;
			this->dataGridView_searchproduct->Size = System::Drawing::Size(676, 230);
			this->dataGridView_searchproduct->TabIndex = 43;
			// 
			// product_Column1
			// 
			this->product_Column1->HeaderText = L"Номер товара";
			this->product_Column1->MinimumWidth = 10;
			this->product_Column1->Name = L"product_Column1";
			this->product_Column1->ReadOnly = true;
			this->product_Column1->Width = 180;
			// 
			// product_Column2
			// 
			this->product_Column2->HeaderText = L"Название товара";
			this->product_Column2->MinimumWidth = 10;
			this->product_Column2->Name = L"product_Column2";
			this->product_Column2->ReadOnly = true;
			this->product_Column2->Width = 300;
			// 
			// product_Column3
			// 
			this->product_Column3->HeaderText = L"Номер поставщика";
			this->product_Column3->MinimumWidth = 10;
			this->product_Column3->Name = L"product_Column3";
			this->product_Column3->ReadOnly = true;
			this->product_Column3->Width = 300;
			// 
			// product_Column4
			// 
			this->product_Column4->HeaderText = L"Цена товара";
			this->product_Column4->MinimumWidth = 10;
			this->product_Column4->Name = L"product_Column4";
			this->product_Column4->ReadOnly = true;
			this->product_Column4->Width = 200;
			// 
			// product_Column5
			// 
			this->product_Column5->HeaderText = L"Количество товара";
			this->product_Column5->MinimumWidth = 10;
			this->product_Column5->Name = L"product_Column5";
			this->product_Column5->ReadOnly = true;
			this->product_Column5->Width = 250;
			// 
			// label_searchproduct
			// 
			this->label_searchproduct->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label_searchproduct->AutoSize = true;
			this->label_searchproduct->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_searchproduct->Location = System::Drawing::Point(443, 200);
			this->label_searchproduct->Name = L"label_searchproduct";
			this->label_searchproduct->Size = System::Drawing::Size(570, 26);
			this->label_searchproduct->TabIndex = 44;
			this->label_searchproduct->Text = L"Таблица товаров, соответствующих критериям поиска";
			// 
			// searchproduct
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ClientSize = System::Drawing::Size(1049, 705);
			this->Controls->Add(this->label_searchproduct);
			this->Controls->Add(this->dataGridView_searchproduct);
			this->Controls->Add(this->checkedListBox_searchproduct_count);
			this->Controls->Add(this->comboBox_supplier);
			this->Controls->Add(this->checkBox_searchproduct_supplier);
			this->Controls->Add(this->textBox_searchproduct_price);
			this->Controls->Add(this->checkedListBox_searchproduct_price);
			this->Controls->Add(this->button_searchproduct_exit);
			this->Controls->Add(this->button_searchproduct_enter);
			this->Controls->Add(this->textBox_searchproduct_count);
			this->Controls->Add(this->checkBox_searchproduct_count);
			this->Controls->Add(this->checkBox_searchproduct_price);
			this->Controls->Add(this->checkBox_searchproduct_name);
			this->Controls->Add(this->label_searchproduct_head);
			this->Controls->Add(this->button_searchproduct_remove);
			this->Controls->Add(this->textBox_searchproduct_name);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"searchproduct";
			this->Text = L"Поиск товаров";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_searchproduct))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Обработка кнопки вернуться назад
	private: System::Void button_searchproduct_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult dialog = MessageBox::Show("Все введенные данные, будут утеряны.\nВы уверены?", "Возвращение к базе данных", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (dialog == System::Windows::Forms::DialogResult::No) return;
		else {
			this->Close();
		}
	}

	/*Обработка кнопки поиск*/
	private: System::Void button_searchproduct_enter_Click(System::Object^ sender, System::EventArgs^ e) {
		prov = false;
		int i = 0; //нумерация строк
		int spros = 0;				//переменая для хранения кол-ва полей запроса
		int spros_prov = 0; //переменная для хранения кол-ва совпавших полей

		/*Если не введено название*/
		if (checkBox_searchproduct_name->Checked == true) {
			if (textBox_searchproduct_name->Text == String::Empty) {
				MessageBox::Show("Если вы передумали искать по этому полю, снимите галочку", "Некорректный ввод названия!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			spros++;
		}
		/*Если не введено количество*/
		if (checkBox_searchproduct_count->Checked == true) {
			if (checkedListBox_searchproduct_count->GetItemChecked(0) == false && checkedListBox_searchproduct_count->GetItemChecked(1) == false && checkedListBox_searchproduct_count->GetItemChecked(2) == false) counter = 0; //Невыбрано
			if (checkedListBox_searchproduct_count->GetItemChecked(0) == true && checkedListBox_searchproduct_count->GetItemChecked(2) == false) counter = 1; //Больше
			if (checkedListBox_searchproduct_count->GetItemChecked(0) == true && checkedListBox_searchproduct_count->GetItemChecked(2) == true) counter = 2; //Больше, либо равно
			if (checkedListBox_searchproduct_count->GetItemChecked(1) == true && checkedListBox_searchproduct_count->GetItemChecked(2) == false) counter = 3; //Меньше
			if (checkedListBox_searchproduct_count->GetItemChecked(1) == true && checkedListBox_searchproduct_count->GetItemChecked(2) == true) counter = 4; //Меньше, либо равно
			if (checkedListBox_searchproduct_count->GetItemChecked(0) == false && checkedListBox_searchproduct_count->GetItemChecked(1) == false && checkedListBox_searchproduct_count->GetItemChecked(2) == true) counter = 5; //Точное совпадение
			if (textBox_searchproduct_count->Text == String::Empty || counter == 0) {
				MessageBox::Show("Если вы передумали искать  по этому полю, снимите галочку", "Некорректный ввод количества товара!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			spros++;
		}
		/*Если не введена цена товара*/
		if (checkBox_searchproduct_price->Checked == true) {
			if (checkedListBox_searchproduct_price->GetItemChecked(0) == false && checkedListBox_searchproduct_price->GetItemChecked(1) == false && checkedListBox_searchproduct_price->GetItemChecked(2) == false) numbers = 0; //Невыбрано
			if (checkedListBox_searchproduct_price->GetItemChecked(0) == true && checkedListBox_searchproduct_price->GetItemChecked(2) == false) numbers = 1; //Больше
			if (checkedListBox_searchproduct_price->GetItemChecked(0) == true && checkedListBox_searchproduct_price->GetItemChecked(2) == true) numbers = 2; //Больше, либо равно
			if (checkedListBox_searchproduct_price->GetItemChecked(1) == true && checkedListBox_searchproduct_price->GetItemChecked(2) == false) numbers = 3; //Меньше
			if (checkedListBox_searchproduct_price->GetItemChecked(1) == true && checkedListBox_searchproduct_price->GetItemChecked(2) == true) numbers = 4; //Меньше, либо равно
			if (checkedListBox_searchproduct_price->GetItemChecked(0) == false && checkedListBox_searchproduct_price->GetItemChecked(1) == false && checkedListBox_searchproduct_price->GetItemChecked(2) == true) numbers = 5; //Точное совпадение
			if (textBox_searchproduct_price->Text == String::Empty || numbers == 0) {
				MessageBox::Show("Если вы передумали искать  по этому полю, снимите галочку", "Некорректный ввод цены товара!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			spros++;
		}
		/*Если не выбран поставщик*/
		if (checkBox_searchproduct_supplier->Checked == true) {
			if (comboBox_supplier->Text == String::Empty) {
				MessageBox::Show("Если вы передумали искать по этому полю, снимите галочку", "Некорректный ввод поставщика!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			spros++;
		}

		/*Открываем файл для чтения*/
		StreamReader^ file = gcnew StreamReader("products.txt");
		for (int i = 0; i < dataGridView_searchproduct->Rows->Count; i++)
		{
			dataGridView_searchproduct->Rows->Clear();
		}
		/*Пока не конец файла*/
		while (file->Peek() >= 0)
		{
			spros_prov = 0;
			/*Массив строк из файла*/
			array <String^>^ cells = (file->ReadLine())->Split('&', '\0');

			/*Проверка на совпадение названий*/
			if (checkBox_searchproduct_name->Checked == true)
				if (textBox_searchproduct_name->Text->CompareTo(cells[0]) == 0) spros_prov++;

			/*Проверка по колличеству*/
			if (checkBox_searchproduct_count->Checked)
			{
				switch (counter) {
				case 1:
					if (Int32::Parse(cells[3]) > Int32::Parse(textBox_searchproduct_count->Text)) spros_prov++;
					break;
				case 2:
					if (Int32::Parse(cells[3]) >= Int32::Parse(textBox_searchproduct_count->Text)) spros_prov++;
					break;
				case 3:
					if ((Int32::Parse(cells[3])) < Int32::Parse(textBox_searchproduct_count->Text)) spros_prov++;
					break;
				case 4:
					if ((Int32::Parse(cells[3])) <= Int32::Parse(textBox_searchproduct_count->Text)) spros_prov++;
					break;
				case 5:
					if ((Int32::Parse(cells[3])) == Int32::Parse(textBox_searchproduct_count->Text)) spros_prov++;
					break;
				}
			}
			/*Проверка по цене*/
			if (checkBox_searchproduct_price->Checked)
			{
				switch (numbers) {
				case 1:
					if (Int32::Parse(cells[2]) > Int32::Parse(textBox_searchproduct_price->Text)) spros_prov++;
					break;
				case 2:
					if (Int32::Parse(cells[2]) >= Int32::Parse(textBox_searchproduct_price->Text)) spros_prov++;
					break;
				case 3:
					if ((Int32::Parse(cells[2])) < Int32::Parse(textBox_searchproduct_price->Text)) spros_prov++;
					break;
				case 4:
					if ((Int32::Parse(cells[2])) <= Int32::Parse(textBox_searchproduct_price->Text)) spros_prov++;
					break;
				case 5:
					if ((Int32::Parse(cells[2])) == Int32::Parse(textBox_searchproduct_price->Text)) spros_prov++;
					break;
				}
			}

			/*Проверка по поставщику*/
			if (checkBox_searchproduct_supplier->Checked)
				if (comboBox_supplier->Text->CompareTo(cells[1]) == 0) spros_prov++;

			if (spros == spros_prov && spros != 0)
			{
				dataGridView_searchproduct->Rows->Add();
				dataGridView_searchproduct->Rows[i]->Cells[0]->Value = i + 1;
				for (int j = 0; j < 4; j++)
				{
					dataGridView_searchproduct->Rows[i]->Cells[j + 1]->Value = cells[j];
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
	private: System::Void button_searchproduct_remove_Click(System::Object^ sender, System::EventArgs^ e) {
		/*Очищаем таблицу*/
		for (int i = 0; i < dataGridView_searchproduct->Rows->Count; i++)
		{
			dataGridView_searchproduct->Rows->Clear();
		}

		/*Снимаем выделение с checkedListBox*/
		for (int k = 0; k < 3; k++) {
			if (checkedListBox_searchproduct_count->GetItemChecked(k) == true) checkedListBox_searchproduct_count->SetItemChecked(k, false);
			if (checkedListBox_searchproduct_price->GetItemChecked(k) == true) checkedListBox_searchproduct_price->SetItemChecked(k, false);
		}

		/*Снимаем выделение со всех checkBox*/
		checkBox_searchproduct_name->Checked = false;
		checkBox_searchproduct_count->Checked = false;
		checkBox_searchproduct_price->Checked = false;
		checkBox_searchproduct_supplier->Checked = false;

		/*Снимаем выделение со всех textBox*/
		textBox_searchproduct_name->Clear();
		textBox_searchproduct_count->Clear();
		textBox_searchproduct_price->Clear();

		comboBox_supplier->SelectedIndex = -1; // Снимаем выделение с выбранного элемента comboBox
	}

	private: System::Void textBox_searchproduct_price_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		/*Если вводятся цифры от 0 до 9 или символ Backspase (код = 8) то далее*/
		if (((e->KeyChar >= '0') && (e->KeyChar <= '9')) || e->KeyChar == 8) return;
		e->Handled = true; // Остальные символы запрещены для ввода
	}

	private: System::Void textBox_searchproduct_count_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		/*Если вводятся цифры от 0 до 9 или символ Backspase (код = 8) то далее*/
		if (((e->KeyChar >= '0') && (e->KeyChar <= '9')) || e->KeyChar == 8) return;
		e->Handled = true; // Остальные символы запрещены для ввода
	}

	private: System::Void checkedListBox_searchproduct_count_ItemCheck(System::Object^ sender, System::Windows::Forms::ItemCheckEventArgs^ e) {
		int index = e->Index; //индекс элемента который нажали
		/*Снимаем выделение с флажка "Больше" если сделали активным "Меньше" и наоборот*/
		for (int i = 0; i < 2; i++)
			if (i != index && index != 2) checkedListBox_searchproduct_count->SetItemChecked(i, false);
	}
	private: System::Void checkedListBox_searchproduct_price_ItemCheck(System::Object^ sender, System::Windows::Forms::ItemCheckEventArgs^ e) {
		int index = e->Index; //индекс элемента который нажали
		/*Снимаем выделение с флажка "Больше" если сделали активным "Меньше" и наоборот*/
		for (int i = 0; i < 2; i++)
			if (i != index && index != 2) checkedListBox_searchproduct_price->SetItemChecked(i, false);
	}

	//Выбор checkBox
	private: System::Void checkBox_searchproduct_name_CheckStateChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox_searchproduct_name->Visible = true;
		if (checkBox_searchproduct_name->Checked != 1) textBox_searchproduct_name->Visible = false;
	}

	private: System::Void checkBox_searchproduct_count_CheckStateChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox_searchproduct_count->Visible = true;
		checkedListBox_searchproduct_count->Visible = true;
		if (checkBox_searchproduct_count->Checked != 1) {
			textBox_searchproduct_count->Visible = false;
			checkedListBox_searchproduct_count->Visible = false;
		}
	}

	private: System::Void checkBox_searchproduct_price_CheckStateChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox_searchproduct_price->Visible = true;
		checkedListBox_searchproduct_price->Visible = true;
		if (checkBox_searchproduct_price->Checked != 1) {
			textBox_searchproduct_price->Visible = false;
			checkedListBox_searchproduct_price->Visible = false;
		}
	}

	private: System::Void checkBox_searchproduct_supplier_CheckStateChanged(System::Object^ sender, System::EventArgs^ e) {
		comboBox_supplier->Visible = true;
		if (checkBox_searchproduct_supplier->Checked != 1) comboBox_supplier->Visible = false;
	}
};
}
