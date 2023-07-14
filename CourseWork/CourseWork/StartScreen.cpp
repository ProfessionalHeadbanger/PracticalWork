#include "StartScreen.h"
#include "InputFileName.h"

using namespace CourseWork;

namespace CourseWork
{
	System::Void StartScreen::button1_Click(System::Object^ sender, System::EventArgs^ e) {
		InputFileName^ f1 = gcnew InputFileName(this);
		f1->SetTextButton("Создать");
		f1->SetIsNewFile(true);
		f1->Show();
		this->Hide();
	}
}

namespace CourseWork
{
	System::Void StartScreen::button2_Click(System::Object^ sender, System::EventArgs^ e) {
		InputFileName^ f2 = gcnew InputFileName(this);
		f2->SetTextButton("Открыть");
		f2->SetIsNewFile(false);
		f2->Show();
		this->Hide();
	}
}

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew StartScreen);
	return 0;
}