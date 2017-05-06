#include "pch.h"
#include "MyWindow.h"

using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Shapes;

void MyWindow::draw(Canvas^ canvas)
{
	Rectangle ^rect = ref new Rectangle();
	rect->Width = this->width;
}