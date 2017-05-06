#pragma once
#include "MyRect.h"
class MyWheel :
	public MyRect
{
public:
	MyWheel(int x, int y, int scale) : MyRect(x, y, 4 * scale, 4 * scale) {};
	~MyWheel();
};

