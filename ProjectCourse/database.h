#pragma once
#include "info.h"

namespace ProjectCourse {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для database
	/// </summary>
	public ref class database : public System::Windows::Forms::Form
	{
	public:
		database(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~database()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip;
	protected:
	public:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_make_order;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_search_data;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_add_data;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_output_data;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_info;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_safe;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_delet_data;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_exit;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_add_client;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_add_supplier;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_search_client;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_search_suppplier;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_search_product;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_search_service;






	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_add_product;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_add_service;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_output_order;



	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_output_supplier;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_output_client;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_output_product;



	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_delete_product;

	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_delete_supplier;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_delete_client;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_delete_order;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_delete_service;
	private: System::Windows::Forms::DataGridView^ dataGridView_clients;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ client_Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ client_Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ client_Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ client_Column4;
	private: System::Windows::Forms::DataGridView^ dataGridView_supplier;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ supplier_Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ supplier_Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ supplier_Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ supplier_Column4;
	private: System::Windows::Forms::DataGridView^ dataGridView_product;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ product_Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ product_Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ product_Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ product_Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ product_Column5;
	private: System::Windows::Forms::DataGridView^ dataGridView_service;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ service_Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ service_Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ service_Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ service_Column4;
	private: System::Windows::Forms::Label^ label_database_clients;
	private: System::Windows::Forms::Label^ label_database_suppliers;
	private: System::Windows::Forms::Label^ label_database_products;
	private: System::Windows::Forms::Label^ label_database_services;


















	/*Логическая переменная для проверки изменения данных*/
	public: bool save = true;

#pragma region Windows Form Designer generated code
		  /// <summary>
		  /// Требуемый метод для поддержки конструктора — не изменяйте 
		  /// содержимое этого метода с помощью редактора кода.
		  /// </summary>
		  void InitializeComponent(void)
		  {
			  this->menuStrip = (gcnew System::Windows::Forms::MenuStrip());
			  this->ToolStripMenuItem_make_order = (gcnew System::Windows::Forms::ToolStripMenuItem());
			  this->ToolStripMenuItem_search_data = (gcnew System::Windows::Forms::ToolStripMenuItem());
			  this->ToolStripMenuItem_search_client = (gcnew System::Windows::Forms::ToolStripMenuItem());
			  this->ToolStripMenuItem_search_suppplier = (gcnew System::Windows::Forms::ToolStripMenuItem());
			  this->ToolStripMenuItem_search_product = (gcnew System::Windows::Forms::ToolStripMenuItem());
			  this->ToolStripMenuItem_search_service = (gcnew System::Windows::Forms::ToolStripMenuItem());
			  this->ToolStripMenuItem_add_data = (gcnew System::Windows::Forms::ToolStripMenuItem());
			  this->ToolStripMenuItem_add_client = (gcnew System::Windows::Forms::ToolStripMenuItem());
			  this->ToolStripMenuItem_add_supplier = (gcnew System::Windows::Forms::ToolStripMenuItem());
			  this->ToolStripMenuItem_add_product = (gcnew System::Windows::Forms::ToolStripMenuItem());
			  this->ToolStripMenuItem_add_service = (gcnew System::Windows::Forms::ToolStripMenuItem());
			  this->ToolStripMenuItem_output_data = (gcnew System::Windows::Forms::ToolStripMenuItem());
			  this->ToolStripMenuItem_output_order = (gcnew System::Windows::Forms::ToolStripMenuItem());
			  this->ToolStripMenuItem_output_supplier = (gcnew System::Windows::Forms::ToolStripMenuItem());
			  this->ToolStripMenuItem_output_client = (gcnew System::Windows::Forms::ToolStripMenuItem());
			  this->ToolStripMenuItem_output_product = (gcnew System::Windows::Forms::ToolStripMenuItem());
			  this->ToolStripMenuItem_safe = (gcnew System::Windows::Forms::ToolStripMenuItem());
			  this->ToolStripMenuItem_delet_data = (gcnew System::Windows::Forms::ToolStripMenuItem());
			  this->ToolStripMenuItem_delete_product = (gcnew System::Windows::Forms::ToolStripMenuItem());
			  this->ToolStripMenuItem_delete_supplier = (gcnew System::Windows::Forms::ToolStripMenuItem());
			  this->ToolStripMenuItem_delete_client = (gcnew System::Windows::Forms::ToolStripMenuItem());
			  this->ToolStripMenuItem_delete_order = (gcnew System::Windows::Forms::ToolStripMenuItem());
			  this->ToolStripMenuItem_delete_service = (gcnew System::Windows::Forms::ToolStripMenuItem());
			  this->ToolStripMenuItem_info = (gcnew System::Windows::Forms::ToolStripMenuItem());
			  this->ToolStripMenuItem_exit = (gcnew System::Windows::Forms::ToolStripMenuItem());
			  this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			  this->dataGridView_clients = (gcnew System::Windows::Forms::DataGridView());
			  this->dataGridView_supplier = (gcnew System::Windows::Forms::DataGridView());
			  this->supplier_Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			  this->supplier_Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			  this->supplier_Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			  this->supplier_Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			  this->client_Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			  this->client_Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			  this->client_Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			  this->client_Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			  this->dataGridView_product = (gcnew System::Windows::Forms::DataGridView());
			  this->dataGridView_service = (gcnew System::Windows::Forms::DataGridView());
			  this->product_Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			  this->product_Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			  this->product_Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			  this->product_Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			  this->product_Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			  this->service_Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			  this->service_Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			  this->service_Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			  this->service_Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			  this->label_database_clients = (gcnew System::Windows::Forms::Label());
			  this->label_database_suppliers = (gcnew System::Windows::Forms::Label());
			  this->label_database_products = (gcnew System::Windows::Forms::Label());
			  this->label_database_services = (gcnew System::Windows::Forms::Label());
			  this->menuStrip->SuspendLayout();
			  (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_clients))->BeginInit();
			  (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_supplier))->BeginInit();
			  (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_product))->BeginInit();
			  (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_service))->BeginInit();
			  this->SuspendLayout();
			  // 
			  // menuStrip
			  // 
			  this->menuStrip->BackColor = System::Drawing::SystemColors::Control;
			  this->menuStrip->Dock = System::Windows::Forms::DockStyle::None;
			  this->menuStrip->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(204)));
			  this->menuStrip->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			  this->menuStrip->ImageScalingSize = System::Drawing::Size(32, 32);
			  this->menuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {
				  this->ToolStripMenuItem_make_order,
					  this->ToolStripMenuItem_search_data, this->ToolStripMenuItem_add_data, this->ToolStripMenuItem_output_data, this->ToolStripMenuItem_safe,
					  this->ToolStripMenuItem_delet_data, this->ToolStripMenuItem_info, this->ToolStripMenuItem_exit, this->toolStripMenuItem1
			  });
			  this->menuStrip->Location = System::Drawing::Point(0, 0);
			  this->menuStrip->MinimumSize = System::Drawing::Size(2000, 0);
			  this->menuStrip->Name = L"menuStrip";
			  this->menuStrip->RightToLeft = System::Windows::Forms::RightToLeft::No;
			  this->menuStrip->Size = System::Drawing::Size(2090, 53);
			  this->menuStrip->TabIndex = 0;
			  this->menuStrip->Text = L"Меню";
			  // 
			  // ToolStripMenuItem_make_order
			  // 
			  this->ToolStripMenuItem_make_order->Name = L"ToolStripMenuItem_make_order";
			  this->ToolStripMenuItem_make_order->Size = System::Drawing::Size(282, 49);
			  this->ToolStripMenuItem_make_order->Text = L"Создание заказа";
			  // 
			  // ToolStripMenuItem_search_data
			  // 
			  this->ToolStripMenuItem_search_data->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				  this->ToolStripMenuItem_search_client,
					  this->ToolStripMenuItem_search_suppplier, this->ToolStripMenuItem_search_product, this->ToolStripMenuItem_search_service
			  });
			  this->ToolStripMenuItem_search_data->Name = L"ToolStripMenuItem_search_data";
			  this->ToolStripMenuItem_search_data->Size = System::Drawing::Size(333, 49);
			  this->ToolStripMenuItem_search_data->Text = L"Поиск информации";
			  // 
			  // ToolStripMenuItem_search_client
			  // 
			  this->ToolStripMenuItem_search_client->Name = L"ToolStripMenuItem_search_client";
			  this->ToolStripMenuItem_search_client->Size = System::Drawing::Size(435, 54);
			  this->ToolStripMenuItem_search_client->Text = L"Поиск клиента";
			  // 
			  // ToolStripMenuItem_search_suppplier
			  // 
			  this->ToolStripMenuItem_search_suppplier->Name = L"ToolStripMenuItem_search_suppplier";
			  this->ToolStripMenuItem_search_suppplier->Size = System::Drawing::Size(435, 54);
			  this->ToolStripMenuItem_search_suppplier->Text = L"Поиск поставщика";
			  // 
			  // ToolStripMenuItem_search_product
			  // 
			  this->ToolStripMenuItem_search_product->Name = L"ToolStripMenuItem_search_product";
			  this->ToolStripMenuItem_search_product->Size = System::Drawing::Size(435, 54);
			  this->ToolStripMenuItem_search_product->Text = L"Поиск товара";
			  // 
			  // ToolStripMenuItem_search_service
			  // 
			  this->ToolStripMenuItem_search_service->Name = L"ToolStripMenuItem_search_service";
			  this->ToolStripMenuItem_search_service->Size = System::Drawing::Size(435, 54);
			  this->ToolStripMenuItem_search_service->Text = L"Поиск услуги";
			  // 
			  // ToolStripMenuItem_add_data
			  // 
			  this->ToolStripMenuItem_add_data->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				  this->ToolStripMenuItem_add_client,
					  this->ToolStripMenuItem_add_supplier, this->ToolStripMenuItem_add_product, this->ToolStripMenuItem_add_service
			  });
			  this->ToolStripMenuItem_add_data->Name = L"ToolStripMenuItem_add_data";
			  this->ToolStripMenuItem_add_data->Size = System::Drawing::Size(338, 49);
			  this->ToolStripMenuItem_add_data->Text = L"Добавление данных";
			  // 
			  // ToolStripMenuItem_add_client
			  // 
			  this->ToolStripMenuItem_add_client->Name = L"ToolStripMenuItem_add_client";
			  this->ToolStripMenuItem_add_client->Size = System::Drawing::Size(524, 54);
			  this->ToolStripMenuItem_add_client->Text = L"Добавление клиента";
			  this->ToolStripMenuItem_add_client->Click += gcnew System::EventHandler(this, &database::добавлениеКлиентаToolStripMenuItem_Click);
			  // 
			  // ToolStripMenuItem_add_supplier
			  // 
			  this->ToolStripMenuItem_add_supplier->Name = L"ToolStripMenuItem_add_supplier";
			  this->ToolStripMenuItem_add_supplier->Size = System::Drawing::Size(524, 54);
			  this->ToolStripMenuItem_add_supplier->Text = L"Добавление поставщика";
			  // 
			  // ToolStripMenuItem_add_product
			  // 
			  this->ToolStripMenuItem_add_product->Name = L"ToolStripMenuItem_add_product";
			  this->ToolStripMenuItem_add_product->Size = System::Drawing::Size(524, 54);
			  this->ToolStripMenuItem_add_product->Text = L"Добавление товара";
			  // 
			  // ToolStripMenuItem_add_service
			  // 
			  this->ToolStripMenuItem_add_service->Name = L"ToolStripMenuItem_add_service";
			  this->ToolStripMenuItem_add_service->Size = System::Drawing::Size(524, 54);
			  this->ToolStripMenuItem_add_service->Text = L"Добавление услуги";
			  // 
			  // ToolStripMenuItem_output_data
			  // 
			  this->ToolStripMenuItem_output_data->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				  this->ToolStripMenuItem_output_order,
					  this->ToolStripMenuItem_output_supplier, this->ToolStripMenuItem_output_client, this->ToolStripMenuItem_output_product
			  });
			  this->ToolStripMenuItem_output_data->Name = L"ToolStripMenuItem_output_data";
			  this->ToolStripMenuItem_output_data->Size = System::Drawing::Size(252, 49);
			  this->ToolStripMenuItem_output_data->Text = L"Вывод данных";
			  // 
			  // ToolStripMenuItem_output_order
			  // 
			  this->ToolStripMenuItem_output_order->Name = L"ToolStripMenuItem_output_order";
			  this->ToolStripMenuItem_output_order->Size = System::Drawing::Size(596, 54);
			  this->ToolStripMenuItem_output_order->Text = L"Вывести список заказов";
			  // 
			  // ToolStripMenuItem_output_supplier
			  // 
			  this->ToolStripMenuItem_output_supplier->Name = L"ToolStripMenuItem_output_supplier";
			  this->ToolStripMenuItem_output_supplier->Size = System::Drawing::Size(596, 54);
			  this->ToolStripMenuItem_output_supplier->Text = L"Вывести список поставщиков";
			  // 
			  // ToolStripMenuItem_output_client
			  // 
			  this->ToolStripMenuItem_output_client->Name = L"ToolStripMenuItem_output_client";
			  this->ToolStripMenuItem_output_client->Size = System::Drawing::Size(596, 54);
			  this->ToolStripMenuItem_output_client->Text = L"Вывести список клиентов";
			  // 
			  // ToolStripMenuItem_output_product
			  // 
			  this->ToolStripMenuItem_output_product->Name = L"ToolStripMenuItem_output_product";
			  this->ToolStripMenuItem_output_product->Size = System::Drawing::Size(596, 54);
			  this->ToolStripMenuItem_output_product->Text = L"Вывести список товаров";
			  // 
			  // ToolStripMenuItem_safe
			  // 
			  this->ToolStripMenuItem_safe->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(204)));
			  this->ToolStripMenuItem_safe->Name = L"ToolStripMenuItem_safe";
			  this->ToolStripMenuItem_safe->Size = System::Drawing::Size(195, 49);
			  this->ToolStripMenuItem_safe->Text = L"Сохранить";
			  this->ToolStripMenuItem_safe->Click += gcnew System::EventHandler(this, &database::ToolStripMenuItem_safe_Click);
			  // 
			  // ToolStripMenuItem_delet_data
			  // 
			  this->ToolStripMenuItem_delet_data->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				  this->ToolStripMenuItem_delete_product,
					  this->ToolStripMenuItem_delete_supplier, this->ToolStripMenuItem_delete_client, this->ToolStripMenuItem_delete_order, this->ToolStripMenuItem_delete_service
			  });
			  this->ToolStripMenuItem_delet_data->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			  this->ToolStripMenuItem_delet_data->Name = L"ToolStripMenuItem_delet_data";
			  this->ToolStripMenuItem_delet_data->Size = System::Drawing::Size(276, 49);
			  this->ToolStripMenuItem_delet_data->Text = L"Удалить данные";
			  // 
			  // ToolStripMenuItem_delete_product
			  // 
			  this->ToolStripMenuItem_delete_product->Name = L"ToolStripMenuItem_delete_product";
			  this->ToolStripMenuItem_delete_product->Size = System::Drawing::Size(460, 54);
			  this->ToolStripMenuItem_delete_product->Text = L"Удалить товар";
			  // 
			  // ToolStripMenuItem_delete_supplier
			  // 
			  this->ToolStripMenuItem_delete_supplier->Name = L"ToolStripMenuItem_delete_supplier";
			  this->ToolStripMenuItem_delete_supplier->Size = System::Drawing::Size(460, 54);
			  this->ToolStripMenuItem_delete_supplier->Text = L"Удалить поставщика";
			  // 
			  // ToolStripMenuItem_delete_client
			  // 
			  this->ToolStripMenuItem_delete_client->Name = L"ToolStripMenuItem_delete_client";
			  this->ToolStripMenuItem_delete_client->Size = System::Drawing::Size(460, 54);
			  this->ToolStripMenuItem_delete_client->Text = L"Удалить клиента";
			  // 
			  // ToolStripMenuItem_delete_order
			  // 
			  this->ToolStripMenuItem_delete_order->Name = L"ToolStripMenuItem_delete_order";
			  this->ToolStripMenuItem_delete_order->Size = System::Drawing::Size(460, 54);
			  this->ToolStripMenuItem_delete_order->Text = L"Удалить заказ";
			  // 
			  // ToolStripMenuItem_delete_service
			  // 
			  this->ToolStripMenuItem_delete_service->Name = L"ToolStripMenuItem_delete_service";
			  this->ToolStripMenuItem_delete_service->Size = System::Drawing::Size(460, 54);
			  this->ToolStripMenuItem_delete_service->Text = L"Удалить услугу";
			  // 
			  // ToolStripMenuItem_info
			  // 
			  this->ToolStripMenuItem_info->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			  this->ToolStripMenuItem_info->Name = L"ToolStripMenuItem_info";
			  this->ToolStripMenuItem_info->Size = System::Drawing::Size(162, 49);
			  this->ToolStripMenuItem_info->Text = L"Справка";
			  this->ToolStripMenuItem_info->Click += gcnew System::EventHandler(this, &database::ToolStripMenuItem_info_Click);
			  // 
			  // ToolStripMenuItem_exit
			  // 
			  this->ToolStripMenuItem_exit->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			  this->ToolStripMenuItem_exit->Name = L"ToolStripMenuItem_exit";
			  this->ToolStripMenuItem_exit->Size = System::Drawing::Size(224, 49);
			  this->ToolStripMenuItem_exit->Text = L"Выход из БД";
			  this->ToolStripMenuItem_exit->Click += gcnew System::EventHandler(this, &database::ToolStripMenuItem_exit_Click);
			  // 
			  // toolStripMenuItem1
			  // 
			  this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			  this->toolStripMenuItem1->Size = System::Drawing::Size(20, 49);
			  // 
			  // dataGridView_clients
			  // 
			  this->dataGridView_clients->AllowUserToAddRows = false;
			  this->dataGridView_clients->AllowUserToDeleteRows = false;
			  this->dataGridView_clients->AllowUserToOrderColumns = true;
			  this->dataGridView_clients->Anchor = System::Windows::Forms::AnchorStyles::None;
			  this->dataGridView_clients->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			  this->dataGridView_clients->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				  this->client_Column1,
					  this->client_Column2, this->client_Column3, this->client_Column4
			  });
			  this->dataGridView_clients->Location = System::Drawing::Point(191, 160);
			  this->dataGridView_clients->Name = L"dataGridView_clients";
			  this->dataGridView_clients->ReadOnly = true;
			  this->dataGridView_clients->RowHeadersWidth = 60;
			  this->dataGridView_clients->RowTemplate->Height = 33;
			  this->dataGridView_clients->Size = System::Drawing::Size(1656, 442);
			  this->dataGridView_clients->TabIndex = 1;
			  this->dataGridView_clients->Visible = false;
			  // 
			  // dataGridView_supplier
			  // 
			  this->dataGridView_supplier->AllowUserToAddRows = false;
			  this->dataGridView_supplier->AllowUserToDeleteRows = false;
			  this->dataGridView_supplier->AllowUserToOrderColumns = true;
			  this->dataGridView_supplier->Anchor = System::Windows::Forms::AnchorStyles::None;
			  this->dataGridView_supplier->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			  this->dataGridView_supplier->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				  this->supplier_Column1,
					  this->supplier_Column2, this->supplier_Column3, this->supplier_Column4
			  });
			  this->dataGridView_supplier->Location = System::Drawing::Point(104, 160);
			  this->dataGridView_supplier->Name = L"dataGridView_supplier";
			  this->dataGridView_supplier->ReadOnly = true;
			  this->dataGridView_supplier->RowHeadersWidth = 60;
			  this->dataGridView_supplier->RowTemplate->Height = 33;
			  this->dataGridView_supplier->Size = System::Drawing::Size(1833, 442);
			  this->dataGridView_supplier->TabIndex = 2;
			  this->dataGridView_supplier->Visible = false;
			  // 
			  // supplier_Column1
			  // 
			  this->supplier_Column1->HeaderText = L"Номер поставщика";
			  this->supplier_Column1->MinimumWidth = 10;
			  this->supplier_Column1->Name = L"supplier_Column1";
			  this->supplier_Column1->ReadOnly = true;
			  this->supplier_Column1->Width = 420;
			  // 
			  // supplier_Column2
			  // 
			  this->supplier_Column2->HeaderText = L"Название поставщика";
			  this->supplier_Column2->MinimumWidth = 10;
			  this->supplier_Column2->Name = L"supplier_Column2";
			  this->supplier_Column2->ReadOnly = true;
			  this->supplier_Column2->Width = 500;
			  // 
			  // supplier_Column3
			  // 
			  this->supplier_Column3->HeaderText = L"Адрес поставщика";
			  this->supplier_Column3->MinimumWidth = 10;
			  this->supplier_Column3->Name = L"supplier_Column3";
			  this->supplier_Column3->ReadOnly = true;
			  this->supplier_Column3->Width = 400;
			  // 
			  // supplier_Column4
			  // 
			  this->supplier_Column4->HeaderText = L"Телефон поставщика";
			  this->supplier_Column4->MinimumWidth = 10;
			  this->supplier_Column4->Name = L"supplier_Column4";
			  this->supplier_Column4->ReadOnly = true;
			  this->supplier_Column4->Width = 450;
			  // 
			  // client_Column1
			  // 
			  this->client_Column1->HeaderText = L"Номер клиента";
			  this->client_Column1->MinimumWidth = 10;
			  this->client_Column1->Name = L"client_Column1";
			  this->client_Column1->ReadOnly = true;
			  this->client_Column1->Width = 400;
			  // 
			  // client_Column2
			  // 
			  this->client_Column2->HeaderText = L"ФИО Клиента";
			  this->client_Column2->MinimumWidth = 10;
			  this->client_Column2->Name = L"client_Column2";
			  this->client_Column2->ReadOnly = true;
			  this->client_Column2->Width = 400;
			  // 
			  // client_Column3
			  // 
			  this->client_Column3->HeaderText = L"Адрес клиента";
			  this->client_Column3->MinimumWidth = 10;
			  this->client_Column3->Name = L"client_Column3";
			  this->client_Column3->ReadOnly = true;
			  this->client_Column3->Width = 400;
			  // 
			  // client_Column4
			  // 
			  this->client_Column4->HeaderText = L"Телефон клиента";
			  this->client_Column4->MinimumWidth = 10;
			  this->client_Column4->Name = L"client_Column4";
			  this->client_Column4->ReadOnly = true;
			  this->client_Column4->Width = 400;
			  // 
			  // dataGridView_product
			  // 
			  this->dataGridView_product->AllowUserToAddRows = false;
			  this->dataGridView_product->AllowUserToDeleteRows = false;
			  this->dataGridView_product->AllowUserToOrderColumns = true;
			  this->dataGridView_product->Anchor = System::Windows::Forms::AnchorStyles::None;
			  this->dataGridView_product->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			  this->dataGridView_product->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				  this->product_Column1,
					  this->product_Column2, this->product_Column3, this->product_Column4, this->product_Column5
			  });
			  this->dataGridView_product->Location = System::Drawing::Point(54, 160);
			  this->dataGridView_product->Name = L"dataGridView_product";
			  this->dataGridView_product->ReadOnly = true;
			  this->dataGridView_product->RowHeadersWidth = 60;
			  this->dataGridView_product->RowTemplate->Height = 33;
			  this->dataGridView_product->Size = System::Drawing::Size(1931, 442);
			  this->dataGridView_product->TabIndex = 3;
			  this->dataGridView_product->Visible = false;
			  // 
			  // dataGridView_service
			  // 
			  this->dataGridView_service->AllowUserToAddRows = false;
			  this->dataGridView_service->AllowUserToDeleteRows = false;
			  this->dataGridView_service->AllowUserToOrderColumns = true;
			  this->dataGridView_service->Anchor = System::Windows::Forms::AnchorStyles::None;
			  this->dataGridView_service->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			  this->dataGridView_service->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				  this->service_Column1,
					  this->service_Column2, this->service_Column3, this->service_Column4
			  });
			  this->dataGridView_service->Location = System::Drawing::Point(154, 160);
			  this->dataGridView_service->Name = L"dataGridView_service";
			  this->dataGridView_service->ReadOnly = true;
			  this->dataGridView_service->RowHeadersWidth = 60;
			  this->dataGridView_service->RowTemplate->Height = 33;
			  this->dataGridView_service->Size = System::Drawing::Size(1661, 442);
			  this->dataGridView_service->TabIndex = 4;
			  this->dataGridView_service->Visible = false;
			  // 
			  // product_Column1
			  // 
			  this->product_Column1->HeaderText = L"Номер товара";
			  this->product_Column1->MinimumWidth = 10;
			  this->product_Column1->Name = L"product_Column1";
			  this->product_Column1->ReadOnly = true;
			  this->product_Column1->Width = 350;
			  // 
			  // product_Column2
			  // 
			  this->product_Column2->HeaderText = L"Название товара";
			  this->product_Column2->MinimumWidth = 10;
			  this->product_Column2->Name = L"product_Column2";
			  this->product_Column2->ReadOnly = true;
			  this->product_Column2->Width = 400;
			  // 
			  // product_Column3
			  // 
			  this->product_Column3->HeaderText = L"Номер поставщика";
			  this->product_Column3->MinimumWidth = 10;
			  this->product_Column3->Name = L"product_Column3";
			  this->product_Column3->ReadOnly = true;
			  this->product_Column3->Width = 450;
			  // 
			  // product_Column4
			  // 
			  this->product_Column4->HeaderText = L"Цена товара";
			  this->product_Column4->MinimumWidth = 10;
			  this->product_Column4->Name = L"product_Column4";
			  this->product_Column4->ReadOnly = true;
			  this->product_Column4->Width = 300;
			  // 
			  // product_Column5
			  // 
			  this->product_Column5->HeaderText = L"Количество товара";
			  this->product_Column5->MinimumWidth = 10;
			  this->product_Column5->Name = L"product_Column5";
			  this->product_Column5->ReadOnly = true;
			  this->product_Column5->Width = 450;
			  // 
			  // service_Column1
			  // 
			  this->service_Column1->HeaderText = L"Номер услуги";
			  this->service_Column1->MinimumWidth = 10;
			  this->service_Column1->Name = L"service_Column1";
			  this->service_Column1->ReadOnly = true;
			  this->service_Column1->Width = 350;
			  // 
			  // service_Column2
			  // 
			  this->service_Column2->HeaderText = L"Название услуги";
			  this->service_Column2->MinimumWidth = 10;
			  this->service_Column2->Name = L"service_Column2";
			  this->service_Column2->ReadOnly = true;
			  this->service_Column2->Width = 400;
			  // 
			  // service_Column3
			  // 
			  this->service_Column3->HeaderText = L"Вид животного";
			  this->service_Column3->MinimumWidth = 10;
			  this->service_Column3->Name = L"service_Column3";
			  this->service_Column3->ReadOnly = true;
			  this->service_Column3->Width = 450;
			  // 
			  // service_Column4
			  // 
			  this->service_Column4->HeaderText = L"Цена услуги";
			  this->service_Column4->MinimumWidth = 10;
			  this->service_Column4->Name = L"service_Column4";
			  this->service_Column4->ReadOnly = true;
			  this->service_Column4->Width = 400;
			  // 
			  // label_database_clients
			  // 
			  this->label_database_clients->Anchor = System::Windows::Forms::AnchorStyles::None;
			  this->label_database_clients->AutoSize = true;
			  this->label_database_clients->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.875F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			  this->label_database_clients->Location = System::Drawing::Point(785, 84);
			  this->label_database_clients->Name = L"label_database_clients";
			  this->label_database_clients->Size = System::Drawing::Size(447, 61);
			  this->label_database_clients->TabIndex = 5;
			  this->label_database_clients->Text = L"Список клиентов";
			  this->label_database_clients->Visible = false;
			  // 
			  // label_database_suppliers
			  // 
			  this->label_database_suppliers->Anchor = System::Windows::Forms::AnchorStyles::None;
			  this->label_database_suppliers->AutoSize = true;
			  this->label_database_suppliers->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.875F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			  this->label_database_suppliers->Location = System::Drawing::Point(750, 84);
			  this->label_database_suppliers->Name = L"label_database_suppliers";
			  this->label_database_suppliers->Size = System::Drawing::Size(544, 61);
			  this->label_database_suppliers->TabIndex = 6;
			  this->label_database_suppliers->Text = L"Список поставщиков";
			  this->label_database_suppliers->Visible = false;
			  // 
			  // label_database_products
			  // 
			  this->label_database_products->Anchor = System::Windows::Forms::AnchorStyles::None;
			  this->label_database_products->AutoSize = true;
			  this->label_database_products->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.875F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			  this->label_database_products->Location = System::Drawing::Point(825, 84);
			  this->label_database_products->Name = L"label_database_products";
			  this->label_database_products->Size = System::Drawing::Size(417, 61);
			  this->label_database_products->TabIndex = 7;
			  this->label_database_products->Text = L"Список товаров";
			  this->label_database_products->Visible = false;
			  // 
			  // label_database_services
			  // 
			  this->label_database_services->Anchor = System::Windows::Forms::AnchorStyles::None;
			  this->label_database_services->AutoSize = true;
			  this->label_database_services->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.875F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			  this->label_database_services->Location = System::Drawing::Point(863, 84);
			  this->label_database_services->Name = L"label_database_services";
			  this->label_database_services->Size = System::Drawing::Size(352, 61);
			  this->label_database_services->TabIndex = 8;
			  this->label_database_services->Text = L"Список услуг";
			  this->label_database_services->Visible = false;
			  // 
			  // database
			  // 
			  this->AutoScaleDimensions = System::Drawing::SizeF(22, 42);
			  this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			  this->BackColor = System::Drawing::SystemColors::Info;
			  this->ClientSize = System::Drawing::Size(2174, 763);
			  this->Controls->Add(this->label_database_services);
			  this->Controls->Add(this->label_database_products);
			  this->Controls->Add(this->label_database_suppliers);
			  this->Controls->Add(this->label_database_clients);
			  this->Controls->Add(this->dataGridView_service);
			  this->Controls->Add(this->dataGridView_product);
			  this->Controls->Add(this->dataGridView_supplier);
			  this->Controls->Add(this->dataGridView_clients);
			  this->Controls->Add(this->menuStrip);
			  this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(204)));
			  this->MainMenuStrip = this->menuStrip;
			  this->Name = L"database";
			  this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			  this->Text = L"База данных";
			  this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &database::database_FormClosing);
			  this->Load += gcnew System::EventHandler(this, &database::database_Load);
			  this->menuStrip->ResumeLayout(false);
			  this->menuStrip->PerformLayout();
			  (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_clients))->EndInit();
			  (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_supplier))->EndInit();
			  (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_product))->EndInit();
			  (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_service))->EndInit();
			  this->ResumeLayout(false);
			  this->PerformLayout();

		  }

#pragma endregion
private: System::Void database_Load(System::Object^ sender, System::EventArgs^ e) {
	/*Проверка существования файлов с данными*/

	//Проверка существования файла с клиентами
	if (IO::File::Exists("login.txt")) {}
	else {
		/*Создаем новый файл, если файл не создан*/
		StreamWriter^ new_file = gcnew StreamWriter("login.txt");
		delete new_file;
	}
	//Проверка существования файла с поставщиками
	if (IO::File::Exists("supplier.txt")) {}
	else {
		/*Создаем новый файл, если файл не создан*/
		StreamWriter^ new_file = gcnew StreamWriter("supplier.txt");
		delete new_file;
	}
	//Проверка существования файла с заказами
	if (IO::File::Exists("orderhistory.txt")) {}
	else {
		/*Создаем новый файл, если файл не создан*/
		StreamWriter^ new_file = gcnew StreamWriter("orderhistory.txt");
		delete new_file;
	}
	//Проверка существования файла с услугами
	if (IO::File::Exists("services.txt")) {}
	else {
		/*Создаем новый файл, если файл не создан*/
		StreamWriter^ new_file = gcnew StreamWriter("services.txt");
		delete new_file;
	}
}

/*Обработка закрытия формы на Х*/
private: System::Void database_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	/*Если какие - то данные были изменены */
	if (save == false)
		switch (MessageBox::Show("При выходе из базы данных все несохраненные данные будут потеряны.\nПрименить изменения?", "Внимание", MessageBoxButtons::YesNo, MessageBoxIcon::Warning)) {
		case System::Windows::Forms::DialogResult::Yes: ToolStripMenuItem_safe_Click(sender, e);  break;
		case System::Windows::Forms::DialogResult::No: break;
		}
	Owner->Show();
	this->Hide();
}

/*Обработка кнопки Сохранить*/
private: System::Void ToolStripMenuItem_safe_Click(System::Object^ sender, System::EventArgs^ e) {

}

/*Обработка нажатия на кнопку СПРАВКА*/
private: System::Void ToolStripMenuItem_info_Click(System::Object^ sender, System::EventArgs^ e) {
	info^ inf = gcnew info;
	inf->Show();
}

//Обработка нажатия на кнопку Выход из БД
private: System::Void ToolStripMenuItem_exit_Click(System::Object^ sender, System::EventArgs^ e) {
	/*Если какие - то данные были изменены */
	if (save == false)
		switch (MessageBox::Show("При выходе из базы данных все несохраненные данные будут потеряны.\nПрименить изменения?", "Внимание", MessageBoxButtons::YesNo, MessageBoxIcon::Warning)) {
		case System::Windows::Forms::DialogResult::Yes: ToolStripMenuItem_safe_Click(sender, e);  break;
		case System::Windows::Forms::DialogResult::No: break;
		}
	Owner->Show();
	this->Hide();
}
private: System::Void добавлениеКлиентаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}