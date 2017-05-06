#pragma once
#include "MyCar.h"
#include "MyPipe.h"
#include "MyEngine.h"

class MyLoc
{
private:
	MyCar *car;
	MyPipe *pipe;
	MyEngine *leftEngine;
	MyEngine *rightEngine;

public:
	MyLoc(int x, int y, int scale);
	void draw(Windows::UI::Xaml::Controls::Canvas^ canvas);
	void move(int);
	~MyLoc();
};

