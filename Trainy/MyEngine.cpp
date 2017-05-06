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
	double phi = asin((double)dx / (2 *scale*scale) );

	int xt = (int)(this->scale * cos(phi));
	int yt = (int)(this->scale * sin(phi));

	x += dx;

	leftLine = new MyLine(x, y, x + xt, y + yt);
	middleLine = new MyLine(x + xt, y + yt, x + xt + 6 * scale, y + yt);
	rightLine = new MyLine(x + 6 * scale, y, x + xt + 6 * scale, y + yt);

	//double xt = 
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
