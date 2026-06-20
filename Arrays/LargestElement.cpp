#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 45, 3, 99, 28, 17};
    int n = sizeof(arr) / sizeof(arr[0]);

    int largest = arr[0];

    // Find largest element
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << "Largest element: " << largest << endl;

    return 0;
}
