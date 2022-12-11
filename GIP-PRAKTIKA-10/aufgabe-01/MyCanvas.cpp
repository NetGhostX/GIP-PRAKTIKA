// MyCanvas.cpp

#include "MyCanvas.h"
#include <cstring>

MyCanvas::MyCanvas(unsigned int size_x, unsigned int size_y)
    : size_x(size_x), size_y(size_y), canvas_array_ptr(new char[size_x * size_y])
{
    init();
}

MyCanvas::~MyCanvas()
{
    delete[] canvas_array_ptr;
}

MyCanvas::MyCanvas(const MyCanvas& other)
    : size_x(other.size_x), size_y(other.size_y), canvas_array_ptr(new char[size_x * size_y])
{
    std::memcpy(canvas_array_ptr, other.canvas_array_ptr, size_x * size_y * sizeof(char));
}

MyCanvas& MyCanvas::operator=(const MyCanvas& other)
{
    if (this != &other) {
        size_x = other.size_x;
        size_y = other.size_y;
        delete[] canvas_array_ptr;
        canvas_array_ptr = new char[size_x * size_y];
        std::memcpy(canvas_array_ptr, other.canvas_array_ptr, size_x * size_y * sizeof(char));
    }
    return *this;
}

unsigned int MyCanvas::get_size_x() const
{
    return size_x;
}

unsigned int MyCanvas::get_size_y() const
{
    return size_y;
}

char* MyCanvas::get_canvas_array_ptr() const
{
    return canvas_array_ptr;
}

void MyCanvas::set(unsigned int x, unsigned int y, char c)
{
    canvas_array_ptr[y * size_x + x] = c;
}

char MyCanvas::get(unsigned int x, unsigned int y) const
{
    return canvas_array_ptr[y * size_x + x];
}
std::string MyCanvas::to_string() const
{
    std::string result;
    for (unsigned int y = 0; y < size_y; y++) {
        for (unsigned int x = 0; x < size_x; x++) {
            result += canvas_array_ptr[y * size_x + x];
        }
        result += '\n';
    }
    return result;
}