// C++ program  to take a NXN Square matrix input from user and finding the sum of all the diagonal elements...we need to make sure to consider all values only once.
#include <iostream>
using namespace std;
int main(){

    int n;
    int sum = 0;

   int arr[N][N] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}};


    for (int i = 0; i < n; i++){
        sum += arr[i][i];
    }

    for (int i = 0; i < n; i++){
        if (i != n - 1 - i){
            sum += arr[i][n - 1 - i];
        }
    }

    cout << "Sum of diagonal elements: " << sum << endl;

    return 0;
}
