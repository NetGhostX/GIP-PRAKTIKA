#include "MyCanvas.h"
#include <iostream>
#include <string>
class MyCanvas;

void MyCanvas::set(unsigned int x, unsigned int y, unsigned int c)
{
	canvas_array_ptr[y * get_size_x() + x] = c;

}
char MyCanvas::get(unsigned int x, unsigned int y) const
{
	return canvas_array_ptr[y * get_size_x() + x];
}
std::string MyCanvas::to_string() const
{
	std::string result;
	for (unsigned int y = 0; y < size_y; y++)
	{
		for (unsigned int x = 0; x < size_x; x++) {
			result += get(x, y);
		}
		result += '\n';
	}

	return result;
}
void MyCanvas::print() const
{
	std::cout << MyCanvas::to_string() << std::endl;
}
void MyCanvas::draw_rectangle(unsigned int x1, unsigned int y1, unsigned int x2, unsigned int y2)
{
	for (unsigned int sizeY = 0; sizeY < y2-y1; sizeY++)
	{
		for (unsigned int sizeX = 0; sizeX < x2 - x1; sizeX++)
		{
			canvas_array_ptr[(sizeY + y1) * get_size_x() + (x1 + 1)] = '#';
		}
	}

}