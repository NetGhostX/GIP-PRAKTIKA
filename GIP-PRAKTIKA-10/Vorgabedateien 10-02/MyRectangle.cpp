// MyRectangle.cpp

#include "MyRectangle.h"

// Constructor
MyRectangle::MyRectangle(MyCanvas& canvas, unsigned int x1, unsigned int y1, unsigned int x2, unsigned int y2)
  : canvas_ptr(&canvas), x1(x1), y1(y1), x2(x2), y2(y2) {}

// Getters and setters
unsigned int MyRectangle::get_x1() const { return x1; }
void MyRectangle::set_x1(unsigned int x1) { this->x1 = x1; }
unsigned int MyRectangle::get_y1() const { return y1; }
void MyRectangle::set_y1(unsigned int y1) { this->y1 = y1; }
unsigned int MyRectangle::get_x2() const { return x2; }
void MyRectangle::set_x2(unsigned int x2) { this->x2 = x2; }
unsigned int MyRectangle::get_y2() const { return y2; }
void MyRectangle::set_y2(unsigned int y2) { this->y
