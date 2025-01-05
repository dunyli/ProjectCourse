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

	/// <summary>
	/// Сводка для editorder
	/// </summary>
	public ref class editorder : public System::Windows::Forms::Form
	{
	public:
		editorder(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	public: void SetValues_comboBox_ordername(List<String^>^ values) {
		comboBox_editorder_name->Items->Clear(); // Очищаем предыдущие значения
		comboBox_editorder_name->Items->AddRange(values->ToArray()); // Добавляем новые значения
	}
	private: System::Windows::Forms::ComboBox^ comboBox_editorder_name;
	private: System::Windows::Forms::Button^ button_editorder_delete;

	/*Строка для изменения*/
	public: int order_delete;
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~editorder()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_editorder_head;
	private: System::Windows::Forms::Label^ label_editorder_name;

	private: System::Windows::Forms::Button^ button_editorder_exit;
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
			this->label_editorder_head = (gcnew System::Windows::Forms::Label());
			this->label_editorder_name = (gcnew System::Windows::Forms::Label());
			this->button_editorder_exit = (gcnew System::Windows::Forms::Button());
			this->comboBox_editorder_name = (gcnew System::Windows::Forms::ComboBox());
			this->button_editorder_delete = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label_editorder_head
			// 
			this->label_editorder_head->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label_editorder_head->AutoSize = true;
			this->label_editorder_head->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_editorder_head->Location = System::Drawing::Point(105, 52);
			this->label_editorder_head->Name = L"label_editorder_head";
			this->label_editorder_head->Size = System::Drawing::Size(1239, 61);
			this->label_editorder_head->TabIndex = 0;
			this->label_editorder_head->Text = L"Для редактирования заказа, заполните все поля";
			// 
			// label_editorder_name
			// 
			this->label_editorder_name->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label_editorder_name->AutoSize = true;
			this->label_editorder_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_editorder_name->Location = System::Drawing::Point(448, 164);
			this->label_editorder_name->Name = L"label_editorder_name";
			this->label_editorder_name->Size = System::Drawing::Size(582, 165);
			this->label_editorder_name->TabIndex = 1;
			this->label_editorder_name->Text = L"Выберите номер заказа:\r\nОбразец: 5. \r\n\r\n";
			// 
			// button_editorder_exit
			// 
			this->button_editorder_exit->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_editorder_exit->BackColor = System::Drawing::Color::SeaShell;
			this->button_editorder_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_editorder_exit->Location = System::Drawing::Point(749, 485);
			this->button_editorder_exit->Name = L"button_editorder_exit";
			this->button_editorder_exit->Size = System::Drawing::Size(380, 130);
			this->button_editorder_exit->TabIndex = 8;
			this->button_editorder_exit->Text = L"Вернуться назад";
			this->button_editorder_exit->UseVisualStyleBackColor = false;
			// 
			// comboBox_editorder_name
			// 
			this->comboBox_editorder_name->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboBox_editorder_name->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_editorder_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBox_editorder_name->FormattingEnabled = true;
			this->comboBox_editorder_name->Location = System::Drawing::Point(192, 319);
			this->comboBox_editorder_name->Name = L"comboBox_editorder_name";
			this->comboBox_editorder_name->Size = System::Drawing::Size(1088, 59);
			this->comboBox_editorder_name->TabIndex = 12;
			// 
			// button_editorder_delete
			// 
			this->button_editorder_delete->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_editorder_delete->BackColor = System::Drawing::Color::SeaShell;
			this->button_editorder_delete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_editorder_delete->Location = System::Drawing::Point(333, 485);
			this->button_editorder_delete->Name = L"button_editorder_delete";
			this->button_editorder_delete->Size = System::Drawing::Size(380, 130);
			this->button_editorder_delete->TabIndex = 23;
			this->button_editorder_delete->Text = L"Удалить заказ";
			this->button_editorder_delete->UseVisualStyleBackColor = false;
			this->button_editorder_delete->Click += gcnew System::EventHandler(this, &editorder::button_editorder_delete_Click);
			// 
			// editorder
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ClientSize = System::Drawing::Size(1496, 828);
			this->Controls->Add(this->button_editorder_delete);
			this->Controls->Add(this->comboBox_editorder_name);
			this->Controls->Add(this->button_editorder_exit);
			this->Controls->Add(this->label_editorder_name);
			this->Controls->Add(this->label_editorder_head);
			this->Name = L"editorder";
			this->Text = L"Редактирование заказа";
			this->Load += gcnew System::EventHandler(this, &editorder::editorder_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	//Обработка кнопки вернуться назад
	private: System::Void button_editorder_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult dialog = MessageBox::Show("Все введенные данные, будут утеряны.\nВы уверены?", "Возвращение к базе данных", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (dialog == System::Windows::Forms::DialogResult::No) return;
		else {
			this->Close();
		}
		order_delete = 0;
	}

	private: System::Void editorder_Load(System::Object^ sender, System::EventArgs^ e) {
		order_delete = 0;
	}

	//Удаление заказа
	private: System::Void button_editorder_delete_Click(System::Object^ sender, System::EventArgs^ e) {
		/*Проверки на правильность введенных данных в текстбокс*/
		if (comboBox_editorder_name->Text == String::Empty) {
			MessageBox::Show("Некорректный выбор номера заказа!", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		String^ resultString = ""; // Строка для хранения символов до точки
		// Перебираем символы строки
		for (int i = 0; i < comboBox_editorder_name->Text->Length; i++) {
			// Если встречаем точку, выходим из цикла
			if (comboBox_editorder_name->Text[i] == '.') {
				break;
			}
			// Добавляем символ к результату
			resultString += comboBox_editorder_name->Text[i];
		}
		order_delete = Convert::ToInt32(resultString);
		MessageBox::Show("Заказ удален успешно!", "Успешно", MessageBoxButtons::OK, MessageBoxIcon::Information);
		this->Close();
	}
};
}
