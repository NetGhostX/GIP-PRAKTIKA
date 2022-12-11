// MyRectangle.h

#include "MyCanvas.h"

class MyRectangle {
public:
  // Constructor
  MyRectangle(MyCanvas& canvas, unsigned int x1, unsigned int y1, unsigned int x2, unsigned int y2);

  // Getters and setters
  unsigned int get_x1() const;
  void set_x1(unsigned int x1);
  unsigned int get_y1() const;
  void set_y1(unsigned int y1);
  unsigned int get_x2() const;
  void set_x2(unsigned int x2);
  unsigned int get_y2() const;
  void set_y2(unsigned int y2);

  // Method to draw the rectangle
  void draw();

protected:
  // Attributes
  unsigned int x1, y1, x2, y2;
  MyCanvas* canvas_ptr;
};
