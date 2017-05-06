#pragma once
class MyRect
{
protected:
	int x;
	int y;
	int width;
	int height;
public:
	MyRect(int x, int y, int w, int h);
	MyRect(const MyRect& rect);
	//MyRect operator=(const MyRect& rect);
	virtual void draw(Windows::UI::Xaml::Controls::Canvas^) {};
	void move(int dx) { this->x += dx; };
	~MyRect();
};

