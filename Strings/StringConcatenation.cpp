#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[200], str2[100];

    cout << "Enter first string: ";
    cin.getline(str1, 200);

    cout << "Enter second string: ";
    cin.getline(str2, 100);

    // Concatenate str2 to str1
    strcat(str1, str2);

    cout << "Concatenated string: " << str1 << endl;

    return 0;
}
