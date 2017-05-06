#pragma once
#include "MyRect.h"
class MyPipe :
	public MyRect
{
public:
	MyPipe(int x, int y, int scale) : MyRect(x, y, 4 * scale, 6 * scale) {};
	~MyPipe();
};

