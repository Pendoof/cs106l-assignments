#pragma once
#include <string>

class circle {
    public:
        circle() = default;
        circle(double r);
        circle(const std::string& c);
        circle(double r, const std::string& c);

        double get_radius() const;
        void set_radius(double r);
        std::string get_color() const;
        void set_color(const std::string& c);
        double get_area() const;

      private:
        double radius = 1.0;
        std::string color = "transparent";
        bool is_valid_radius(double r);
};