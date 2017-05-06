#include "pch.h"
#include "MyLoc.h"

using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Shapes;

MyLoc::MyLoc(int x, int y, int scale)
{
	car = new MyCar(x, y, scale);
	pipe = new MyPipe(x + 32 * scale, y - 6 * scale, scale);

	leftEngine = new MyEngine(x + 6 * scale, y + 20 * scale, scale);
	rightEngine = new MyEngine(x + 26 * scale, y + 20 * scale, scale);
}

void MyLoc::draw(Canvas^ canvas)
{
	car->draw(canvas);
	pipe->draw(canvas);
	leftEngine->draw(canvas);
	rightEngine->draw(canvas);
}

void MyLoc::move(int dx)
{
	car->move(dx);
	pipe->move(dx);
	leftEngine->move(dx);
	rightEngine->move(dx);
}

MyLoc::~MyLoc()
{
	delete car;
	delete pipe;

	delete leftEngine;
	delete rightEngine;
}
