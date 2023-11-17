#ifndef _SHAPES_H_
#define _SHAPES_H_

#include <string>

class Shape {
  std::string name;
public:
  Shape(std::string name);
  virtual ~Shape();
  std::string description();
  virtual double area() = 0;
};

class Square : public Shape {
 private:
  double width;
 public:
  Square(double width);
  double area();
};

class Circle : public Shape {
 private:
  double radius;
 public:
  Circle(double radius);
  double area();
};

class Rectangle : public Shape {
 private:
  double width;
  double height;
 public:
  Rectangle(double width,double height);
  double area();
};



#endif
