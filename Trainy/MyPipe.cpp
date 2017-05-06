#include "pch.h"
#include "MyPipe.h"

using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Shapes;

void MyPipe::draw(Canvas^ canvas)
{
	Rectangle ^rect = ref new Rectangle();

	rect->Width = this->width;
	rect->Height = this->height;

	rect->Fill = ref new SolidColorBrush(Windows::UI::Colors::DimGray);

	Canvas::SetTop(rect, this->y);
	Canvas::SetLeft(rect, this->x);

	canvas->Children->Append(rect);
}