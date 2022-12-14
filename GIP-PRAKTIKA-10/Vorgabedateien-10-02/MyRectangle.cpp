//MyRectangle.cpp 
#include "MyRectangle.h"

void MyRectangle::draw()
{
	MyRectangle::canvas_ptr-> MyCanvas::draw_rectangle(get_x1(), get_y1(), get_x2(), get_y2());
}