#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    // Pure virtual function (abstraction)
    virtual void draw() = 0;
};

// Derived class 1
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle" << endl;
    }
};

// Derived class 2
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Rectangle" << endl;
    }
};

int main() {
    Shape* s;

    Circle c;
    Rectangle r;

    // Using abstraction via base class pointer
    s = &c;
    s->draw();

    s = &r;
    s->draw();

    return 0;
}
