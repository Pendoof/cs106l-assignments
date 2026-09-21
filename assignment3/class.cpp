#include "class.h"

circle::circle(double r) : radius(r) {}
circle::circle(const std::string& c) : color(c) {}
circle::circle(double r, const std::string& c) : radius(r), color(c) {}

double circle::get_radius() const {
    return radius;
}

void circle::set_radius(double r) {
    if (is_valid_radius(r)) {
        radius = r;
    }
}

std::string circle::get_color() const {
    return color;
}

void circle::set_color(const std::string& c) {
    color = c;
}

double circle::get_area() const {
    return 3.14159 * radius * radius;
}

bool circle::is_valid_radius(double r) {
    return r > 0;
}