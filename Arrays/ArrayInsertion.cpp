#include <iostream>
using namespace std;

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5;

    int position = 3;  // Insert at 3rd position (1-based index)
    int value = 25;

    // Shift elements to the right
    for (int i = n; i >= position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new value
    arr[position - 1] = value;
    n++;

    cout << "Array after insertion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
