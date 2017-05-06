#pragma once
#include "MyLine.h"

class MyEngine
{
private:
	MyLine *leftLine;
	MyLine *middleLine;
	MyLine *rightLine;

	int scale;
	int x;
	int y;

public:
	MyEngine(int x, int y, int scale);
	~MyEngine();
	void move(int dx);
	void draw(Windows::UI::Xaml::Controls::Canvas^ canvas);
};

