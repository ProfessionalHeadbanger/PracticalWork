#include "InputFileName.h"
#include "DataInput.h"
#include "ResultOutput.h"

namespace CourseWork
{
	System::Void InputFileName::button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->GetIsNewFile())
		{
			DataInput^ f1 = gcnew DataInput(this);
			f1->Show();
			this->Hide();
		}
		else
		{
			ResultOutput^ f2 = gcnew ResultOutput(this);
			f2->Show();
			this->Hide();
		}
	}
}