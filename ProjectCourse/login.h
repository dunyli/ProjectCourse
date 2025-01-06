#pragma once
#include "info.h"
#include "password.h"
#include "database.h"

namespace ProjectCourse {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для login
	/// </summary>
	public ref class login : public System::Windows::Forms::Form
	{
	public:
		login(void)
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
		~login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_login_info;
	private: System::Windows::Forms::Button^ button_login_exit;
	private: System::Windows::Forms::Label^ label_login_zooname;
	private: System::Windows::Forms::Label^ label_login_in;
	private: System::Windows::Forms::Button^ button_login_admin;
	private: System::Windows::Forms::Button^ button_login_user;
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
			this->button_login_info = (gcnew System::Windows::Forms::Button());
			this->button_login_exit = (gcnew System::Windows::Forms::Button());
			this->label_login_zooname = (gcnew System::Windows::Forms::Label());
			this->label_login_in = (gcnew System::Windows::Forms::Label());
			this->button_login_admin = (gcnew System::Windows::Forms::Button());
			this->button_login_user = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button_login_info
			// 
			this->button_login_info->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button_login_info->BackColor = System::Drawing::Color::SeaShell;
			this->button_login_info->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_login_info->Location = System::Drawing::Point(983, 12);
			this->button_login_info->Name = L"button_login_info";
			this->button_login_info->Size = System::Drawing::Size(206, 99);
			this->button_login_info->TabIndex = 0;
			this->button_login_info->Text = L"Справка";
			this->button_login_info->UseVisualStyleBackColor = false;
			this->button_login_info->Click += gcnew System::EventHandler(this, &login::button_login_info_Click);
			// 
			// button_login_exit
			// 
			this->button_login_exit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button_login_exit->BackColor = System::Drawing::Color::SeaShell;
			this->button_login_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_login_exit->Location = System::Drawing::Point(1211, 12);
			this->button_login_exit->Name = L"button_login_exit";
			this->button_login_exit->Size = System::Drawing::Size(206, 99);
			this->button_login_exit->TabIndex = 1;
			this->button_login_exit->Text = L"Выход";
			this->button_login_exit->UseVisualStyleBackColor = false;
			this->button_login_exit->Click += gcnew System::EventHandler(this, &login::button_login_exit_Click);
			// 
			// label_login_zooname
			// 
			this->label_login_zooname->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label_login_zooname->AutoSize = true;
			this->label_login_zooname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_login_zooname->Location = System::Drawing::Point(548, 151);
			this->label_login_zooname->Name = L"label_login_zooname";
			this->label_login_zooname->Size = System::Drawing::Size(417, 79);
			this->label_login_zooname->TabIndex = 2;
			this->label_login_zooname->Text = L"Зоомагазин\r\n";
			this->label_login_zooname->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label_login_in
			// 
			this->label_login_in->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label_login_in->AutoSize = true;
			this->label_login_in->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_login_in->Location = System::Drawing::Point(209, 241);
			this->label_login_in->Name = L"label_login_in";
			this->label_login_in->Size = System::Drawing::Size(1118, 122);
			this->label_login_in->TabIndex = 3;
			this->label_login_in->Text = L"    Авторизуйтесь для последующей работы \r\n           Выберите доступный вам режи"
				L"м";
			// 
			// button_login_admin
			// 
			this->button_login_admin->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_login_admin->BackColor = System::Drawing::Color::SeaShell;
			this->button_login_admin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_login_admin->Location = System::Drawing::Point(256, 412);
			this->button_login_admin->Name = L"button_login_admin";
			this->button_login_admin->Size = System::Drawing::Size(454, 221);
			this->button_login_admin->TabIndex = 4;
			this->button_login_admin->Text = L"Администратор";
			this->button_login_admin->UseVisualStyleBackColor = false;
			this->button_login_admin->Click += gcnew System::EventHandler(this, &login::button_login_admin_Click);
			// 
			// button_login_user
			// 
			this->button_login_user->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_login_user->BackColor = System::Drawing::Color::SeaShell;
			this->button_login_user->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_login_user->Location = System::Drawing::Point(838, 412);
			this->button_login_user->Name = L"button_login_user";
			this->button_login_user->Size = System::Drawing::Size(454, 221);
			this->button_login_user->TabIndex = 5;
			this->button_login_user->Text = L"Пользователь";
			this->button_login_user->UseVisualStyleBackColor = false;
			this->button_login_user->Click += gcnew System::EventHandler(this, &login::button_login_user_Click);
			// 
			// login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ClientSize = System::Drawing::Size(1503, 869);
			this->Controls->Add(this->button_login_user);
			this->Controls->Add(this->button_login_admin);
			this->Controls->Add(this->label_login_in);
			this->Controls->Add(this->label_login_zooname);
			this->Controls->Add(this->button_login_exit);
			this->Controls->Add(this->button_login_info);
			this->Name = L"login";
			this->Text = L"Авторизация";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		/*Обработка кнопки СПРАВКА, после нажатия кнопки происходит открытие формы info.h*/
	private: System::Void button_login_info_Click(System::Object^ sender, System::EventArgs^ e) {
		info^ inf = gcnew info;
		inf->Show();
	}
		   /*Обработка кнопки ВЫХОД, после нажатия кнопки происходит закрытие формы*/
	private: System::Void button_login_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	/*Обработка кнопки АДМИНИСТРАТОР, после нажатия кнопки происходит открытие формы password.h*/
	private: System::Void button_login_admin_Click(System::Object^ sender, System::EventArgs^ e) {
		password^ pass = gcnew password;
		pass->ShowDialog();
		bool next_work = pass->prov_pass;
		/*Если пароль совпал, то открывается форма workform*/
		if (next_work == true)
		{
			database^ admin = gcnew database;
			admin->Show();
			admin->Owner = this;
			this->Hide();
		}
	}
	/*Обработка кнопки ПОЛЬЗОВАТЕЛЬ, после нажатия кнопки происходит открытие формы userform.h*/
	private: System::Void button_login_user_Click(System::Object^ sender, System::EventArgs^ e) {
		database^ user = gcnew database;
		user->ToolStripMenuItem_edit_data->Visible = false;
		user->ToolStripMenuItem_delete->Visible = false;
		user->Show();
		user->Owner = this;
		this->Hide();
	}
	};
}
