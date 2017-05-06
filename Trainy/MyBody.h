#pragma once
#include "MyRect.h"
class MyBody :
	public MyRect
{
public:
	static const int BODY_HEIGHT = 18;
	MyBody(int x, int y, int scale) : MyRect(x, y, 38 * scale, BODY_HEIGHT * scale) {};
	void draw(Windows::UI::Xaml::Controls::Canvas ^canvas);
	//void move(int dx) {};
	~MyBody() {};
};

