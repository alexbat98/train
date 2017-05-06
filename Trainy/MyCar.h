#pragma once

#include<MyBody.h>
#include<MyWheel.h>
#include<MyDoor.h>
#include<MyWindow.h>

class MyCar
{
private:
	int x;
	int y;

	MyBody *body;
	MyDoor *door;

	MyWindow *windows[5];

	MyWheel *wheels[4];

public:
	MyCar(int x, int y, int scale);
	~MyCar();

	void draw(Windows::UI::Xaml::Controls::Canvas^ canvas);
	void move(int dx);
};

