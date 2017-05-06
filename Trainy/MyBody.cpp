#include "pch.h"
#include "MyBody.h"

using namespace Windows::UI::Xaml::Controls;

void MyBody::draw(Windows::UI::Xaml::Controls::Canvas ^canvas)
{
	Windows::UI::Xaml::Shapes::Rectangle ^rect = ref new Windows::UI::Xaml::Shapes::Rectangle();
	rect->Width = this->width;
	rect->Height = this->height;

	rect->Fill = ref new Windows::UI::Xaml::Media::SolidColorBrush(Windows::UI::Colors::SteelBlue);

	Canvas::SetTop(rect, this->y);
	Canvas::SetLeft(rect, this->x);

	//rect->Margin = Windows::UI::Xaml::Thickness(this->x, 0, this->y, 0);

	canvas->Children->Append(rect);
}