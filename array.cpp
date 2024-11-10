#include <iostream>
using namespace std;

int main() {
    int array[] = {34, 65, 8, 7, 29, 0};
    int target = 2;
    bool found = false;

    // Get the size of the array
    int size = sizeof(array) / sizeof(array[0]);

    // Linear search using a for loop
    for (int i = 0; i < size; i++) {
        if (array[i] == target) {
            found = true;
            break; // Exit the loop if the target is found
        }
    }

    // Output the result
    if (found) {
        cout << "Element found" << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}