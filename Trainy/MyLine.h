#pragma once
class MyLine
{
private:
	int x1;
	int y1;
	int x2;
	int y2;
public:
	MyLine(int x1, int y1, int x2, int y2) : x1(x1), y1(y1), x2(x2), y2(y2) {};
	void draw(Windows::UI::Xaml::Controls::Canvas ^canvas);
	void move(int dx);
	~MyLine();
};

