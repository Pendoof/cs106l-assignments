/*
 * CS106L Assignment 3: Make a Class
 * Created by Fabio Ibanez with modifications by Jacob Roberts-Baca.
 */

#include "class.h"
#include <iostream>

void sandbox() {
  // STUDENT TODO: Construct an instance of your class!
  circle a;
  circle b(2.5);
  circle c("red");
  circle d(2.5, "red");

  std::cout << "Circle a: radius = " << a.get_radius() << ", color = " << a.get_color()
            << ", area = " << a.get_area() << "\n";
  std::cout << "Circle b: radius = " << b.get_radius() << "\n";
  b.set_radius(3.0);
  std::cout << "Circle b after setting radius: radius = " << b.get_radius() << "\n";
  std::cout << "Circle c: color = " << c.get_color() << "\n";
  c.set_color("blue");
  std::cout << "Circle c after setting color: color = " << c.get_color() << "\n";
  std::cout << "Circle d: radius = " << d.get_radius() << ", color = " << d.get_color() << "\n";
}