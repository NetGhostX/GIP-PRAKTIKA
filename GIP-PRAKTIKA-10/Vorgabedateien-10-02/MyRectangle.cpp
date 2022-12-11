#include "MyRectangle.h"

void MyRectangle::draw()
{
	canvas_ptr->MyCanvas::draw_rectangle(get_x1(), get_x2(), get_y1(), get_y2());
}