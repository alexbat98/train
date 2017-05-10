#include "pch.h"
#include "MyEngine.h"
#include <math.h>

using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Shapes;

MyEngine::MyEngine(int x, int y, int scale): x(x), y(y), scale(scale)
{
	leftLine = new MyLine(x, y, x, y + scale);
	middleLine = new MyLine(x, y + scale, x + 6 * scale, y + scale);
	rightLine = new MyLine(x + 6 * scale, y, x + 6 * scale, y + scale);
}

void MyEngine::move(int dx)
{
	x += dx;

	phi += ((double)dx) / ((double)(2 * scale));

	// Защита от переполнения типа данных
	if (phi > 2 * PI)
		phi -= 2 * PI;
	
	double dxt = scale*cos(phi);

	// x^2 + y^2 = r^2
	// Если phi > PI (прошли половину окружности), меняем корня знак на противоположный
	int yt = y + (int)sqrt(scale*scale - dxt*dxt) * (phi > PI ? -1 : 1);
	int xt = (int)dxt + x;


	leftLine->repositionPreservingLenth(x, y, xt, yt);
	middleLine->repositionPreservingLenth(xt, yt, xt + 6 * scale, yt);
	rightLine->repositionPreservingLenth(x + 6 * scale, y, xt + 6 * scale, yt);
}

void MyEngine::draw(Canvas^ canvas)
{
	leftLine->draw(canvas);
	middleLine->draw(canvas);
	rightLine->draw(canvas);
}

MyEngine::~MyEngine()
{
	delete leftLine;
	delete middleLine;
	delete rightLine;
}
