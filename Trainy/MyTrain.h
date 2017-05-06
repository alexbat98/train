#pragma once
#include "MyCar.h"
#include "MyLoc.h"
#include "MyLine.h"

class MyTrain
{
private:
	MyLoc *loc;
	MyCar **cars;
	MyLine **conns;
	int count;

public:

	MyTrain(int x, int y, int scale, int count);
	void draw(Windows::UI::Xaml::Controls::Canvas^ canvas);
	void move(int dx);
	~MyTrain();
};

