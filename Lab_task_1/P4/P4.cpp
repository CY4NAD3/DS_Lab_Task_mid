/*
Initialize an integer array A of size 10. Take an integer as input and print how many
times that integer occurs in

for example,
Array_1 = {8,4,6,1,6,9,1,9,8}
*/
#include <iostream>
using namespace std;

int main() {
    int Array_1[10] = {8, 4, 6, 1, 6, 9, 1, 9, 8};
    int inputNumber;
    int count = 0;

    cout << "Enter an integer: ";
    cin >> inputNumber;

    for (int i = 0; i < 10; i++) {
        if (Array_1[i] == inputNumber) {
            count++;
        }
    }

    if (count > 0) {
        cout << "The number " << inputNumber << " occurs " << count << " times in the array." << endl;
    } else {
        cout << "The number " << inputNumber << " does not occur in the array." << endl;
    }

    return 0;
}