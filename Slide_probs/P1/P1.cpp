#include <iostream>
using namespace std;

int Array_1[5] = {10, 20, 30, 40, 50};
int Array_2[8] = {1, 2, 3, 4, 5, 6, 7, 8};

int main() {
    int mergedArray[13];

    // Copy Array_1 into mergedArray
    for (int i = 0; i < 5; i++) {
        mergedArray[i] = Array_1[i];
    }

    // Copy Array_2 into mergedArray
    for (int i = 0; i < 8; i++) {
        mergedArray[i + 5] = Array_2[i];
    }

    // Print in reverse order
    for (int i = 12; i >= 0; i--) {
        cout << mergedArray[i] << " ";
    }

    return 0;
}
