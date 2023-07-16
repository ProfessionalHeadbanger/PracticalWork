#pragma once
#include "InputFileName.h"
#include "Student.h"

namespace CourseWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class DataInput : public System::Windows::Forms::Form
	{
	public:
		DataInput(InputFileName^ parent)
		{
			InitializeComponent();
			parentForm = parent;
		}
	public:
		void SetFileName(String^ file_name)
		{
			this->file_name = file_name;
		}
	public:
		String^ GetFileName()
		{
			return file_name;
		}
	protected:
		~DataInput()
		{
			if (components)
			{
				delete components;
			}
			Application::Exit();
		}
	private: InputFileName^ parentForm;
	private: System::String^ file_name;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::MaskedTextBox^ textMark1;
	private: System::Windows::Forms::MaskedTextBox^ textMark2;
	private: System::Windows::Forms::MaskedTextBox^ textMark3;
	private: System::Windows::Forms::MaskedTextBox^ textMark4;
	private: System::Windows::Forms::MaskedTextBox^ textMark5;
	private: System::Windows::Forms::MaskedTextBox^ textLastName;
	private: System::Windows::Forms::MaskedTextBox^ textFirstName;
	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->textMark1 = (gcnew System::Windows::Forms::MaskedTextBox());
			   this->textMark2 = (gcnew System::Windows::Forms::MaskedTextBox());
			   this->textMark3 = (gcnew System::Windows::Forms::MaskedTextBox());
			   this->textMark4 = (gcnew System::Windows::Forms::MaskedTextBox());
			   this->textMark5 = (gcnew System::Windows::Forms::MaskedTextBox());
			   this->textLastName = (gcnew System::Windows::Forms::MaskedTextBox());
			   this->textFirstName = (gcnew System::Windows::Forms::MaskedTextBox());
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
			   // button1
			   // 
			   this->button1->Location = System::Drawing::Point(298, 282);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(155, 56);
			   this->button1->TabIndex = 11;
			   this->button1->Text = L"Внести новую запись";
			   this->button1->UseVisualStyleBackColor = true;
			   this->button1->Click += gcnew System::EventHandler(this, &DataInput::button1_Click);
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
			   // textMark1
			   // 
			   this->textMark1->BeepOnError = true;
			   this->textMark1->HidePromptOnLeave = true;
			   this->textMark1->Location = System::Drawing::Point(160, 186);
			   this->textMark1->Mask = L"0";
			   this->textMark1->Name = L"textMark1";
			   this->textMark1->ResetOnSpace = false;
			   this->textMark1->Size = System::Drawing::Size(40, 20);
			   this->textMark1->TabIndex = 13;
			   this->textMark1->ValidatingType = System::Int32::typeid;
			   // 
			   // textMark2
			   // 
			   this->textMark2->BeepOnError = true;
			   this->textMark2->HidePromptOnLeave = true;
			   this->textMark2->Location = System::Drawing::Point(206, 186);
			   this->textMark2->Mask = L"0";
			   this->textMark2->Name = L"textMark2";
			   this->textMark2->ResetOnSpace = false;
			   this->textMark2->Size = System::Drawing::Size(40, 20);
			   this->textMark2->TabIndex = 14;
			   // 
			   // textMark3
			   // 
			   this->textMark3->BeepOnError = true;
			   this->textMark3->HidePromptOnLeave = true;
			   this->textMark3->Location = System::Drawing::Point(252, 186);
			   this->textMark3->Mask = L"0";
			   this->textMark3->Name = L"textMark3";
			   this->textMark3->ResetOnSpace = false;
			   this->textMark3->Size = System::Drawing::Size(40, 20);
			   this->textMark3->TabIndex = 15;
			   // 
			   // textMark4
			   // 
			   this->textMark4->BeepOnError = true;
			   this->textMark4->HidePromptOnLeave = true;
			   this->textMark4->Location = System::Drawing::Point(298, 186);
			   this->textMark4->Mask = L"0";
			   this->textMark4->Name = L"textMark4";
			   this->textMark4->ResetOnSpace = false;
			   this->textMark4->Size = System::Drawing::Size(40, 20);
			   this->textMark4->TabIndex = 16;
			   // 
			   // textMark5
			   // 
			   this->textMark5->BeepOnError = true;
			   this->textMark5->HidePromptOnLeave = true;
			   this->textMark5->Location = System::Drawing::Point(344, 186);
			   this->textMark5->Mask = L"0";
			   this->textMark5->Name = L"textMark5";
			   this->textMark5->ResetOnSpace = false;
			   this->textMark5->Size = System::Drawing::Size(40, 20);
			   this->textMark5->TabIndex = 17;
			   // 
			   // textLastName
			   // 
			   this->textLastName->BeepOnError = true;
			   this->textLastName->HidePromptOnLeave = true;
			   this->textLastName->Location = System::Drawing::Point(160, 81);
			   this->textLastName->Mask = L"LLLLLLLLLLLLLLLLLLLL";
			   this->textLastName->Name = L"textLastName";
			   this->textLastName->PromptChar = ' ';
			   this->textLastName->ResetOnSpace = false;
			   this->textLastName->Size = System::Drawing::Size(250, 20);
			   this->textLastName->TabIndex = 18;
			   // 
			   // textFirstName
			   // 
			   this->textFirstName->BeepOnError = true;
			   this->textFirstName->HidePromptOnLeave = true;
			   this->textFirstName->Location = System::Drawing::Point(160, 130);
			   this->textFirstName->Mask = L"LLLLLLLLLLLLLLLLLLLL";
			   this->textFirstName->Name = L"textFirstName";
			   this->textFirstName->PromptChar = ' ';
			   this->textFirstName->ResetOnSpace = false;
			   this->textFirstName->Size = System::Drawing::Size(250, 20);
			   this->textFirstName->TabIndex = 19;
			   // 
			   // DataInput
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(636, 371);
			   this->Controls->Add(this->textFirstName);
			   this->Controls->Add(this->textLastName);
			   this->Controls->Add(this->textMark5);
			   this->Controls->Add(this->textMark4);
			   this->Controls->Add(this->textMark3);
			   this->Controls->Add(this->textMark2);
			   this->Controls->Add(this->textMark1);
			   this->Controls->Add(this->button2);
			   this->Controls->Add(this->button1);
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
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textLastName->TextLength != 0 && this->textFirstName->TextLength != 0 &&
			this->textMark1->TextLength != 0 && this->textMark2->TextLength != 0 &&
			this->textMark3->TextLength != 0 && this->textMark4->TextLength != 0 &&
			this->textMark5->TextLength != 0)
		{
			if (Int32::Parse(textMark1->Text) >= 2 && Int32::Parse(textMark1->Text) <= 5 &&
				Int32::Parse(textMark2->Text) >= 2 && Int32::Parse(textMark2->Text) <= 5 &&
				Int32::Parse(textMark3->Text) >= 2 && Int32::Parse(textMark3->Text) <= 5 &&
				Int32::Parse(textMark4->Text) >= 2 && Int32::Parse(textMark4->Text) <= 5 &&
				Int32::Parse(textMark5->Text) >= 2 && Int32::Parse(textMark5->Text) <= 5)
			{
				msclr::interop::marshal_context context;
				std::string fname = context.marshal_as<std::string>(file_name);
				std::ofstream file(fname, std::ios_base::app);
				int* marks = new int[5];
				marks[0] = Int32::Parse(textMark1->Text);
				marks[1] = Int32::Parse(textMark2->Text);
				marks[2] = Int32::Parse(textMark3->Text);
				marks[3] = Int32::Parse(textMark4->Text);
				marks[4] = Int32::Parse(textMark5->Text);
				std::string last_name = msclr::interop::marshal_as<std::string>(this->textLastName->Text);
				std::string first_name = msclr::interop::marshal_as<std::string>(this->textFirstName->Text);
				Student tmp(first_name, last_name, marks);
				file << tmp;
				file.close();
				this->textLastName->Clear();
				this->textFirstName->Clear();
				this->textMark1->Clear();
				this->textMark2->Clear();
				this->textMark3->Clear();
				this->textMark4->Clear();
				this->textMark5->Clear();
			}
			else
			{
				MessageBox::Show(L"Значения в полях \"Оценки\" должны быть в диапазоне от 2 до 5", L"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			}

		}
		else
		{
			MessageBox::Show(L"Вы не ввели некоторые данные", L"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}

	};
}