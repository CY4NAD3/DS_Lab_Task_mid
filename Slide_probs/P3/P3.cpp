/*
Initialize TWO integer arrays A and B of different sizes. Make a new array with the
common elements between A and B. Print the new array element(s). If there is no
common element, output "No common element".

Scenario_1:
Array_1 = {1,4,6,3,6,9}
Array_2 = {5,3,7,1,2,6}

Scenario 2:
Array_3 = {1,4,6,3,6,9}
Array_4 = {5, 8, 7, 12, 21, 63}
*/
#include <iostream>
using namespace std;

void findCommonElements(int A[], int sizeA, int B[], int sizeB) {
    int common[100];
    int commonSize = 0;

    for (int i = 0; i < sizeA; i++) {
        for (int j = 0; j < sizeB; j++) {
            if (A[i] == B[j]) {
                // Check if already added to common[]
                bool alreadyExists = false;
                for (int k = 0; k < commonSize; k++) {
                    if (common[k] == A[i]) {
                        alreadyExists = true;
                        break;
                    }
                }
                if (!alreadyExists) {
                    common[commonSize++] = A[i];
                }
            }
        }
    }

    if (commonSize == 0) {
        cout << "No common element" << endl;
    } else {
        cout << "Common elements: ";
        for (int i = 0; i < commonSize; i++) {
            cout << common[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    // Scenario 1
    int Array_1[] = {1, 4, 6, 3, 6, 9};
    int Array_2[] = {5, 3, 7, 1, 2, 6};
    int size1 = sizeof(Array_1) / sizeof(Array_1[0]);
    int size2 = sizeof(Array_2) / sizeof(Array_2[0]);

    cout << "Scenario 1:\n";
    findCommonElements(Array_1, size1, Array_2, size2);

    cout << "\n";

    // Scenario 2
    int Array_3[] = {1, 4, 6, 3, 6, 9};
    int Array_4[] = {5, 8, 7, 12, 21, 63};
    int size3 = sizeof(Array_3) / sizeof(Array_3[0]);
    int size4 = sizeof(Array_4) / sizeof(Array_4[0]);

    cout << "Scenario 2:\n";
    findCommonElements(Array_3, size3, Array_4, size4);

    return 0;
}
