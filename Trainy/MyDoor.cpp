#include "pch.h"
#include "MyDoor.h"

using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Shapes;

void MyDoor::draw(Canvas^ canvas)
{
	if (rect == nullptr) {
		rect = ref new Rectangle();
		canvas->Children->Append(rect);
	}
	rect->Width = this->width;
	rect->Height = this->height;

	Canvas::SetTop(rect, this->y);
	Canvas::SetLeft(rect, this->x);

	rect->Fill = ref new SolidColorBrush(Windows::UI::Colors::LightSteelBlue);

}