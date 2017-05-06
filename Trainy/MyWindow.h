#pragma once
#include "MyRect.h"
class MyWindow :
	public MyRect
{
public:
	MyWindow(int x, int y, int scale) : MyRect(x, y, 4 * scale, 5 * scale) {};
	~MyWindow() {};
	void draw(Windows::UI::Xaml::Controls::Canvas^);
};

