#pragma once
#include "StartScreen.h"

namespace CourseWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� InputFileName
	/// </summary>
	public ref class InputFileName : public System::Windows::Forms::Form
	{
	public:
		InputFileName(StartScreen^ parent)
		{
			InitializeComponent();
			parentForm = parent;
		}

	public: void SetTextButton(String^ text)
	{
		button1->Text = text;
	}

	public: void SetIsNewFile(bool choose)
	{
		is_new_file = choose;
	}

	public: bool GetIsNewFile()
	{
		return is_new_file;
	}

	private: bool is_new_file;

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~InputFileName()
		{
			if (components)
			{
				delete components;
			}
		}
	private: StartScreen^ parentForm;
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;


	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(135, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"������� �������� �����";
			this->label1->Click += gcnew System::EventHandler(this, &InputFileName::label1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(322, 70);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"���������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &InputFileName::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(84, 72);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(186, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &InputFileName::textBox1_TextChanged);
			// 
			// InputFileName
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(453, 180);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"InputFileName";
			this->Text = L"������� ��������";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);

	};
}
