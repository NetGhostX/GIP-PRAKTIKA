#include <string>

class MyCanvas

{
private:
	unsigned int size_x;
	unsigned int size_y;
	char* canvas_array_ptr = new char[size_x * size_y];
public:
	MyCanvas(unsigned int first_size_x, unsigned int second_size_y) : size_x(first_size_x), size_y(second_size_y)
	{
		canvas_array_ptr = new char[first_size_x * second_size_y];
		init(size_x, size_y);
	}
	void init(unsigned int x, unsigned int y) {for (unsigned int i = 0; i < x * y; i++){canvas_array_ptr[i] = '.';}}
	unsigned int get_size_x() const { return size_x; }
	void set_size_x(unsigned int size) { size_x = size; }
	unsigned int get_size_y() const { return size_y; }
	void set_size_y(unsigned int size) { size_y = size; }
	char* get_canvas_array_ptr() { return canvas_array_ptr; }

	void set(unsigned int x, unsigned int y, char c);
	char get(unsigned int x, unsigned int y) const;
	std::string to_string() const;
	void print() const;
	MyCanvas(const MyCanvas& source) : size_x(source.size_x), size_y(source.size_y)
	{
		canvas_array_ptr = new char[size_x * size_y];
		for (unsigned int i = 0; i < size_x * size_y; i++){	canvas_array_ptr[i] = source.canvas_array_ptr[i];}
	}
	MyCanvas& operator=(const MyCanvas& source)
	{
		if (this != &source)
		{
			size_x = source.size_x;
			size_y = source.size_y;
			canvas_array_ptr = new char[size_x * size_y];
			for (unsigned int i = 0; i < size_x * size_y; i++) { canvas_array_ptr[i] = source.canvas_array_ptr[i]; }
		}
		return *this;
	
	}
	~MyCanvas(){delete[] canvas_array_ptr;}
};