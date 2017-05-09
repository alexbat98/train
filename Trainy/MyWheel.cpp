#include "pch.h"
#include "MyWheel.h"

using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Shapes;

void MyWheel::draw(Canvas^ canvas)
{

	if (el == nullptr) {
		el = ref new Ellipse();
		canvas->Children->Append(el);
	}

	el->Width = this->width;
	el->Height = this->height;

	el->Fill = ref new SolidColorBrush(Windows::UI::Colors::RosyBrown);

	Canvas::SetTop(el, this->y);
	Canvas::SetLeft(el, this->x);

}
