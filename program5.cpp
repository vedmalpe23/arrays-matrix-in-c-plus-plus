//Transpose of a matrix
#include <iostream>
using namespace std;

int main() 
{
    int rows, cols;
    cout << "Enter number of rows and columns of the matrix: ";
    cin >> rows >> cols;

    int matrix[10][10], transpose[10][10];
    cout << "\nEnter elements of the matrix:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    cout << "\nOriginal Matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << matrix[i][j] << "\t";
        cout << endl;
    }
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            transpose[j][i] = matrix[i][j];
    cout << "\nTranspose of the Matrix:\n";
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++)
            cout << transpose[i][j] << "\t";
        cout << endl;
    }

    return 0;
}
/*output:
Enter number of rows and columns of the matrix: 2
2

Enter elements of the matrix:
Element [0][0]: 1
Element [0][1]: 2
Element [1][0]: 3
Element [1][1]: 4

Original Matrix:
1	2	
3	4	

Transpose of the Matrix:
1	3	
2	4	
*/
