#include "pch.h"
#include "MyBody.h"

using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Shapes;

void MyBody::draw(Windows::UI::Xaml::Controls::Canvas ^canvas)
{
	if (rect == nullptr) {
		rect = ref new Rectangle();
		canvas->Children->Append(rect);
	}
	rect->Width = this->width;
	rect->Height = this->height;

	rect->Fill = ref new Windows::UI::Xaml::Media::SolidColorBrush(Windows::UI::Colors::SteelBlue);

	Canvas::SetTop(rect, this->y);
	Canvas::SetLeft(rect, this->x);
}