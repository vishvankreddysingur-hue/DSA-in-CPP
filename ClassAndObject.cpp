#include <iostream>
using namespace std;

// Class definition
class Student {
public:
    string name;
    int age;
    float marks;

    // Function to display details
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    // Object creation
    Student s1;

    // Assigning values
    s1.name = "John";
    s1.age = 20;
    s1.marks = 85.5;

    // Calling member function
    s1.display();

    return 0;
}
