#include "InputFileName.h"
#include "DataInput.h"
#include "ResultOutput.h"
#include <Windows.h>
#include <string>
#include <fstream>
#include <msclr\marshal_cppstd.h>

namespace CourseWork
{
	System::Void InputFileName::button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox1->TextLength != 0)
		{
			if (this->textBox1->Text->Contains(".txt"))
			{
				std::string fname = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
				if (this->GetIsNewFile())
				{
					DataInput^ f1 = gcnew DataInput(this);
					f1->SetFileName(this->textBox1->Text);
					std::ofstream file(fname, std::ios::trunc);
					f1->Show();
					this->Hide();
				}
				else
				{
					if (std::ifstream(fname))
					{
						ResultOutput^ f2 = gcnew ResultOutput(this);
						f2->SetFileName(this->textBox1->Text);
						f2->Show();
						this->Hide();
					}
					else
					{
						MessageBox::Show(L"Такой файл не найден", L"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
					}
				}
			}
			else
			{
				MessageBox::Show(L"Файл должен быть .txt", L"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			}
		}
		else
		{
			MessageBox::Show(L"Вы не ввели данные в поле", L"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
}