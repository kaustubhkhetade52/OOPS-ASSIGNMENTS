#include <iostream>
using namespace std;

class shape {
public:
    virtual double area() = 0;
};

class Circle : public shape {
public:
    double radius;

    Circle(double r) {
        radius = r;
    }

    double area() override {
        return 3.14 * radius * radius;
    }
};

class Rectangle : public shape {
public:
    double length, breadth;

    Rectangle(double l, double b) {
        length = l;
        breadth = b;
    }

    double area() override {
        return length * breadth;
    }
};

class Triangle : public shape {
public:
    double base, height;

    Triangle(double b, double h) {
        base = b;
        height = h;
    }

    double area() override {
        return 0.5 * base * height;
    }
};

int main() {
    Circle c(5);
    Rectangle r(4, 6);
    Triangle t(8, 3);

    shape *s;

    s = &c;
    cout << "Area of Circle: " << s->area() << endl;

    s = &r;
    cout << "Area of Rectangle: " << s->area() << endl;

    s = &t;
    cout << "Area of Triangle: " << s->area() << endl;

    return 0;
}
