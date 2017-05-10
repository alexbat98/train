#include "pch.h"
#include "MyLine.h"

using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Shapes;

void MyLine::draw(Canvas ^canvas)
{
	if (line == nullptr)
	{
		line = ref new Line();
		canvas->Children->Append(line);
	}
	//Line ^line = ref new Line();
	line->X1 = this->x1;
	line->Y1 = this->y1;
	line->X2 = this->x2;
	line->Y2 = this->y2;

	line->Stroke = ref new SolidColorBrush(Windows::UI::Colors::Black);

	//canvas->Children->Append(line);
}

void MyLine::move(int dx)
{
	x1 += dx;
	x2 += dx;
}

MyLine::~MyLine()
{
}

void MyLine::repositionPreservingLenth(int x1, int y1, int x2, int y2)
{
	double oldLength = sqrt((this->x1 - this->x2)*(this->x1 - this->x2) + (this->y1 - this->y2)*(this->y1 - this->y2));
	double newLength = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));

	//if (abs(oldLength - newLength) < 0.3)
	//{
		this->x1 = x1;
		this->x2 = x2;
		this->y1 = y1;
		this->y2 = y2;
	//}
}