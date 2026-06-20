#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor Called" << endl;
    }

    ~Demo() {
        cout << "Destructor Called" << endl;
    }
};

int main() {
    cout << "Creating object..." << endl;

    Demo obj;

    cout << "Object is going out of scope..." << endl;

    return 0;
}
