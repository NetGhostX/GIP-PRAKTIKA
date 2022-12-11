#include "MyCanvas.h"

class MyRectangle
{
private: 
	unsigned int x1, y1; //linke obere ecke 
	unsigned int x2, y2; //rechte obere ecke
	MyCanvas* canvas_ptr;

public: 
	//constructor
	MyRectangle(MyCanvas& canvas, unsigned int first_x1, unsigned int first_y1, unsigned int first_x2, unsigned int first_y2) : canvas_ptr(&canvas), x1(first_x1), y1(first_y1), x2(first_x2), y2(first_y2) {};
	//getter
	unsigned int get_x1() const { return this->x1; }
	void set_x1(unsigned int set_x1) { x1 = set_x1; }
	unsigned int get_y1() const { return this->y1; }
	void set_y1(unsigned int set_y1) { x1 = set_y1; }
	unsigned int get_x2() const { return this->x2; }
	void set_x2(unsigned int set_x2) { x2 = set_x2; }
	unsigned int get_y2() const { return this->y1; }
	void set_y2(unsigned int set_y2) { x1 = set_y2; }
	MyCanvas* get_canvas_ptr() { return canvas_ptr; }
	void MyRectangle::draw();
};