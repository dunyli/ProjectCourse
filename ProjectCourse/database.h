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
			  this->ToolStripMenuItem_add_data = (gcnew System::Windows::Forms::ToolStripMenuItem());
			  this->ToolStripMenuItem_output_data = (gcnew System::Windows::Forms::ToolStripMenuItem());
			  this->ToolStripMenuItem_safe = (gcnew System::Windows::Forms::ToolStripMenuItem());
			  this->ToolStripMenuItem_delet_data = (gcnew System::Windows::Forms::ToolStripMenuItem());
			  this->ToolStripMenuItem_info = (gcnew System::Windows::Forms::ToolStripMenuItem());
			  this->ToolStripMenuItem_exit = (gcnew System::Windows::Forms::ToolStripMenuItem());
			  this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			  this->menuStrip->SuspendLayout();
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
			  this->menuStrip->Size = System::Drawing::Size(2330, 53);
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
			  this->ToolStripMenuItem_search_data->Name = L"ToolStripMenuItem_search_data";
			  this->ToolStripMenuItem_search_data->Size = System::Drawing::Size(333, 49);
			  this->ToolStripMenuItem_search_data->Text = L"Поиск информации";
			  // 
			  // ToolStripMenuItem_add_data
			  // 
			  this->ToolStripMenuItem_add_data->Name = L"ToolStripMenuItem_add_data";
			  this->ToolStripMenuItem_add_data->Size = System::Drawing::Size(338, 49);
			  this->ToolStripMenuItem_add_data->Text = L"Добавление данных";
			  // 
			  // ToolStripMenuItem_output_data
			  // 
			  this->ToolStripMenuItem_output_data->Name = L"ToolStripMenuItem_output_data";
			  this->ToolStripMenuItem_output_data->Size = System::Drawing::Size(252, 49);
			  this->ToolStripMenuItem_output_data->Text = L"Вывод данных";
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
			  this->ToolStripMenuItem_delet_data->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			  this->ToolStripMenuItem_delet_data->Name = L"ToolStripMenuItem_delet_data";
			  this->ToolStripMenuItem_delet_data->Size = System::Drawing::Size(276, 49);
			  this->ToolStripMenuItem_delet_data->Text = L"Удалить данные";
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
			  // 
			  // toolStripMenuItem1
			  // 
			  this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			  this->toolStripMenuItem1->Size = System::Drawing::Size(20, 49);
			  // 
			  // database
			  // 
			  this->AutoScaleDimensions = System::Drawing::SizeF(19, 38);
			  this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			  this->BackColor = System::Drawing::SystemColors::Info;
			  this->ClientSize = System::Drawing::Size(2174, 763);
			  this->Controls->Add(this->menuStrip);
			  this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(204)));
			  this->MainMenuStrip = this->menuStrip;
			  this->Name = L"database";
			  this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			  this->Text = L"База данных";
			  this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &database::database_FormClosing);
			  this->Load += gcnew System::EventHandler(this, &database::database_Load);
			  this->menuStrip->ResumeLayout(false);
			  this->menuStrip->PerformLayout();
			  this->ResumeLayout(false);
			  this->PerformLayout();

		  }

#pragma endregion
	private: System::Void database_Load(System::Object^ sender, System::EventArgs^ e) {
		/*Проверка существования файла с данными*/
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

private: System::Void ToolStripMenuItem_safe_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void ToolStripMenuItem_info_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}