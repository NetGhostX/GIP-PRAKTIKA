//MyRectangle.cpp
#pragma once
#include "MyCanvas.h"
class MyRectangle
{
protected: 
	unsigned int x1, y1;
	unsigned int x2, y2; 
	MyCanvas* canvas_ptr; 
public:
	MyRectangle(MyCanvas& canvas, unsigned int first_x1, unsigned int first_y1, unsigned int first_x2, unsigned int first_y2) : canvas_ptr(&canvas), x1(first_x1), y1(first_y1), x2(first_x2), y2(first_y2) {}

	unsigned int get_x1() const { return this->x1; }
	unsigned int get_y1() const { return this->y1; }
	unsigned int get_x2() const { return this->x2; }
	unsigned int get_y2() const { return this->y2; }
	MyCanvas* get_canvas_ptr() { return this->canvas_ptr; }

	void set_x1(unsigned int _x1_) { x1 = _x1_; }
	void set_y1(unsigned int _y1_) { y1 = _y1_; }
	void set_x2(unsigned int _x2_) { x2 = _x2_; }
	void set_y2(unsigned int _y2_) { y2 = _y2_; }

	void MyRectangle::draw();
};