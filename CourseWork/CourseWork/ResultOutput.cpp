#include "ResultOutput.h"
#include "Tree.h"

namespace CourseWork
{
	System::Void ResultOutput::button3_Click(System::Object^ sender, System::EventArgs^ e) {
		msclr::interop::marshal_context context;
		std::string fname = context.marshal_as<std::string>(file_name);
		Tree T = Build_Search(fname);

		this->textBox1->Visible = false;
		this->textBox2->Visible = false;
		this->textBox3->Visible = false;
		this->textBox4->Visible = false;
		this->textBox5->Visible = false;
		this->label1->Text = "Дерево поиска";
		this->label1->Visible = true;
		this->richTextBox1->Visible = true;
		std::string str;
		Print(T, str);
		this->richTextBox1->Text = gcnew System::String(str.c_str());
	}
}

namespace CourseWork
{
	System::Void ResultOutput::button4_Click(System::Object^ sender, System::EventArgs^ e) {
		msclr::interop::marshal_context context;
		std::string fname = context.marshal_as<std::string>(file_name);
		Tree T = Build_AVL(fname);

		this->textBox1->Visible = false;
		this->textBox2->Visible = false;
		this->textBox3->Visible = false;
		this->textBox4->Visible = false;
		this->textBox5->Visible = false;
		this->label1->Text = "АВЛ-Дерево поиска";
		this->label1->Visible = true;
		this->richTextBox1->Visible = true;
		std::string str;
		Print(T, str);
		this->richTextBox1->Text = gcnew System::String(str.c_str());
	}
}
