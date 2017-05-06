#pragma once
#include <MyRect.h>

class MyDoor :
	public MyRect
{
public:
	MyDoor(int x, int y, int scale) : MyRect(x, y, 6 * scale, 14 * scale) {};
	void draw(Windows::UI::Xaml::Controls::Canvas^ canvas);
	~MyDoor() {};
};

