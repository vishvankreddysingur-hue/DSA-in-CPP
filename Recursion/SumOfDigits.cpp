#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    // Handle negative numbers
    n = abs(n);

    while (n > 0) {
        sum += n % 10;  // extract last digit
        n /= 10;        // remove last digit
    }

    cout << "Sum of digits: " << sum << endl;

    return 0;
}
