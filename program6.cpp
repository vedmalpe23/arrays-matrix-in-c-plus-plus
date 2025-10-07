//Comparison of first row of matrix with the second row
#include <iostream>
using namespace std;
int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    if (rows < 2) {
        cout << "Matrix must have at least 2 rows for comparison.\n";
        return 0;
    }
    int matrix[3][3];
    cout << "\nEnter elements of the matrix:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    cout << "\nMatrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << matrix[i][j] << "\t";
        cout << endl;
    }
    cout << "\nComparison of first row with second row:\n";
    for (int j = 0; j < cols; j++) {
        cout << "Element at column " << j << ": ";
        if (matrix[0][j] == matrix[1][j])
            cout << matrix[0][j] << " == " << matrix[1][j] << endl;
        else if (matrix[0][j] > matrix[1][j])
            cout << matrix[0][j] << " > " << matrix[1][j] << endl;
        else
            cout << matrix[0][j] << " < " << matrix[1][j] << endl;
    }

    return 0;
}
/* output:
Enter number of rows and columns: 2 2

Enter elements of the matrix:
Element [0][0]: 12
Element [0][1]: 23
Element [1][0]: 45
Element [1][1]: 56

Matrix:
12	23	
45	56	

Comparison of first row with second row:
Element at column 0: 12 < 45
Element at column 1: 23 < 56
*/
