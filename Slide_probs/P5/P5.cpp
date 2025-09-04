/*
Initialize an integer array of size 10. Print the number of time each element occurs
in the array.

Array_1 = {8, 4, 6, 1, 6, 9, 6, 1, 9, 8}
*/

#include <iostream>
using namespace std;
int main() {
    int Array_1[10] = {8, 4, 6, 1, 6, 9, 6, 1, 9, 8};
    int count[10] = {0}; // Array to store counts of each element
    int size = sizeof(Array_1) / sizeof(Array_1[0]);

    // Count occurrences of each element
    for (int i = 0; i < size; i++) {
        count[Array_1[i]]++;
    }

    // Print the occurrences
    cout << "Occurrences of each element in the array:" << endl;
    for (int i = 0; i < size; i++) {
        if (count[Array_1[i]] > 0) {
            cout << "Element " << Array_1[i] << " occurs " << count[Array_1[i]] << " times." << endl;
            count[Array_1[i]] = 0; // Reset to avoid duplicate prints
        }
    }

    return 0;
}