#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100], str2[100];

    cout << "Enter first string: ";
    cin.getline(str1, 100);

    cout << "Enter second string: ";
    cin.getline(str2, 100);

    int result = strcmp(str1, str2);

    if (result == 0) {
        cout << "Strings are equal" << endl;
    }
    else if (result < 0) {
        cout << "First string is smaller than second string" << endl;
    }
    else {
        cout << "First string is greater than second string" << endl;
    }

    return 0;
}
