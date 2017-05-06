#include "pch.h"
#include "MyCar.h"


MyCar::MyCar(int x, int y, int scale, bool isHead)
{
	this->x = x;
	this->y = y;

	body = new MyBody(x, y, scale);
	door = new MyDoor(x, y + 4 * scale, scale);
	
	windows[0] = new MyWindow(x + 8*scale, y + 7*scale, scale);
	windows[1] = new MyWindow(x + 15 * scale, y + 7 * scale, scale);
	windows[2] = new MyWindow(x + 22 * scale, y + 7 * scale, scale);
	windows[3] = new MyWindow(x + 29 * scale, y + 7 * scale, scale);
	windows[4] = new MyWindow(x + 36 * scale, y + 7 * scale, scale);

	wheels[0] = new MyWheel(x + 4 * scale, y + MyBody::BODY_HEIGHT * scale, scale);
	wheels[1] = new MyWheel(x + 10 * scale, y + MyBody::BODY_HEIGHT * scale, scale);
	wheels[2] = new MyWheel(x + 20 * scale, y + MyBody::BODY_HEIGHT * scale, scale);
	wheels[3] = new MyWheel(x + 26 * scale, y + MyBody::BODY_HEIGHT * scale, scale);


}


MyCar::~MyCar()
{
}
