#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    int position = 3; // Update 3rd element (1-based index)
    int newValue = 35;

    // Update the element
    arr[position - 1] = newValue;

    cout << "Array after update: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
