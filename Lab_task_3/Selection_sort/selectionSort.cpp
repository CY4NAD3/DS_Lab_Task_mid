#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for (int i = 0; i < n - 1; i++){
        int s = i;
        // Find the index of the smallest element in the unsorted part
        for (int j = i + 1; j < n; j++){
            if (arr[j] < arr[s]){
                s = j;
            }
        }
        swap(arr[i], arr[s]);
    }
}

int main(){
    int n = 5;
    int arr[5] = {2, 4, 8, 5, 1};

    selectionSort(arr, n);

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    cout << "Sorted array using Selection Sort: ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
