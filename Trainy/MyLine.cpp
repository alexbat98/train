#include "pch.h"
#include "MyLine.h"

using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Shapes;

void MyLine::draw(Canvas ^canvas)
{
	Line ^line = ref new Line();
	line->X1 = this->x1;
	line->Y1 = this->y1;
	line->X2 = this->x2;
	line->Y2 = this->y2;

	line->Stroke = ref new SolidColorBrush(Windows::UI::Colors::Black);

	canvas->Children->Append(line);
}

void MyLine::move(int dx)
{
	x1 += dx;
	x2 += dx;
}

MyLine::~MyLine()
{
}
