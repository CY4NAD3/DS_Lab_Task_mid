#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (target > arr[mid])
        {
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main(){

    int arr[10] = {3, 6, 9, 11, 13, 14, 19, 20, 21, 25};
    int target = 14;
    int result = binarySearch(arr, 10, target);

    if (result != -1){
        cout << "Element found at index: " << result << endl;
    }
    else{
        cout << "Element is not found" << endl;
    }
    
    return 0;
}
