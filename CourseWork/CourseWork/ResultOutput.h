#pragma once
#include "InputFileName.h"
#include "DataInput.h"
#include <list>

namespace CourseWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class ResultOutput : public System::Windows::Forms::Form
	{
	public:
		ResultOutput(InputFileName^ parent)
		{
			InitializeComponent();
			parentForm1 = parent;
		}
		ResultOutput(DataInput^ parent)
		{
			InitializeComponent();
			parentForm2 = parent;
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
	public:
		std::list<Student> initStudents()
		{
			std::list<Student> students;
			msclr::interop::marshal_context context;
			std::string fname = context.marshal_as<std::string>(file_name);
			std::ifstream file_input(fname);
			while (!file_input.eof())
			{
				Student tmp;
				file_input >> tmp;
				students.push_back(tmp);
			}
			students.pop_back();
			return students;
		}
	protected:
		~ResultOutput()
		{
			if (components)
			{
				delete components;
			}
			Application::Exit();
		}
	private: InputFileName^ parentForm1;
	private: DataInput^ parentForm2;
	private: String^ file_name;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->button3 = (gcnew System::Windows::Forms::Button());
			   this->button4 = (gcnew System::Windows::Forms::Button());
			   this->button5 = (gcnew System::Windows::Forms::Button());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			   this->SuspendLayout();
			   // 
			   // button1
			   // 
			   this->button1->Location = System::Drawing::Point(12, 34);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(150, 23);
			   this->button1->TabIndex = 0;
			   this->button1->Text = L"Динамическая цепочка 1";
			   this->button1->UseVisualStyleBackColor = true;
			   this->button1->Click += gcnew System::EventHandler(this, &ResultOutput::button1_Click);
			   // 
			   // button2
			   // 
			   this->button2->Location = System::Drawing::Point(12, 72);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(150, 23);
			   this->button2->TabIndex = 1;
			   this->button2->Text = L"Динамическая цепочка 2";
			   this->button2->UseVisualStyleBackColor = true;
			   this->button2->Click += gcnew System::EventHandler(this, &ResultOutput::button2_Click);
			   // 
			   // button3
			   // 
			   this->button3->Location = System::Drawing::Point(12, 111);
			   this->button3->Name = L"button3";
			   this->button3->Size = System::Drawing::Size(150, 23);
			   this->button3->TabIndex = 2;
			   this->button3->Text = L"Дерево поиска";
			   this->button3->UseVisualStyleBackColor = true;
			   this->button3->Click += gcnew System::EventHandler(this, &ResultOutput::button3_Click);
			   // 
			   // button4
			   // 
			   this->button4->Location = System::Drawing::Point(12, 151);
			   this->button4->Name = L"button4";
			   this->button4->Size = System::Drawing::Size(150, 23);
			   this->button4->TabIndex = 3;
			   this->button4->Text = L"АВЛ-Дерево поиска";
			   this->button4->UseVisualStyleBackColor = true;
			   this->button4->Click += gcnew System::EventHandler(this, &ResultOutput::button4_Click);
			   // 
			   // button5
			   // 
			   this->button5->Location = System::Drawing::Point(12, 190);
			   this->button5->Name = L"button5";
			   this->button5->Size = System::Drawing::Size(150, 23);
			   this->button5->TabIndex = 4;
			   this->button5->Text = L"Список лучших студентов";
			   this->button5->UseVisualStyleBackColor = true;
			   this->button5->Click += gcnew System::EventHandler(this, &ResultOutput::button5_Click);
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label1->Location = System::Drawing::Point(319, 34);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(98, 20);
			   this->label1->TabIndex = 10;
			   this->label1->Text = L"Что вывести";
			   this->label1->Visible = false;
			   // 
			   // richTextBox1
			   // 
			   this->richTextBox1->Location = System::Drawing::Point(212, 72);
			   this->richTextBox1->Name = L"richTextBox1";
			   this->richTextBox1->ReadOnly = true;
			   this->richTextBox1->Size = System::Drawing::Size(323, 214);
			   this->richTextBox1->TabIndex = 11;
			   this->richTextBox1->Text = L"";
			   // 
			   // ResultOutput
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(571, 345);
			   this->Controls->Add(this->richTextBox1);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->textBox5);
			   this->Controls->Add(this->textBox4);
			   this->Controls->Add(this->textBox3);
			   this->Controls->Add(this->textBox2);
			   this->Controls->Add(this->textBox1);
			   this->Controls->Add(this->button5);
			   this->Controls->Add(this->button4);
			   this->Controls->Add(this->button3);
			   this->Controls->Add(this->button2);
			   this->Controls->Add(this->button1);
			   this->Name = L"ResultOutput";
			   this->Text = L"Учебная практика";
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		std::list<Student> students = initStudents();
		std::list<Student> students_output;
		while (!students.empty())
		{
			if (students.front().average_mark == 5.0)
			{
				students_output.push_front(students.front());
			}
			else
			{
				students_output.push_back(students.front());
			}
			students.pop_front();
		}

		std::string str;
		this->label1->Text = "Динамическая цепочка 1";
		this->label1->Visible = true;
		while (!students_output.empty())
		{
			str += students_output.front().last_name + " " + std::to_string(students_output.front().average_mark) + "\n";
			students_output.pop_front();
		}
		this->richTextBox1->Text = gcnew System::String(str.c_str());
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		std::list<Student> students = initStudents();
		std::list<Student>::iterator min_in;
		for (std::list<Student>::iterator i = students.begin(); i != students.end(); i++)
		{
			min_in = i;
			for (std::list<Student>::iterator j = i; j != students.end(); j++)
			{
				if ((*j).average_mark < (*min_in).average_mark)
				{
					min_in = j;
				}
			}
			std::swap(*i, *min_in);
		}
		std::string str;
		this->label1->Text = "Динамическая цепочка 2";
		this->label1->Visible = true;
		while (!students.empty())
		{
			str += students.front().last_name + " " + std::to_string(students.front().average_mark) + "\n";
			students.pop_front();
		}
		this->richTextBox1->Text = gcnew System::String(str.c_str());
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		std::list<Student> students = initStudents();
		int max_ex = 0;
		int count_of_ex;
		for (auto x : students)
		{
			count_of_ex = 0;
			for (int i = 0; i < 5; i++)
				if (x.marks[i] == 5)
					count_of_ex++;
			if (max_ex < count_of_ex)
				max_ex = count_of_ex;
		}
		std::string str;
		for (auto x : students)
		{
			count_of_ex = 0;
			for (int i = 0; i < 5; i++)
				if (x.marks[i] == 5)
					count_of_ex++;
			if (max_ex == count_of_ex && max_ax != 0)
				str += x.last_name + " " + std::to_string(x.marks[0]) + " " + std::to_string(x.marks[1]) + " " + std::to_string(x.marks[2]) + " " + std::to_string(x.marks[3]) + " " + std::to_string(x.marks[4]) + "\n";
		}
		this->label1->Text = "Лучшие студенты";
		this->label1->Visible = true;
		this->richTextBox1->Text = gcnew System::String(str.c_str());
	}
	};
}
