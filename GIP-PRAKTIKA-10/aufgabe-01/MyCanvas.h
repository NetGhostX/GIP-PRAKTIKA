
// MyCanvas.h

#include <string>

class MyCanvas {
public:
    MyCanvas(unsigned int size_x, unsigned int size_y);
    ~MyCanvas();

    MyCanvas(const MyCanvas& other);
    MyCanvas& operator=(const MyCanvas& other);

    unsigned int get_size_x() const;
    unsigned int get_size_y() const;
    char* get_canvas_array_ptr() const;

    void set(unsigned int x, unsigned int y, char c);
    char get(unsigned int x, unsigned int y) const;

    std::string to_string() const;
    void print() const;

private:
    unsigned int size_x;
    unsigned int size_y;
    char* canvas_array_ptr;

    void init();
};