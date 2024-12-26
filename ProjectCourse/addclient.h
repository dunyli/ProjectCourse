﻿#pragma once

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
	public ref class addclient : public System::Windows::Forms::Form
	{
	public:
		addclient(void)
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
		~addclient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_addclient_head;
	protected:
	private: System::Windows::Forms::Label^ label_addclient_name;
	private: System::Windows::Forms::TextBox^ textBox_addclient_name;
	private: System::Windows::Forms::Label^ label_addclient_address;
	private: System::Windows::Forms::TextBox^ textBox_addclient_address;
	private: System::Windows::Forms::Label^ label_addclient_phone;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox_addclient_phone;
	private: System::Windows::Forms::Button^ button_addclient_enter;
	private: System::Windows::Forms::Button^ button_addclient_exit;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label_addclient_head = (gcnew System::Windows::Forms::Label());
			this->label_addclient_name = (gcnew System::Windows::Forms::Label());
			this->textBox_addclient_name = (gcnew System::Windows::Forms::TextBox());
			this->label_addclient_address = (gcnew System::Windows::Forms::Label());
			this->textBox_addclient_address = (gcnew System::Windows::Forms::TextBox());
			this->label_addclient_phone = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox_addclient_phone = (gcnew System::Windows::Forms::MaskedTextBox());
			this->button_addclient_enter = (gcnew System::Windows::Forms::Button());
			this->button_addclient_exit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label_addclient_head
			// 
			this->label_addclient_head->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label_addclient_head->AutoSize = true;
			this->label_addclient_head->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_addclient_head->Location = System::Drawing::Point(223, 44);
			this->label_addclient_head->Name = L"label_addclient_head";
			this->label_addclient_head->Size = System::Drawing::Size(1360, 61);
			this->label_addclient_head->TabIndex = 0;
			this->label_addclient_head->Text = L"Для добавления клиента, заполните все данные поля";
			// 
			// label_addclient_name
			// 
			this->label_addclient_name->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label_addclient_name->AutoSize = true;
			this->label_addclient_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_addclient_name->Location = System::Drawing::Point(25, 165);
			this->label_addclient_name->Name = L"label_addclient_name";
			this->label_addclient_name->Size = System::Drawing::Size(740, 84);
			this->label_addclient_name->TabIndex = 1;
			this->label_addclient_name->Text = L"Введите ФИО клиента:\r\nОбразец: Медведев Даниил Дмитриевич";
			// 
			// textBox_addclient_name
			// 
			this->textBox_addclient_name->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox_addclient_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox_addclient_name->Location = System::Drawing::Point(32, 274);
			this->textBox_addclient_name->Name = L"textBox_addclient_name";
			this->textBox_addclient_name->Size = System::Drawing::Size(733, 56);
			this->textBox_addclient_name->TabIndex = 2;
			// 
			// label_addclient_address
			// 
			this->label_addclient_address->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label_addclient_address->AutoSize = true;
			this->label_addclient_address->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_addclient_address->Location = System::Drawing::Point(982, 165);
			this->label_addclient_address->Name = L"label_addclient_address";
			this->label_addclient_address->Size = System::Drawing::Size(730, 84);
			this->label_addclient_address->TabIndex = 3;
			this->label_addclient_address->Text = L"Введите адрес клиента:\r\nОбразец: Барнаул, ул.Пушкина 22, кв.22\r\n";
			// 
			// textBox_addclient_address
			// 
			this->textBox_addclient_address->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox_addclient_address->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox_addclient_address->Location = System::Drawing::Point(989, 274);
			this->textBox_addclient_address->Name = L"textBox_addclient_address";
			this->textBox_addclient_address->Size = System::Drawing::Size(733, 56);
			this->textBox_addclient_address->TabIndex = 4;
			// 
			// label_addclient_phone
			// 
			this->label_addclient_phone->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label_addclient_phone->AutoSize = true;
			this->label_addclient_phone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_addclient_phone->Location = System::Drawing::Point(25, 373);
			this->label_addclient_phone->Name = L"label_addclient_phone";
			this->label_addclient_phone->Size = System::Drawing::Size(489, 84);
			this->label_addclient_phone->TabIndex = 5;
			this->label_addclient_phone->Text = L"Введите телефон клиента:\r\nОбразец: (987) 654-3210\r\n";
			// 
			// maskedTextBox_addclient_phone
			// 
			this->maskedTextBox_addclient_phone->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->maskedTextBox_addclient_phone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->maskedTextBox_addclient_phone->Location = System::Drawing::Point(32, 477);
			this->maskedTextBox_addclient_phone->Mask = L"(999) 000-0000";
			this->maskedTextBox_addclient_phone->Name = L"maskedTextBox_addclient_phone";
			this->maskedTextBox_addclient_phone->Size = System::Drawing::Size(482, 56);
			this->maskedTextBox_addclient_phone->TabIndex = 6;
			// 
			// button_addclient_enter
			// 
			this->button_addclient_enter->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_addclient_enter->BackColor = System::Drawing::Color::SeaShell;
			this->button_addclient_enter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_addclient_enter->Location = System::Drawing::Point(669, 601);
			this->button_addclient_enter->Name = L"button_addclient_enter";
			this->button_addclient_enter->Size = System::Drawing::Size(493, 141);
			this->button_addclient_enter->TabIndex = 7;
			this->button_addclient_enter->Text = L"Добавить клиента";
			this->button_addclient_enter->UseVisualStyleBackColor = false;
			// 
			// button_addclient_exit
			// 
			this->button_addclient_exit->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_addclient_exit->BackColor = System::Drawing::Color::SeaShell;
			this->button_addclient_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_addclient_exit->Location = System::Drawing::Point(669, 760);
			this->button_addclient_exit->Name = L"button_addclient_exit";
			this->button_addclient_exit->Size = System::Drawing::Size(493, 141);
			this->button_addclient_exit->TabIndex = 8;
			this->button_addclient_exit->Text = L"Вернуться назад";
			this->button_addclient_exit->UseVisualStyleBackColor = false;
			// 
			// addclient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ClientSize = System::Drawing::Size(1791, 922);
			this->Controls->Add(this->button_addclient_exit);
			this->Controls->Add(this->button_addclient_enter);
			this->Controls->Add(this->maskedTextBox_addclient_phone);
			this->Controls->Add(this->label_addclient_phone);
			this->Controls->Add(this->textBox_addclient_address);
			this->Controls->Add(this->label_addclient_address);
			this->Controls->Add(this->textBox_addclient_name);
			this->Controls->Add(this->label_addclient_name);
			this->Controls->Add(this->label_addclient_head);
			this->Name = L"addclient";
			this->Text = L"Добавление клиента";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
