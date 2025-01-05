#pragma once
#include "info.h"
#include "addclient.h"
#include "addsupplier.h"
#include "addproduct.h"
#include "addservice.h"
#include "addorder.h"
#include "editclient.h"
#include "editsupplier.h"
#include "editproduct.h"
#include "editservice.h"
#include "editorder.h"
#include "searchclient.h"
#include "searchsupplier.h"

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
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_edit_data;

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
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_edit_product;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_edit_supplier;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_edit_client;

	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_edit_order;

	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_edit_service;
	private: System::Windows::Forms::DataGridView^ dataGridView_clients;
	private: System::Windows::Forms::DataGridView^ dataGridView_supplier;
	private: System::Windows::Forms::DataGridView^ dataGridView_product;
	private: System::Windows::Forms::DataGridView^ dataGridView_service;

private: System::Windows::Forms::Label^ label_database_clients;
private: System::Windows::Forms::Label^ label_database_suppliers;
private: System::Windows::Forms::Label^ label_database_products;
private: System::Windows::Forms::Label^ label_database_services;
private: System::Windows::Forms::Label^ label_database_order;

private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_output_service;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ client_Column1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ client_Column2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ client_Column3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ client_Column4;

private: System::Windows::Forms::DataGridViewTextBoxColumn^ product_Column1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ product_Column2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ product_Column3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ product_Column4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ product_Column5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ service_Column1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ service_Column2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ service_Column3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ service_Column4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ supplier_Column1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ supplier_Column2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ supplier_Column3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ supplier_Column4;
private: System::Windows::Forms::DataGridView^ dataGridView_order;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ order_Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ order_Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ order_Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ order_Column4;




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
			  this->ToolStripMenuItem_output_service = (gcnew System::Windows::Forms::ToolStripMenuItem());
			  this->ToolStripMenuItem_safe = (gcnew System::Windows::Forms::ToolStripMenuItem());
			  this->ToolStripMenuItem_edit_data = (gcnew System::Windows::Forms::ToolStripMenuItem());
			  this->ToolStripMenuItem_edit_product = (gcnew System::Windows::Forms::ToolStripMenuItem());
			  this->ToolStripMenuItem_edit_supplier = (gcnew System::Windows::Forms::ToolStripMenuItem());
			  this->ToolStripMenuItem_edit_client = (gcnew System::Windows::Forms::ToolStripMenuItem());
			  this->ToolStripMenuItem_edit_order = (gcnew System::Windows::Forms::ToolStripMenuItem());
			  this->ToolStripMenuItem_edit_service = (gcnew System::Windows::Forms::ToolStripMenuItem());
			  this->ToolStripMenuItem_info = (gcnew System::Windows::Forms::ToolStripMenuItem());
			  this->ToolStripMenuItem_exit = (gcnew System::Windows::Forms::ToolStripMenuItem());
			  this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			  this->dataGridView_clients = (gcnew System::Windows::Forms::DataGridView());
			  this->client_Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			  this->client_Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			  this->client_Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			  this->client_Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			  this->dataGridView_supplier = (gcnew System::Windows::Forms::DataGridView());
			  this->supplier_Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			  this->supplier_Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			  this->supplier_Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			  this->supplier_Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			  this->dataGridView_product = (gcnew System::Windows::Forms::DataGridView());
			  this->product_Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			  this->product_Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			  this->product_Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			  this->product_Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			  this->product_Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			  this->dataGridView_service = (gcnew System::Windows::Forms::DataGridView());
			  this->service_Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			  this->service_Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			  this->service_Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			  this->service_Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			  this->label_database_clients = (gcnew System::Windows::Forms::Label());
			  this->label_database_suppliers = (gcnew System::Windows::Forms::Label());
			  this->label_database_products = (gcnew System::Windows::Forms::Label());
			  this->label_database_services = (gcnew System::Windows::Forms::Label());
			  this->label_database_order = (gcnew System::Windows::Forms::Label());
			  this->dataGridView_order = (gcnew System::Windows::Forms::DataGridView());
			  this->order_Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			  this->order_Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			  this->order_Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			  this->order_Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			  this->menuStrip->SuspendLayout();
			  (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_clients))->BeginInit();
			  (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_supplier))->BeginInit();
			  (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_product))->BeginInit();
			  (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_service))->BeginInit();
			  (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_order))->BeginInit();
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
					  this->ToolStripMenuItem_edit_data, this->ToolStripMenuItem_info, this->ToolStripMenuItem_exit, this->toolStripMenuItem1
			  });
			  this->menuStrip->Location = System::Drawing::Point(0, 0);
			  this->menuStrip->MinimumSize = System::Drawing::Size(2000, 0);
			  this->menuStrip->Name = L"menuStrip";
			  this->menuStrip->RightToLeft = System::Windows::Forms::RightToLeft::No;
			  this->menuStrip->Size = System::Drawing::Size(2430, 53);
			  this->menuStrip->TabIndex = 0;
			  this->menuStrip->Text = L"Меню";
			  // 
			  // ToolStripMenuItem_make_order
			  // 
			  this->ToolStripMenuItem_make_order->Name = L"ToolStripMenuItem_make_order";
			  this->ToolStripMenuItem_make_order->Size = System::Drawing::Size(282, 49);
			  this->ToolStripMenuItem_make_order->Text = L"Создание заказа";
			  this->ToolStripMenuItem_make_order->Click += gcnew System::EventHandler(this, &database::ToolStripMenuItem_make_order_Click);
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
			  this->ToolStripMenuItem_search_client->Click += gcnew System::EventHandler(this, &database::ToolStripMenuItem_search_client_Click);
			  // 
			  // ToolStripMenuItem_search_suppplier
			  // 
			  this->ToolStripMenuItem_search_suppplier->Name = L"ToolStripMenuItem_search_suppplier";
			  this->ToolStripMenuItem_search_suppplier->Size = System::Drawing::Size(435, 54);
			  this->ToolStripMenuItem_search_suppplier->Text = L"Поиск поставщика";
			  this->ToolStripMenuItem_search_suppplier->Click += gcnew System::EventHandler(this, &database::ToolStripMenuItem_search_suppplier_Click);
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
			  this->ToolStripMenuItem_add_client->Click += gcnew System::EventHandler(this, &database::ToolStripMenuItem_add_client_Click);
			  // 
			  // ToolStripMenuItem_add_supplier
			  // 
			  this->ToolStripMenuItem_add_supplier->Name = L"ToolStripMenuItem_add_supplier";
			  this->ToolStripMenuItem_add_supplier->Size = System::Drawing::Size(524, 54);
			  this->ToolStripMenuItem_add_supplier->Text = L"Добавление поставщика";
			  this->ToolStripMenuItem_add_supplier->Click += gcnew System::EventHandler(this, &database::ToolStripMenuItem_add_supplier_Click);
			  // 
			  // ToolStripMenuItem_add_product
			  // 
			  this->ToolStripMenuItem_add_product->Name = L"ToolStripMenuItem_add_product";
			  this->ToolStripMenuItem_add_product->Size = System::Drawing::Size(524, 54);
			  this->ToolStripMenuItem_add_product->Text = L"Добавление товара";
			  this->ToolStripMenuItem_add_product->Click += gcnew System::EventHandler(this, &database::ToolStripMenuItem_add_product_Click);
			  // 
			  // ToolStripMenuItem_add_service
			  // 
			  this->ToolStripMenuItem_add_service->Name = L"ToolStripMenuItem_add_service";
			  this->ToolStripMenuItem_add_service->Size = System::Drawing::Size(524, 54);
			  this->ToolStripMenuItem_add_service->Text = L"Добавление услуги";
			  this->ToolStripMenuItem_add_service->Click += gcnew System::EventHandler(this, &database::ToolStripMenuItem_add_service_Click);
			  // 
			  // ToolStripMenuItem_output_data
			  // 
			  this->ToolStripMenuItem_output_data->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				  this->ToolStripMenuItem_output_order,
					  this->ToolStripMenuItem_output_supplier, this->ToolStripMenuItem_output_client, this->ToolStripMenuItem_output_product, this->ToolStripMenuItem_output_service
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
			  this->ToolStripMenuItem_output_order->Click += gcnew System::EventHandler(this, &database::ToolStripMenuItem_output_order_Click);
			  // 
			  // ToolStripMenuItem_output_supplier
			  // 
			  this->ToolStripMenuItem_output_supplier->Name = L"ToolStripMenuItem_output_supplier";
			  this->ToolStripMenuItem_output_supplier->Size = System::Drawing::Size(596, 54);
			  this->ToolStripMenuItem_output_supplier->Text = L"Вывести список поставщиков";
			  this->ToolStripMenuItem_output_supplier->Click += gcnew System::EventHandler(this, &database::ToolStripMenuItem_output_supplier_Click);
			  // 
			  // ToolStripMenuItem_output_client
			  // 
			  this->ToolStripMenuItem_output_client->Name = L"ToolStripMenuItem_output_client";
			  this->ToolStripMenuItem_output_client->Size = System::Drawing::Size(596, 54);
			  this->ToolStripMenuItem_output_client->Text = L"Вывести список клиентов";
			  this->ToolStripMenuItem_output_client->Click += gcnew System::EventHandler(this, &database::ToolStripMenuItem_output_client_Click);
			  // 
			  // ToolStripMenuItem_output_product
			  // 
			  this->ToolStripMenuItem_output_product->Name = L"ToolStripMenuItem_output_product";
			  this->ToolStripMenuItem_output_product->Size = System::Drawing::Size(596, 54);
			  this->ToolStripMenuItem_output_product->Text = L"Вывести список товаров";
			  this->ToolStripMenuItem_output_product->Click += gcnew System::EventHandler(this, &database::ToolStripMenuItem_output_product_Click);
			  // 
			  // ToolStripMenuItem_output_service
			  // 
			  this->ToolStripMenuItem_output_service->Name = L"ToolStripMenuItem_output_service";
			  this->ToolStripMenuItem_output_service->Size = System::Drawing::Size(596, 54);
			  this->ToolStripMenuItem_output_service->Text = L"Вывести список услуг";
			  this->ToolStripMenuItem_output_service->Click += gcnew System::EventHandler(this, &database::ToolStripMenuItem_output_service_Click);
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
			  // ToolStripMenuItem_edit_data
			  // 
			  this->ToolStripMenuItem_edit_data->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				  this->ToolStripMenuItem_edit_product,
					  this->ToolStripMenuItem_edit_supplier, this->ToolStripMenuItem_edit_client, this->ToolStripMenuItem_edit_order, this->ToolStripMenuItem_edit_service
			  });
			  this->ToolStripMenuItem_edit_data->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			  this->ToolStripMenuItem_edit_data->Name = L"ToolStripMenuItem_edit_data";
			  this->ToolStripMenuItem_edit_data->Size = System::Drawing::Size(376, 49);
			  this->ToolStripMenuItem_edit_data->Text = L"Редактировать данные";
			  // 
			  // ToolStripMenuItem_edit_product
			  // 
			  this->ToolStripMenuItem_edit_product->Name = L"ToolStripMenuItem_edit_product";
			  this->ToolStripMenuItem_edit_product->Size = System::Drawing::Size(580, 54);
			  this->ToolStripMenuItem_edit_product->Text = L"Редактировать товары";
			  this->ToolStripMenuItem_edit_product->Click += gcnew System::EventHandler(this, &database::ToolStripMenuItem_edit_product_Click);
			  // 
			  // ToolStripMenuItem_edit_supplier
			  // 
			  this->ToolStripMenuItem_edit_supplier->Name = L"ToolStripMenuItem_edit_supplier";
			  this->ToolStripMenuItem_edit_supplier->Size = System::Drawing::Size(580, 54);
			  this->ToolStripMenuItem_edit_supplier->Text = L"Редактировать поставщиков";
			  this->ToolStripMenuItem_edit_supplier->Click += gcnew System::EventHandler(this, &database::ToolStripMenuItem_edit_supplier_Click);
			  // 
			  // ToolStripMenuItem_edit_client
			  // 
			  this->ToolStripMenuItem_edit_client->Name = L"ToolStripMenuItem_edit_client";
			  this->ToolStripMenuItem_edit_client->Size = System::Drawing::Size(580, 54);
			  this->ToolStripMenuItem_edit_client->Text = L"Редактировать клиентов";
			  this->ToolStripMenuItem_edit_client->Click += gcnew System::EventHandler(this, &database::ToolStripMenuItem_edit_client_Click);
			  // 
			  // ToolStripMenuItem_edit_order
			  // 
			  this->ToolStripMenuItem_edit_order->Name = L"ToolStripMenuItem_edit_order";
			  this->ToolStripMenuItem_edit_order->Size = System::Drawing::Size(580, 54);
			  this->ToolStripMenuItem_edit_order->Text = L"Редактировать заказы";
			  this->ToolStripMenuItem_edit_order->Click += gcnew System::EventHandler(this, &database::ToolStripMenuItem_edit_order_Click);
			  // 
			  // ToolStripMenuItem_edit_service
			  // 
			  this->ToolStripMenuItem_edit_service->Name = L"ToolStripMenuItem_edit_service";
			  this->ToolStripMenuItem_edit_service->Size = System::Drawing::Size(580, 54);
			  this->ToolStripMenuItem_edit_service->Text = L"Редактировать услуги";
			  this->ToolStripMenuItem_edit_service->Click += gcnew System::EventHandler(this, &database::ToolStripMenuItem_edit_service_Click);
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
			  this->dataGridView_clients->Location = System::Drawing::Point(353, 170);
			  this->dataGridView_clients->Name = L"dataGridView_clients";
			  this->dataGridView_clients->ReadOnly = true;
			  this->dataGridView_clients->RowHeadersWidth = 60;
			  this->dataGridView_clients->RowTemplate->Height = 33;
			  this->dataGridView_clients->Size = System::Drawing::Size(1112, 442);
			  this->dataGridView_clients->TabIndex = 1;
			  this->dataGridView_clients->Visible = false;
			  // 
			  // client_Column1
			  // 
			  this->client_Column1->HeaderText = L"Номер клиента";
			  this->client_Column1->MinimumWidth = 10;
			  this->client_Column1->Name = L"client_Column1";
			  this->client_Column1->ReadOnly = true;
			  this->client_Column1->Width = 180;
			  // 
			  // client_Column2
			  // 
			  this->client_Column2->HeaderText = L"ФИО Клиента";
			  this->client_Column2->MinimumWidth = 10;
			  this->client_Column2->Name = L"client_Column2";
			  this->client_Column2->ReadOnly = true;
			  this->client_Column2->Width = 300;
			  // 
			  // client_Column3
			  // 
			  this->client_Column3->HeaderText = L"Адрес клиента";
			  this->client_Column3->MinimumWidth = 10;
			  this->client_Column3->Name = L"client_Column3";
			  this->client_Column3->ReadOnly = true;
			  this->client_Column3->Width = 350;
			  // 
			  // client_Column4
			  // 
			  this->client_Column4->HeaderText = L"Телефон клиента";
			  this->client_Column4->MinimumWidth = 10;
			  this->client_Column4->Name = L"client_Column4";
			  this->client_Column4->ReadOnly = true;
			  this->client_Column4->Width = 220;
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
			  this->dataGridView_supplier->Location = System::Drawing::Point(117, 94);
			  this->dataGridView_supplier->Name = L"dataGridView_supplier";
			  this->dataGridView_supplier->ReadOnly = true;
			  this->dataGridView_supplier->RowHeadersWidth = 60;
			  this->dataGridView_supplier->RowTemplate->Height = 33;
			  this->dataGridView_supplier->Size = System::Drawing::Size(1211, 442);
			  this->dataGridView_supplier->TabIndex = 2;
			  this->dataGridView_supplier->Visible = false;
			  // 
			  // supplier_Column1
			  // 
			  this->supplier_Column1->HeaderText = L"Номер поставщика";
			  this->supplier_Column1->MinimumWidth = 10;
			  this->supplier_Column1->Name = L"supplier_Column1";
			  this->supplier_Column1->ReadOnly = true;
			  this->supplier_Column1->Width = 250;
			  // 
			  // supplier_Column2
			  // 
			  this->supplier_Column2->HeaderText = L"Название поставщика";
			  this->supplier_Column2->MinimumWidth = 10;
			  this->supplier_Column2->Name = L"supplier_Column2";
			  this->supplier_Column2->ReadOnly = true;
			  this->supplier_Column2->Width = 300;
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
			  this->dataGridView_product->Location = System::Drawing::Point(157, 250);
			  this->dataGridView_product->Name = L"dataGridView_product";
			  this->dataGridView_product->ReadOnly = true;
			  this->dataGridView_product->RowHeadersWidth = 60;
			  this->dataGridView_product->RowTemplate->Height = 33;
			  this->dataGridView_product->Size = System::Drawing::Size(1293, 442);
			  this->dataGridView_product->TabIndex = 3;
			  this->dataGridView_product->Visible = false;
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
			  this->dataGridView_service->Location = System::Drawing::Point(294, 264);
			  this->dataGridView_service->Name = L"dataGridView_service";
			  this->dataGridView_service->ReadOnly = true;
			  this->dataGridView_service->RowHeadersWidth = 60;
			  this->dataGridView_service->RowTemplate->Height = 33;
			  this->dataGridView_service->Size = System::Drawing::Size(944, 442);
			  this->dataGridView_service->TabIndex = 4;
			  this->dataGridView_service->Visible = false;
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
			  // label_database_clients
			  // 
			  this->label_database_clients->Anchor = System::Windows::Forms::AnchorStyles::None;
			  this->label_database_clients->AutoSize = true;
			  this->label_database_clients->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.875F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			  this->label_database_clients->Location = System::Drawing::Point(630, 94);
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
			  this->label_database_suppliers->Location = System::Drawing::Point(570, 94);
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
			  this->label_database_products->Location = System::Drawing::Point(643, 94);
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
			  this->label_database_services->Location = System::Drawing::Point(734, 94);
			  this->label_database_services->Name = L"label_database_services";
			  this->label_database_services->Size = System::Drawing::Size(352, 61);
			  this->label_database_services->TabIndex = 8;
			  this->label_database_services->Text = L"Список услуг";
			  this->label_database_services->Visible = false;
			  // 
			  // label_database_order
			  // 
			  this->label_database_order->Anchor = System::Windows::Forms::AnchorStyles::None;
			  this->label_database_order->AutoSize = true;
			  this->label_database_order->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.875F, System::Drawing::FontStyle::Regular,
				  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			  this->label_database_order->Location = System::Drawing::Point(660, 94);
			  this->label_database_order->Name = L"label_database_order";
			  this->label_database_order->Size = System::Drawing::Size(417, 61);
			  this->label_database_order->TabIndex = 9;
			  this->label_database_order->Text = L"Список заказов";
			  this->label_database_order->Visible = false;
			  // 
			  // dataGridView_order
			  // 
			  this->dataGridView_order->AllowUserToAddRows = false;
			  this->dataGridView_order->AllowUserToDeleteRows = false;
			  this->dataGridView_order->AllowUserToOrderColumns = true;
			  this->dataGridView_order->Anchor = System::Windows::Forms::AnchorStyles::None;
			  this->dataGridView_order->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			  this->dataGridView_order->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				  this->order_Column1,
					  this->order_Column2, this->order_Column3, this->order_Column4
			  });
			  this->dataGridView_order->Location = System::Drawing::Point(400, 170);
			  this->dataGridView_order->Name = L"dataGridView_order";
			  this->dataGridView_order->ReadOnly = true;
			  this->dataGridView_order->RowHeadersWidth = 60;
			  this->dataGridView_order->RowTemplate->Height = 33;
			  this->dataGridView_order->Size = System::Drawing::Size(1342, 442);
			  this->dataGridView_order->TabIndex = 10;
			  this->dataGridView_order->Visible = false;
			  // 
			  // order_Column1
			  // 
			  this->order_Column1->HeaderText = L"Номер заказа";
			  this->order_Column1->MinimumWidth = 10;
			  this->order_Column1->Name = L"order_Column1";
			  this->order_Column1->ReadOnly = true;
			  this->order_Column1->Width = 180;
			  // 
			  // order_Column2
			  // 
			  this->order_Column2->HeaderText = L"Номер клиента";
			  this->order_Column2->MinimumWidth = 10;
			  this->order_Column2->Name = L"order_Column2";
			  this->order_Column2->ReadOnly = true;
			  this->order_Column2->Width = 200;
			  // 
			  // order_Column3
			  // 
			  this->order_Column3->HeaderText = L"Данные заказа";
			  this->order_Column3->MinimumWidth = 10;
			  this->order_Column3->Name = L"order_Column3";
			  this->order_Column3->ReadOnly = true;
			  this->order_Column3->Width = 700;
			  // 
			  // order_Column4
			  // 
			  this->order_Column4->HeaderText = L"Итоговая стоимость";
			  this->order_Column4->MinimumWidth = 10;
			  this->order_Column4->Name = L"order_Column4";
			  this->order_Column4->ReadOnly = true;
			  this->order_Column4->Width = 200;
			  // 
			  // database
			  // 
			  this->AutoScaleDimensions = System::Drawing::SizeF(22, 42);
			  this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			  this->BackColor = System::Drawing::SystemColors::Info;
			  this->ClientSize = System::Drawing::Size(1861, 782);
			  this->Controls->Add(this->dataGridView_order);
			  this->Controls->Add(this->label_database_order);
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
			  (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_order))->EndInit();
			  this->ResumeLayout(false);
			  this->PerformLayout();

		  }

#pragma endregion
private: System::Void database_Load(System::Object^ sender, System::EventArgs^ e) {
	/*Проверка существования файлов с данными*/

	//Проверка существования файла с клиентами
	if (IO::File::Exists("client.txt")) {
		StreamReader^ str = gcnew StreamReader("client.txt");
		String^ string;
		int i = 0;
		/*Пока не конец файла*/
		while (str->Peek() >= 0) {
			/*Добавление строки в таблицу*/
			dataGridView_clients->Rows->Add();
			string = str->ReadLine();
			/*Создание массива строк*/
			cli::array<String^>^ newstr1;
			newstr1 = string->Split('&');
			/*Нумерация строк в таблице с 1*/
			dataGridView_clients->Rows[i]->Cells[0]->Value = i + 1;
			for (int j = 0; j < 3; j++)
			{
				dataGridView_clients->Rows[i]->Cells[j + 1]->Value = newstr1[j];
			}
			i++;
		}
		str->Close();
	}
	else {
		/*Создаем новый файл, если файл не создан*/
		StreamWriter^ new_file = gcnew StreamWriter("client.txt");
		delete new_file;
	}
	//Проверка существования файла с поставщиками
	if (IO::File::Exists("supplier.txt")) {
		StreamReader^ str = gcnew StreamReader("supplier.txt");
		String^ string;
		int i = 0;
		/*Пока не конец файла*/
		while (str->Peek() >= 0) {
			/*Добавление строки в таблицу*/
			dataGridView_supplier->Rows->Add();
			string = str->ReadLine();
			/*Создание массива строк*/
			cli::array<String^>^ newstr1;
			newstr1 = string->Split('&');
			/*Нумерация строк в таблице с 1*/
			dataGridView_supplier->Rows[i]->Cells[0]->Value = i + 1;
			for (int j = 0; j < 3; j++)
			{
				dataGridView_supplier->Rows[i]->Cells[j + 1]->Value = newstr1[j];
			}
			i++;
		}
		str->Close();
	}
	else {
		/*Создаем новый файл, если файл не создан*/
		StreamWriter^ new_file = gcnew StreamWriter("supplier.txt");
		delete new_file;
	}
	//Проверка существования файла с заказами
	if (IO::File::Exists("orderhistory.txt")) {
		StreamReader^ str = gcnew StreamReader("orderhistory.txt");
		String^ string;
		int i = 0;
		/*Пока не конец файла*/
		while (str->Peek() >= 0) {
			/*Добавление строки в таблицу*/
			dataGridView_order->Rows->Add();
			string = str->ReadLine();
			/*Создание массива строк*/
			cli::array<String^>^ newstr1;
			newstr1 = string->Split('&');
			/*Нумерация строк в таблице с 1*/
			dataGridView_order->Rows[i]->Cells[0]->Value = i + 1;
			for (int j = 0; j < 3; j++)
			{
				dataGridView_order->Rows[i]->Cells[j + 1]->Value = newstr1[j];
			}
			i++;
		}
		str->Close();
	}
	else {
		/*Создаем новый файл, если файл не создан*/
		StreamWriter^ new_file = gcnew StreamWriter("orderhistory.txt");
		delete new_file;
	}
	//Проверка существования файла с услугами
	if (IO::File::Exists("services.txt")) {
		StreamReader^ str = gcnew StreamReader("services.txt");
		String^ string;
		int i = 0;
		/*Пока не конец файла*/
		while (str->Peek() >= 0) {
			/*Добавление строки в таблицу*/
			dataGridView_service->Rows->Add();
			string = str->ReadLine();
			/*Создание массива строк*/
			cli::array<String^>^ newstr1;
			newstr1 = string->Split('&');
			/*Нумерация строк в таблице с 1*/
			dataGridView_service->Rows[i]->Cells[0]->Value = i + 1;
			for (int j = 0; j < 3; j++)
			{
				dataGridView_service->Rows[i]->Cells[j + 1]->Value = newstr1[j];
			}
			i++;
		}
		str->Close();
	}
	else {
		/*Создаем новый файл, если файл не создан*/
		StreamWriter^ new_file = gcnew StreamWriter("services.txt");
		delete new_file;
	}

	//Проверка существования файла с товарами
	if (IO::File::Exists("products.txt")) {
		StreamReader^ str = gcnew StreamReader("products.txt");
		String^ string;
		int i = 0;
		/*Пока не конец файла*/
		while (str->Peek() >= 0) {
			/*Добавление строки в таблицу*/
			dataGridView_product->Rows->Add();
			string = str->ReadLine();
			/*Создание массива строк*/
			cli::array<String^>^ newstr1;
			newstr1 = string->Split('&');
			/*Нумерация строк в таблице с 1*/
			dataGridView_product->Rows[i]->Cells[0]->Value = i + 1;
			for (int j = 0; j < 4; j++)
			{
				dataGridView_product->Rows[i]->Cells[j + 1]->Value = newstr1[j];
			}
			i++;
		}
		str->Close();
	}
	else {
		/*Создаем новый файл, если файл не создан*/
		StreamWriter^ new_file = gcnew StreamWriter("products.txt");
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
	/*открываем файл для записи списка клиентов*/
	StreamWriter^ client = gcnew StreamWriter("client.txt");
	for (int i = 0; i < dataGridView_clients->RowCount; i++) {
		for (int j = 1; j < 4; j++) {
			client->Write(dataGridView_clients->Rows[i]->Cells[j]->Value + "&");
		}
		client->WriteLine();
	}
	client->Close();
	
	/*открываем файл для записи списка поставщиков*/
	StreamWriter^ supplier = gcnew StreamWriter("supplier.txt");
	for (int i = 0; i < dataGridView_supplier->RowCount; i++) {
		for (int j = 1; j < 4; j++) {
			supplier->Write(dataGridView_supplier->Rows[i]->Cells[j]->Value + "&");
		}
		supplier->WriteLine();
	}
	supplier->Close();

	/*открываем файл для записи списка товаров*/
	StreamWriter^ product = gcnew StreamWriter("products.txt");
	for (int i = 0; i < dataGridView_product->RowCount; i++) {
		for (int j = 1; j < 5; j++) {
			product->Write(dataGridView_product->Rows[i]->Cells[j]->Value + "&");
		}
		product->WriteLine();
	}
	product->Close();

	/*открываем файл для записи списка услуг*/
	StreamWriter^ service = gcnew StreamWriter("services.txt");
	for (int i = 0; i < dataGridView_service->RowCount; i++) {
		for (int j = 1; j < 4; j++) {
			service->Write(dataGridView_service->Rows[i]->Cells[j]->Value + "&");
		}
		service->WriteLine();
	}
	service->Close();

	/*открываем файл для записи списка заказов*/
	StreamWriter^ order = gcnew StreamWriter("orderhistory.txt");
	for (int i = 0; i < dataGridView_order->RowCount; i++) {
		for (int j = 1; j < 4; j++) {
			order->Write(dataGridView_order->Rows[i]->Cells[j]->Value + "&");
		}
		order->WriteLine();
	}
	order->Close();
	save = true;
	MessageBox::Show("Данные сохранены!", "Успешно", MessageBoxButtons::OK, MessageBoxIcon::Information);
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

/*Обработка кнопки добавление клиента*/
private: System::Void ToolStripMenuItem_add_client_Click(System::Object^ sender, System::EventArgs^ e) {
	addclient^ add = gcnew addclient();
	add->ShowDialog();
	if (add->clientadding != String::Empty) {
		/*Добавление строки в таблицу*/
		dataGridView_clients->Rows->Add();
		/*Создание массива строк*/
		cli::array<String^>^ newstr2;
		newstr2 = add->clientadding->Split('&');
		int count;
		count = dataGridView_clients->RowCount - 1;
		/*Нумерация строк с единицы*/
		dataGridView_clients->Rows[count]->Cells[0]->Value = count + 1;
		for (int i = 0; i < 3; i++)
		{
			dataGridView_clients->Rows[count]->Cells[i + 1]->Value = newstr2[i];
		}
		/*Так как данные были изменены, то меняем переменную save*/
		save = false;
	}
}

/*Обработка кнопки добавление поставщика*/
private: System::Void ToolStripMenuItem_add_supplier_Click(System::Object^ sender, System::EventArgs^ e) {
	addsupplier^ add = gcnew addsupplier();
	add->ShowDialog();
	if (add->supplieradding != String::Empty) {
		/*Добавление строки в таблицу*/
		dataGridView_supplier->Rows->Add();
		/*Создание массива строк*/
		cli::array<String^>^ newstr2;
		newstr2 = add->supplieradding->Split('&');
		int count;
		count = dataGridView_supplier->RowCount - 1;
		/*Нумерация строк с единицы*/
		dataGridView_supplier->Rows[count]->Cells[0]->Value = count + 1;
		for (int i = 0; i < 3; i++)
		{
			dataGridView_supplier->Rows[count]->Cells[i + 1]->Value = newstr2[i];
		}
		/*Так как данные были изменены, то меняем переменную save*/
		save = false;
	}
}

/*Обработка кнопки добавление товара*/
private: System::Void ToolStripMenuItem_add_product_Click(System::Object^ sender, System::EventArgs^ e) {
	addproduct^ add = gcnew addproduct();
	// Получаем значения из первых двух столбцов DataGridView
	List<String^>^ values = gcnew List<String^>(); // Использование List из System::Collections::Generic
	for each (DataGridViewRow^ row in dataGridView_supplier->Rows)
	{
		if (row->Cells[0]->Value != nullptr && row->Cells[1]->Value != nullptr)
		{
			// Склеиваем значения из первых двух столбцов
			String^ concatenatedValue = row->Cells[0]->Value->ToString() + ". " + row->Cells[1]->Value->ToString();
			values->Add(concatenatedValue); // Добавляем склеенные строки в список
		}
	}
	// Проверка на пустоту списка
	if (values->Count > 0) // Если список не пустой
	{
		add->SetValues_comboBox_supplier(values);
		add->ShowDialog();
		if (add->productadding != String::Empty) {
			/*Добавление строки в таблицу*/
			dataGridView_product->Rows->Add();
			/*Создание массива строк*/
			cli::array<String^>^ newstr2;
			newstr2 = add->productadding->Split('&');
			int count;
			count = dataGridView_product->RowCount - 1;
			/*Нумерация строк с единицы*/
			dataGridView_product->Rows[count]->Cells[0]->Value = count + 1;
			for (int i = 0; i < 4; i++)
			{
				dataGridView_product->Rows[count]->Cells[i + 1]->Value = newstr2[i];
			}
			/*Так как данные были изменены, то меняем переменную save*/
			save = false;
		}
	}
	else MessageBox::Show("Перед добавлением товара добавьте поставщика!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
}
/*Обработка кнопки добавление услуги*/
private: System::Void ToolStripMenuItem_add_service_Click(System::Object^ sender, System::EventArgs^ e) {
	addservice^ add = gcnew addservice();
	add->ShowDialog();
	if (add->serviceadding != String::Empty) {
		/*Добавление строки в таблицу*/
		dataGridView_service->Rows->Add();
		/*Создание массива строк*/
		cli::array<String^>^ newstr2;
		newstr2 = add->serviceadding->Split('&');
		int count;
		count = dataGridView_service->RowCount - 1;
		/*Нумерация строк с единицы*/
		dataGridView_service->Rows[count]->Cells[0]->Value = count + 1;
		for (int i = 0; i < 3; i++)
		{
			dataGridView_service->Rows[count]->Cells[i + 1]->Value = newstr2[i];
		}
		/*Так как данные были изменены, то меняем переменную save*/
		save = false;
	}
}
//Обработка кнопки вывод списка заказов
private: System::Void ToolStripMenuItem_output_order_Click(System::Object^ sender, System::EventArgs^ e) {
	/*Скрываем все элементы*/
	dataGridView_clients->Visible = false;
	dataGridView_product->Visible = false;
	dataGridView_service->Visible = false;
	label_database_services->Visible = false;
	label_database_products->Visible = false;
	label_database_clients->Visible = false;
	dataGridView_supplier->Visible = false;
	label_database_suppliers->Visible = false;
	/*Делаем видимыми список заказов*/
	dataGridView_order->Visible = true;
	label_database_order->Visible = true;
}

//Обработка кнопки вывод списка поставщиков
private: System::Void ToolStripMenuItem_output_supplier_Click(System::Object^ sender, System::EventArgs^ e) {
	/*Скрываем все элементы*/
	dataGridView_order->Visible = false;
	label_database_order->Visible = false;

	dataGridView_clients->Visible = false;
	dataGridView_product->Visible = false;
	dataGridView_service->Visible = false;
	label_database_services->Visible = false;
	label_database_products->Visible = false;
	label_database_clients->Visible = false;
	/*Делаем видимыми список поставщиков*/
	dataGridView_supplier->Visible = true;
	label_database_suppliers->Visible = true;
}

//Обработка кнопки вывод списка клиентов
private: System::Void ToolStripMenuItem_output_client_Click(System::Object^ sender, System::EventArgs^ e) {
	/*Скрываем все элементы*/
	dataGridView_order->Visible = false;
	label_database_order->Visible = false;

	dataGridView_supplier->Visible = false;
	dataGridView_product->Visible = false;
	dataGridView_service->Visible = false;
	label_database_services->Visible = false;
	label_database_products->Visible = false;
	label_database_suppliers->Visible = false;
	/*Делаем видимыми список клиентов*/
	dataGridView_clients->Visible = true;
	label_database_clients->Visible = true;
}

//Обработка кнопки вывод списка продуктов
private: System::Void ToolStripMenuItem_output_product_Click(System::Object^ sender, System::EventArgs^ e) {
	/*Скрываем все элементы*/
	dataGridView_order->Visible = false;
	label_database_order->Visible = false;

	dataGridView_supplier->Visible = false;
	dataGridView_clients->Visible = false;
	dataGridView_service->Visible = false;
	label_database_services->Visible = false;
	label_database_suppliers->Visible = false;
	label_database_clients->Visible = false;
	/*Делаем видимыми список продуктов*/
	dataGridView_product->Visible = true;
	label_database_products->Visible = true;
}

//Обработка кнопки вывод списка услуг
private: System::Void ToolStripMenuItem_output_service_Click(System::Object^ sender, System::EventArgs^ e) {
	/*Скрываем все элементы*/
	dataGridView_order->Visible = false;
	label_database_order->Visible = false;

	dataGridView_supplier->Visible = false;
	dataGridView_clients->Visible = false;
	dataGridView_service->Visible = false;
	label_database_services->Visible = false;
	label_database_suppliers->Visible = false;
	label_database_clients->Visible = false;
	dataGridView_product->Visible = false;
	label_database_products->Visible = false;
	/*Делаем видимыми список услуг*/
	dataGridView_service->Visible = true;
	label_database_services->Visible = true;
}

//Обработка кнопки создание заказа
private: System::Void ToolStripMenuItem_make_order_Click(System::Object^ sender, System::EventArgs^ e) {
	addorder^ add = gcnew addorder();
	// Получаем значения из первых двух столбцов DataGridView
	List<String^>^ values = gcnew List<String^>(); // Использование List из System::Collections::Generic
	for each (DataGridViewRow^ row in dataGridView_clients->Rows)
	{
		if (row->Cells[0]->Value != nullptr && row->Cells[1]->Value != nullptr)
		{
			// Склеиваем значения из первых двух столбцов
			String^ concatenatedValue = row->Cells[0]->Value->ToString() + ". " + row->Cells[1]->Value->ToString();
			values->Add(concatenatedValue); // Добавляем склеенные строки в список
		}
	}

	List<String^>^ vals = gcnew List<String^>(); // Использование List из System::Collections::Generic
	List<int>^ max_count = gcnew List<int>();
	List<int>^ price = gcnew List<int>();
	for each (DataGridViewRow ^ row in dataGridView_product->Rows)
	{
		if (row->Cells[0]->Value != nullptr && row->Cells[1]->Value != nullptr && row->Cells[3]->Value != nullptr)
		{
			// Склеиваем значения
			String^ conValue = row->Cells[0]->Value->ToString() + ". " + row->Cells[1]->Value->ToString() + ", цена: " + row->Cells[3]->Value->ToString();
			vals->Add(conValue); // Добавляем склеенные строки в список
			max_count->Add(Convert::ToInt32(row->Cells[4]->Value)); //Добавление количества товара на складе в список
			price->Add(Convert::ToInt32(row->Cells[3]->Value)); //Добавление цен товаров в список
		}
	}

	List<String^>^ val = gcnew List<String^>(); // Использование List из System::Collections::Generic
	List<int>^ price_service = gcnew List<int>();
	for each (DataGridViewRow ^ row in dataGridView_service->Rows)
	{
		if (row->Cells[0]->Value != nullptr && row->Cells[1]->Value != nullptr && row->Cells[2]->Value != nullptr && row->Cells[3]->Value != nullptr)
		{
			// Склеиваем значения
			String^ conValue = row->Cells[0]->Value->ToString() + ". " + row->Cells[1]->Value->ToString() + ", тип животного: " + row->Cells[2]->Value->ToString() + ", цена: " + row->Cells[3]->Value->ToString();
			val->Add(conValue); // Добавляем склеенные строки в список
			price_service->Add(Convert::ToInt32(row->Cells[3]->Value)); //Добавление цен услуги в список
		}
	}

	// Проверка на пустоту списков
	if (values->Count > 0) // Если список не пустой
	{
		if (vals->Count > 0 || val->Count > 0)
		{
			add->SetValues_comboBox_client(values);
			add->SetValues_comboBox_product(vals, max_count, price);
			add->SetValues_comboBox_service(val, price_service);
			add->ShowDialog();
			if (add->combinedString != String::Empty && add->result_price != 0) {
				/*Добавление строки в таблицу*/
				dataGridView_order->Rows->Add();
				int count;
				count = dataGridView_order->RowCount - 1;
				/*Нумерация строк с единицы*/
				dataGridView_order->Rows[count]->Cells[0]->Value = count + 1;
				dataGridView_order->Rows[count]->Cells[1]->Value = add->orderadding;
				dataGridView_order->Rows[count]->Cells[2]->Value = add->combinedString;
				dataGridView_order->Rows[count]->Cells[3]->Value = add->result_price;
				/*Так как данные были изменены, то меняем переменную save*/
				save = false;
				int j = 0;
				for each (DataGridViewRow^ row in dataGridView_product->Rows)
				{
					row->Cells[4]->Value = add->max_product[j];
					j++;
				}
			}
		}
		else MessageBox::Show("Перед созданием заказа добавьте товар или услугу!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else MessageBox::Show("Перед созданием заказа добавьте клиента!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
}
//Редактирование данных клиентов
private: System::Void ToolStripMenuItem_edit_client_Click(System::Object^ sender, System::EventArgs^ e) {
	editclient^ edclient = gcnew editclient();
	// Получаем значения из первых двух столбцов DataGridView
	List<String^>^ phone_list = gcnew List<String^>(); // Использование List из System::Collections::Generic
	List<String^>^ address_list = gcnew List<String^>();
	List<String^>^ values = gcnew List<String^>();
	for each (DataGridViewRow ^ row in dataGridView_clients->Rows)
	{
		if (row->Cells[0]->Value != nullptr && row->Cells[1]->Value != nullptr)
		{
			// Склеиваем значения из первых двух столбцов
			String^ concatenatedValue = row->Cells[0]->Value->ToString() + ". " + row->Cells[1]->Value->ToString();
			values->Add(concatenatedValue); // Добавляем склеенные строки в список
			address_list->Add(row->Cells[2]->Value->ToString());
			phone_list->Add(row->Cells[3]->Value->ToString());
		}
	}
	// Проверка на пустоту списков
	if (values->Count > 0) // Если список не пустой
	{
		edclient->SetValues_comboBox_clientname(values, phone_list, address_list);
		edclient->ShowDialog();
		/*Удаление строки*/
		if (edclient->client_delete != 0) {
			dataGridView_clients->Rows->RemoveAt(edclient->client_delete - 1);
			for (int i = 0; i < dataGridView_clients->Rows->Count; i++) {
				dataGridView_clients->Rows[i]->Cells[0]->Value = i + 1;
			}
			save = false;
		}
		else if (edclient->edit_client != String::Empty && edclient->number_edit_client != 0) {
			/*Создание массива строк*/
			cli::array<String^>^ newstr2;
			newstr2 = edclient->edit_client->Split('&');
			for (int i = 1; i < 4; i++)
			{
				dataGridView_clients->Rows[edclient->number_edit_client - 1]->Cells[i]->Value = newstr2[i - 1];
			}
			/*Так как данные были изменены, то меняем переменную save*/
			save = false;
		}
	}
	else MessageBox::Show("Перед редактированием добавьте клиента!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
}

//Редактирование данных поставщиков
private: System::Void ToolStripMenuItem_edit_supplier_Click(System::Object^ sender, System::EventArgs^ e) {
	editsupplier^ edsupplier = gcnew editsupplier();
	// Получаем значения из первых двух столбцов DataGridView
	List<String^>^ phone_list = gcnew List<String^>(); // Использование List из System::Collections::Generic
	List<String^>^ address_list = gcnew List<String^>();
	List<String^>^ values = gcnew List<String^>();
	for each (DataGridViewRow ^ row in dataGridView_supplier->Rows)
	{
		if (row->Cells[0]->Value != nullptr && row->Cells[1]->Value != nullptr)
		{
			// Склеиваем значения из первых двух столбцов
			String^ concatenatedValue = row->Cells[0]->Value->ToString() + ". " + row->Cells[1]->Value->ToString();
			values->Add(concatenatedValue); // Добавляем склеенные строки в список
			address_list->Add(row->Cells[2]->Value->ToString());
			phone_list->Add(row->Cells[3]->Value->ToString());
		}
	}
	// Проверка на пустоту списков
	if (values->Count > 0) // Если список не пустой
	{
		edsupplier->SetValues_comboBox_suppliername(values, phone_list, address_list);
		edsupplier->ShowDialog();
		/*Удаление строки*/
		if (edsupplier->supplier_delete != 0) {
			dataGridView_supplier->Rows->RemoveAt(edsupplier->supplier_delete - 1);
			for (int i = 0; i < dataGridView_supplier->Rows->Count; i++) {
				dataGridView_supplier->Rows[i]->Cells[0]->Value = i + 1;
			}
			save = false;
		}
		else if (edsupplier->edit_supplier != String::Empty && edsupplier->number_edit_supplier != 0) {
			/*Создание массива строк*/
			cli::array<String^>^ newstr2;
			newstr2 = edsupplier->edit_supplier->Split('&');
			for (int i = 1; i < 4; i++)
			{
				dataGridView_supplier->Rows[edsupplier->number_edit_supplier - 1]->Cells[i]->Value = newstr2[i - 1];
			}
			/*Так как данные были изменены, то меняем переменную save*/
			save = false;
		}
	}
	else MessageBox::Show("Перед редактированием добавьте поставщика!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
}

//Редактирование данных товаров
private: System::Void ToolStripMenuItem_edit_product_Click(System::Object^ sender, System::EventArgs^ e) {
	editproduct^ edproduct = gcnew editproduct();
	// Получаем значения из первых двух столбцов DataGridView
	List<int>^ price_list = gcnew List<int>();
	List<int>^ count_list = gcnew List<int>();
	List<String^>^ val = gcnew List<String^>();
	List<String^>^ sup = gcnew List<String^>();
	List<String^>^ values = gcnew List<String^>();
	for each (DataGridViewRow ^ row in dataGridView_product->Rows)
	{
		if (row->Cells[0]->Value != nullptr && row->Cells[1]->Value != nullptr)
		{
			// Склеиваем значения из первых двух столбцов
			String^ concatenatedValue = row->Cells[0]->Value->ToString() + ". " + row->Cells[1]->Value->ToString();
			values->Add(concatenatedValue); // Добавляем склеенные строки в список
			sup->Add(row->Cells[2]->Value->ToString());
			price_list->Add(Convert::ToInt32(row->Cells[3]->Value));
			count_list->Add(Convert::ToInt32(row->Cells[4]->Value));
		}
	}
	for each (DataGridViewRow ^ row in dataGridView_supplier->Rows)
	{
		if (row->Cells[0]->Value != nullptr && row->Cells[1]->Value != nullptr)
		{
			// Склеиваем значения из первых двух столбцов
			String^ concatenatedValue = row->Cells[0]->Value->ToString() + ". " + row->Cells[1]->Value->ToString();
			val->Add(concatenatedValue); // Добавляем склеенные строки в список
		}
	}
	// Проверка на пустоту списков
	if (values->Count > 0) // Если список не пустой
	{
		edproduct->SetValues_comboBox_productname(values, val, price_list, count_list, sup);
		edproduct->ShowDialog();
		/*Удаление строки*/
		if (edproduct->product_delete != 0) {
			dataGridView_product->Rows->RemoveAt(edproduct->product_delete - 1);
			for (int i = 0; i < dataGridView_product->Rows->Count; i++) {
				dataGridView_product->Rows[i]->Cells[0]->Value = i + 1;
			}
			save = false;
		}
		else if (edproduct->edit_product != String::Empty && edproduct->number_edit_product != 0) {
			/*Создание массива строк*/
			cli::array<String^>^ newstr2;
			newstr2 = edproduct->edit_product->Split('&');
			for (int i = 1; i < 5; i++)
			{
				dataGridView_product->Rows[edproduct->number_edit_product - 1]->Cells[i]->Value = newstr2[i - 1];
			}
			/*Так как данные были изменены, то меняем переменную save*/
			save = false;
		}
	}
	else MessageBox::Show("Перед редактированием добавьте поставщика!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
}
//Редактирование данных услуг
private: System::Void ToolStripMenuItem_edit_service_Click(System::Object^ sender, System::EventArgs^ e) {
	editservice^ edservice = gcnew editservice();
	// Получаем значения из первых двух столбцов DataGridView
	List<String^>^ type_list = gcnew List<String^>(); // Использование List из System::Collections::Generic
	List<int>^ price_list = gcnew List<int>();
	List<String^>^ values = gcnew List<String^>();
	for each (DataGridViewRow ^ row in dataGridView_service->Rows)
	{
		if (row->Cells[0]->Value != nullptr && row->Cells[1]->Value != nullptr)
		{
			// Склеиваем значения из первых двух столбцов
			String^ concatenatedValue = row->Cells[0]->Value->ToString() + ". " + row->Cells[1]->Value->ToString();
			values->Add(concatenatedValue); // Добавляем склеенные строки в список
			type_list->Add(row->Cells[2]->Value->ToString());
			price_list->Add(Convert::ToInt32(row->Cells[3]->Value));
		}
	}
	// Проверка на пустоту списков
	if (values->Count > 0) // Если список не пустой
	{
		edservice->SetValues_comboBox_servicename(values, type_list, price_list);
		edservice->ShowDialog();
		/*Удаление строки*/
		if (edservice->service_delete != 0) {
			dataGridView_service->Rows->RemoveAt(edservice->service_delete - 1);
			for (int i = 0; i < dataGridView_service->Rows->Count; i++) {
				dataGridView_service->Rows[i]->Cells[0]->Value = i + 1;
			}
			save = false;
		}
		else if (edservice->edit_service != String::Empty && edservice->number_edit_service != 0) {
			/*Создание массива строк*/
			cli::array<String^>^ newstr2;
			newstr2 = edservice->edit_service->Split('&');
			for (int i = 1; i < 4; i++)
			{
				dataGridView_service->Rows[edservice->number_edit_service - 1]->Cells[i]->Value = newstr2[i - 1];
			}
			/*Так как данные были изменены, то меняем переменную save*/
			save = false;
		}
	}
	else MessageBox::Show("Перед редактированием добавьте услугу!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
}

//Редактирование заказа
private: System::Void ToolStripMenuItem_edit_order_Click(System::Object^ sender, System::EventArgs^ e) {
	editorder^ edorder = gcnew editorder();
	// Получаем значения из первых двух столбцов DataGridView
	List<int>^ price_list = gcnew List<int>();
	List<String^>^ values = gcnew List<String^>();
	for each (DataGridViewRow ^ row in dataGridView_order->Rows)
	{
		if (row->Cells[0]->Value != nullptr && row->Cells[1]->Value != nullptr)
		{
			// Склеиваем значения
			String^ concatenatedValue = row->Cells[0]->Value->ToString() + ". " + row->Cells[2]->Value->ToString();
			values->Add(concatenatedValue); // Добавляем склеенные строки в список
			price_list->Add(Convert::ToInt32(row->Cells[3]->Value));
		}
	}
	// Проверка на пустоту списков
	if (values->Count > 0) // Если список не пустой
	{
		edorder->SetValues_comboBox_ordername(values);
		edorder->ShowDialog();
		/*Удаление строки*/
		if (edorder->order_delete != 0) {
			dataGridView_order->Rows->RemoveAt(edorder->order_delete - 1);
			for (int i = 0; i < dataGridView_order->Rows->Count; i++) {
				dataGridView_order->Rows[i]->Cells[0]->Value = i + 1;
			}
			save = false;
		}
	}
	else MessageBox::Show("Перед редактированием добавьте заказ!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
}
//Поиск клиента
private: System::Void ToolStripMenuItem_search_client_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridView_clients->RowCount > 0) {
		if (save != false) {
			searchclient^ search_cl = gcnew searchclient();
			search_cl->ShowDialog();
		}
		else {
			System::Windows::Forms::DialogResult what = MessageBox::Show("Измененные данные не были сохранены. \nНажмите \"да\", если хотите работать с измененными данными.\nНажмите\"нет\, если хотите работать со старыми данными", "Предупреждение", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);
			if (what == System::Windows::Forms::DialogResult::Yes) {
				ToolStripMenuItem_safe_Click(sender, e);
				searchclient^ search_cl = gcnew searchclient();
				search_cl->ShowDialog();
			}
			else {
				searchclient^ search_cl = gcnew searchclient();
				search_cl->ShowDialog();
			}
		}
	}
	else MessageBox::Show("Перед поиском добавьте клиентов!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
}
//Поиск поставщика
private: System::Void ToolStripMenuItem_search_suppplier_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridView_supplier->RowCount > 0) {
		if (save != false) {
			searchsupplier^ search_sup = gcnew searchsupplier();
			search_sup->ShowDialog();
		}
		else {
			System::Windows::Forms::DialogResult what = MessageBox::Show("Измененные данные не были сохранены. \nНажмите \"да\", если хотите работать с измененными данными.\nНажмите\"нет\, если хотите работать со старыми данными", "Предупреждение", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);
			if (what == System::Windows::Forms::DialogResult::Yes) {
				ToolStripMenuItem_safe_Click(sender, e);
				searchsupplier^ search_sup = gcnew searchsupplier();
				search_sup->ShowDialog();
			}
			else {
				searchsupplier^ search_sup = gcnew searchsupplier();
				search_sup->ShowDialog();
			}
		}
	}
	else MessageBox::Show("Перед поиском добавьте поставщиков!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
}
};
}