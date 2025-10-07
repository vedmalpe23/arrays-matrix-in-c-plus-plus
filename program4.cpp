//Code for diagonal addition
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the square matrix: ";
    cin >> n;

    int matrix[10][10];
    int sum = 0;
    cout << "\nEnter the elements of the matrix:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];             
        sum += matrix[i][n - 1 - i];     
    }
    if (n % 2 == 1)
        sum -= matrix[n / 2][n / 2];

    cout << "\nSum of both diagonals = " << sum << endl;

    return 0;
}
/*output:
Enter the size of the square matrix: 2

Enter the elements of the matrix:
1
2
3
4

Sum of both diagonals = 10
*/
