#include "pch.h"
#include "MyRect.h"


MyRect::MyRect(int x, int y, int w, int h)
{
	this->x = x;
	this->y = y;
	this->width = w;
	this->height = h;
}

MyRect::MyRect(const MyRect & rect)
{
	this->x = rect.x;
	this->y = rect.y;
	this->width = rect.width;
	this->height = rect.height;
}

/*MyRect MyRect::operator=(const MyRect & rect)
{
	MyRect newRect(rect.x, rect.y, rect.width, rect.height);
	return newRect;
}*/

MyRect::~MyRect()
{
}
