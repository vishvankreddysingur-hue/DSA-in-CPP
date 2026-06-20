#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    // Default constructor
    Student() {
        name = "Unknown";
        age = 0;
        cout << "Default Constructor Called" << endl;
    }

    // Parameterized constructor
    Student(string n, int a) {
        name = n;
        age = a;
        cout << "Parameterized Constructor Called" << endl;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    // Calling default constructor
    Student s1;
    s1.display();

    cout << endl;

    // Calling parameterized constructor
    Student s2("Alice", 22);
    s2.display();

    return 0;
}
