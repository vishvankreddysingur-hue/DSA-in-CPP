#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {10, 45, 3, 99, 28, 99, 17};
    int n = sizeof(arr) / sizeof(arr[0]);

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    // Find largest and second largest
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        cout << "No second largest element exists" << endl;
    } else {
        cout << "Second largest element: " << secondLargest << endl;
    }

    return 0;
}
