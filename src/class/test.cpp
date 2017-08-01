#include "test.hpp"


int Rectangle::area(void)
 {
     return width*height;
     
 }



void Rectangle::set_values (int x, int y)
 {
  width = x;
  height = y;
 }