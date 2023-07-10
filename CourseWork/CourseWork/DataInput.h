#pragma once
#include "InputFileName.h"

namespace CourseWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для DataInput
	/// </summary>
	public ref class DataInput : public System::Windows::Forms::Form
	{
	public:
		DataInput(InputFileName^ parent)
		{
			InitializeComponent();
			parentForm = parent;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~DataInput()
		{
			if (components)
			{
				delete components;
			}
		}
	private: InputFileName^ parentForm;
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textLastName;
	private: System::Windows::Forms::TextBox^ textFirstName;
	private: System::Windows::Forms::TextBox^ textMark1;
	private: System::Windows::Forms::TextBox^ textMark2;
	private: System::Windows::Forms::TextBox^ textMark3;
	private: System::Windows::Forms::TextBox^ textMark4;
	private: System::Windows::Forms::TextBox^ textMark5;








	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textLastName = (gcnew System::Windows::Forms::TextBox());
			this->textFirstName = (gcnew System::Windows::Forms::TextBox());
			this->textMark1 = (gcnew System::Windows::Forms::TextBox());
			this->textMark2 = (gcnew System::Windows::Forms::TextBox());
			this->textMark3 = (gcnew System::Windows::Forms::TextBox());
			this->textMark4 = (gcnew System::Windows::Forms::TextBox());
			this->textMark5 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ввод данных";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(59, 84);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Фамилия";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(59, 137);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(29, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Имя";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(59, 186);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Оценки";
			// 
			// textLastName
			// 
			this->textLastName->Location = System::Drawing::Point(160, 84);
			this->textLastName->Name = L"textLastName";
			this->textLastName->Size = System::Drawing::Size(250, 20);
			this->textLastName->TabIndex = 4;
			// 
			// textFirstName
			// 
			this->textFirstName->Location = System::Drawing::Point(160, 134);
			this->textFirstName->Name = L"textFirstName";
			this->textFirstName->Size = System::Drawing::Size(250, 20);
			this->textFirstName->TabIndex = 5;
			// 
			// textMark1
			// 
			this->textMark1->Location = System::Drawing::Point(160, 186);
			this->textMark1->Name = L"textMark1";
			this->textMark1->Size = System::Drawing::Size(40, 20);
			this->textMark1->TabIndex = 6;
			// 
			// textMark2
			// 
			this->textMark2->Location = System::Drawing::Point(206, 186);
			this->textMark2->Name = L"textMark2";
			this->textMark2->Size = System::Drawing::Size(40, 20);
			this->textMark2->TabIndex = 7;
			// 
			// textMark3
			// 
			this->textMark3->Location = System::Drawing::Point(252, 186);
			this->textMark3->Name = L"textMark3";
			this->textMark3->Size = System::Drawing::Size(40, 20);
			this->textMark3->TabIndex = 8;
			this->textMark3->TextChanged += gcnew System::EventHandler(this, &DataInput::textBox5_TextChanged);
			// 
			// textMark4
			// 
			this->textMark4->Location = System::Drawing::Point(298, 186);
			this->textMark4->Name = L"textMark4";
			this->textMark4->Size = System::Drawing::Size(40, 20);
			this->textMark4->TabIndex = 9;
			// 
			// textMark5
			// 
			this->textMark5->Location = System::Drawing::Point(344, 186);
			this->textMark5->Name = L"textMark5";
			this->textMark5->Size = System::Drawing::Size(40, 20);
			this->textMark5->TabIndex = 10;
			this->textMark5->TextChanged += gcnew System::EventHandler(this, &DataInput::textBox7_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(298, 282);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(155, 56);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Внести новую запись";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(469, 282);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(155, 56);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Завершить ввод";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &DataInput::button2_Click);
			// 
			// DataInput
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(636, 371);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textMark5);
			this->Controls->Add(this->textMark4);
			this->Controls->Add(this->textMark3);
			this->Controls->Add(this->textMark2);
			this->Controls->Add(this->textMark1);
			this->Controls->Add(this->textFirstName);
			this->Controls->Add(this->textLastName);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"DataInput";
			this->Text = L"Учебная практика";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
