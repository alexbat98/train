#include "pch.h"
#include "MyTrain.h"

MyTrain::MyTrain(int x, int y, int scale, int count)
{
	this->count = count;
	this->loc = new MyLoc(x - 38 * scale, y - 18 * scale, scale);
	this->cars = new MyCar*[count];
	this->conns = new MyLine*[count];

	for (int i = 0; i < count; i++)
	{
		this->cars[i] = new MyCar(x - 38 * scale - (i + 1)*(38 * scale + 5 * scale), y - 18 * scale, scale);
		this->conns[i] = new MyLine(x - (i + 1)*(43 * scale), y, x - (i + 1)*(43 * scale) + 5 * scale, y);
	}
}

void MyTrain::draw(Windows::UI::Xaml::Controls::Canvas ^ canvas)
{
	loc->draw(canvas);

	for (int i = 0; i < count; i++)
	{
		this->cars[i]->draw(canvas);
		this->conns[i]->draw(canvas);
	}
}

void MyTrain::move(int dx)
{
	loc->move(dx);

	for (int i = 0; i < count; i++)
	{
		this->cars[i]->move(dx);
		this->conns[i]->move(dx);
	}
}

MyTrain::~MyTrain()
{
}
