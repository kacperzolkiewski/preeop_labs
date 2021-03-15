#include "Vector2D.h"
#include <math.h>

int Vector2D::num = 0;

Vector2D::Vector2D(double x, double y): _x(x), _y(y) {num++;}

Vector2D::Vector2D(const Vector2D& vector): _x(vector._x), _y(vector._y){
  num++;
  std::cout << "copying";
  vector.print();
}

Vector2D::Vector2D(const Vector2D&& vector): _x(vector._x), _y(vector._y){
  num++;
  std::cout << "moving";
  vector.print();
}

Vector2D Vector2D::fromCarthesian(double x, double y){
  return Vector2D(x, y);
}

Vector2D Vector2D::fromPolar(double r, double phi){
  return Vector2D(r * cos(phi * M_PI / 180), r * sin(phi * M_PI / 180));
}

Vector2D::~Vector2D(){
  num--;
}

void Vector2D::print(std::string name) const{
  std::cout << name << "(" << _x << ", " << _y << ")" << std::endl; 
}

int Vector2D::number_vertices(){
  return Vector2D::num;
}

double Vector2D::dot(const Vector2D& vector) const{
  return _x * vector._x + _y * vector._y;
}

Vector2D Vector2D::add(const Vector2D& vector) const{
  return Vector2D(_x + vector._x, _y + vector._y);
}


