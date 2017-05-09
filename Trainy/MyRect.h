#pragma once
using namespace Windows::UI::Xaml::Shapes;

class MyRect
{
protected:
	int x;
	int y;
	int width;
	int height;
	Rectangle ^rect;
	Ellipse ^el;
public:
	MyRect(int x, int y, int w, int h);
	MyRect(const MyRect& rect);
	//MyRect operator=(const MyRect& rect);
	virtual void draw(Windows::UI::Xaml::Controls::Canvas^) {};
	void move(int dx) { this->x += dx; };
	~MyRect();
};

