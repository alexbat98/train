#include "pch.h"
#include "MyCar.h"


MyCar::MyCar(int x, int y, int scale)
{
	this->x = x;
	this->y = y;

	body = new MyBody(x, y, scale);
	door = new MyDoor(x, y + 4 * scale, scale);
	
	windows[0] = new MyWindow(x + 8*scale, y + 7*scale, scale);
	windows[1] = new MyWindow(x + 14 * scale, y + 7 * scale, scale);
	windows[2] = new MyWindow(x + 20 * scale, y + 7 * scale, scale);
	windows[3] = new MyWindow(x + 26 * scale, y + 7 * scale, scale);
	windows[4] = new MyWindow(x + 32 * scale, y + 7 * scale, scale);

	wheels[0] = new MyWheel(x + 4 * scale, y + MyBody::BODY_HEIGHT * scale, scale);
	wheels[1] = new MyWheel(x + 10 * scale, y + MyBody::BODY_HEIGHT * scale, scale);
	wheels[2] = new MyWheel(x + 24 * scale, y + MyBody::BODY_HEIGHT * scale, scale);
	wheels[3] = new MyWheel(x + 30 * scale, y + MyBody::BODY_HEIGHT * scale, scale);


}

void MyCar::draw(Windows::UI::Xaml::Controls::Canvas^ canvas)
{
	body->draw(canvas);
	door->draw(canvas);

	for (int i = 0; i < 4; i++)
	{
		windows[i]->draw(canvas);
		wheels[i]->draw(canvas);
	}

	windows[4]->draw(canvas);

}

void MyCar::move(int dx)
{
	body->move(dx);
	door->move(dx);

	for (int i = 0; i < 4; i++)
	{
		windows[i]->move(dx);
		wheels[i]->move(dx);
	}

	windows[4]->move(dx);

}

MyCar::~MyCar()
{
}
