#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    int start = 0;
    int end = strlen(str) - 1;

    bool isPalindrome = true;

    // Check palindrome
    while (start < end) {
        if (str[start] != str[end]) {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome)
        cout << "String is a palindrome" << endl;
    else
        cout << "String is not a palindrome" << endl;

    return 0;
}
