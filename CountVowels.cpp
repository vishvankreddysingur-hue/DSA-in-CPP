#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    int count = 0;
    int n = strlen(str);

    for (int i = 0; i < n; i++) {
        char ch = str[i];

        // Convert uppercase to lowercase for simplicity
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        // Check vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }

    cout << "Number of vowels: " << count << endl;

    return 0;
}
