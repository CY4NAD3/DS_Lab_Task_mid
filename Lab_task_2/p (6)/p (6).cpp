/*/ C++ Program to Generate any odd sized magic square.
 a) Take user input for Dimension Size and it should be Odd Number.
 b) Generate and store the Magic Square in a 2D dynamic array.
 c) Sum any one side or diagonals and show the summation result.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an odd dimension size for the magic square: ";
    cin >> n;

    // Validate input
    if (n % 2 == 0) {
        cout << "Invalid input! Please enter an odd number." << endl;
        return 1;
    }

    // Create a 2D dynamic array
    int** magicSquare = new int*[n];
    for (int i = 0; i < n; i++) {
        magicSquare[i] = new int[n];
    }

    // Generate the magic square
    int row = 0, col = n / 2;
    for (int num = 1; num <= n * n; num++) {
        magicSquare[row][col] = num;
        row--;
        col++;

        if (num % n == 0) {
            row += 2;
            col--;
        } else {
            if (col == n) col -= n;
            if (row < 0) row += n;
        }
    }

    // Display the magic square
    cout << "Magic Square of size " << n << ":" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << magicSquare[i][j] << "\t";
        }
        cout << endl;
    }

    // Sum one side (e.g., first row)
    int sum = 0;
    for (int j = 0; j < n; j++) {
        sum += magicSquare[0][j];
    }
    cout << "Sum of the first row: " << sum << endl;

    // Clean up dynamic memory
    for (int i = 0; i < n; i++) {
        delete[] magicSquare[i];
    }
    delete[] magicSquare;

    return 0;
}
