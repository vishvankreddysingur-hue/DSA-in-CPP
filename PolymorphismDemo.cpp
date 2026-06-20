#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual void draw() {
        cout << "Drawing a shape" << endl;
    }
};

// Derived class 1
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle" << endl;
    }
};

// Derived class 2
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a rectangle" << endl;
    }
};

int main() {
    Shape* s;

    Circle c;
    Rectangle r;

    // Runtime polymorphism
    s = &c;
    s->draw();

    s = &r;
    s->draw();

    return 0;
}
