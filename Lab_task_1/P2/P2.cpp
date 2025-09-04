#include <iostream>
using namespace std;

/*
Initialize an array. Size should be more than FIVE. Write a program to change the
array in such a way so that there cannot be any duplicate element in the array
anymore. Print the changed array, the initialized array already had no duplicate
elements from the beginning, output a message 'Array already unique';
*/

void removeDuplicates(int arr[], int& size) {
    bool isDuplicate = false;

    // Check for duplicates
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (isDuplicate) break;
    }

    if (!isDuplicate) {
        cout << "Array already unique" << endl;
        return;
    }

    // Remove duplicates
    int newArr[100]; // Temp array
    int newSize = 0;

    for (int i = 0; i < size; i++) {
        bool found = false;
        for (int j = 0; j < newSize; j++) {
            if (arr[i] == newArr[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            newArr[newSize++] = arr[i];
        }
    }

    // Print the updated array
    cout << "Changed array without duplicates: ";
    for (int i = 0; i < newSize; i++) {
        cout << newArr[i] << " ";
    }
    cout << endl;

    // Update original array size (optional)
    size = newSize;
}

int main() {
    // Scenario 1
    int Array_1[6] = {1, 6, 4, 6, 9, 1};
    int size1 = 6;
    cout << "Scenario 1:\n";
    removeDuplicates(Array_1, size1);

    cout << "\n";

    // Scenario 2
    int Array_2[6] = {1, 4, 5, 3, 6, 9};
    int size2 = 6;
    cout << "Scenario 2:\n";
    removeDuplicates(Array_2, size2);

    return 0;
}