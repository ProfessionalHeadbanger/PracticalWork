#include "DataInput.h"
#include "ResultOutput.h"

namespace CourseWork
{
	System::Void DataInput::button2_Click(System::Object^ sender, System::EventArgs^ e) {
		ResultOutput^ f2 = gcnew ResultOutput(this);
		f2->SetFileName(this->GetFileName());
		f2->Show();
		this->Hide();
	}
}