#include <iostream>

class Shape {
public:
    virtual double getArea() const {
        return 0.0; // Default implementation for shapes
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double getArea() const override {
        return 3.14159265359 * radius * radius; // Area of a circle
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double getArea() const override {
        return length * width; // Area of a rectangle
    }
};

int main() {
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);

    Shape* shapes[] = { &circle, &rectangle };

    for (const auto& shape : shapes) {
        std::cout << "Area: " << shape->getArea() << std::endl;
    }

    return 0;
}
