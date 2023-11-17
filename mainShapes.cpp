
#include "shapes.h"
#include <cmath>
#include <iostream>
#include <vector>
#include "shapes.h"

int main()
{
  std::vector<Shape*> shapes;
  shapes.push_back(new Circle(10));
  shapes.push_back(new Square(5));
  shapes.push_back(new Rectangle(2,3));
    
  for (int i = 0; i < shapes.size(); ++i)
    {
      std::cout << shapes[i]->description() << std::endl;
      //      std::cout << "area of shape " << i
      //	<< " is " << shapes[i]->area() << std::endl;
    }
  for (Shape* s : shapes)
    {
      delete s;
    }
  shapes.clear();
}




