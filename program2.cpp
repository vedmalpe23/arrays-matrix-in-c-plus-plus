//Addition of two matrices
#include<iostream>
using namespace std;

int main()
{
    int R1, C1, R2, C2;
    cout << "Enter rows and columns for the first matrix: ";
    cin >> R1 >> C1;
    cout << "Enter rows and columns for the second matrix: ";
    cin >> R2 >> C2;
    if (R1 != R2 || C1 != C2)
    {
        cout << "ERROR: Matrices must have the same dimensions for addition.\n";
        return 0;
    }
    int matrix1[10][10], matrix2[10][10], sum[10][10];
    cout << "\nEnter elements of the first matrix:\n";
    for (int i = 0; i < R1; i++)
        for (int j = 0; j < C1; j++)
        {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix1[i][j];
        }
    cout << "\nThe first matrix is:\n";
    for (int i = 0; i < R1; i++)
    {
        for (int j = 0; j < C1; j++)
            cout << matrix1[i][j] << " ";
        cout << endl;
    }
    cout << "\nEnter elements of the second matrix:\n";
    for (int i = 0; i < R2; i++)
        for (int j = 0; j < C2; j++)
        {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix2[i][j];
        }
    cout << "\nThe second matrix is:\n";
    for (int i = 0; i < R2; i++)
    {
        for (int j = 0; j < C2; j++)
            cout << matrix2[i][j] << " ";
        cout << endl;
    }
    for (int i = 0; i < R1; i++)
        for (int j = 0; j < C1; j++)
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
    cout << "\nSum of the two matrices is:\n";
    for (int i = 0; i < R1; i++)
    {
        for (int j = 0; j < C1; j++)
            cout << sum[i][j] << " ";
        cout << endl;
    }

    return 0;
}
/*output:
Enter rows and columns for the first matrix: 3 3
Enter rows and columns for the second matrix: 3 3 

Enter elements of the first matrix:
Element [0][0]: 1
Element [0][1]: 2
Element [0][2]: 3
Element [1][0]: 4
Element [1][1]: 5
Element [1][2]: 6
Element [2][0]: 7
Element [2][1]: 8
Element [2][2]: 9

The first matrix is:
1 2 3 
4 5 6 
7 8 9 

Enter elements of the second matrix:
Element [0][0]: 10
Element [0][1]: 11
Element [0][2]: 12
Element [1][0]: 13
Element [1][1]: 14
Element [1][2]: 15
Element [2][0]: 16
Element [2][1]: 17
Element [2][2]: 18

The second matrix is:
10 11 12 
13 14 15 
16 17 18 

Sum of the two matrices is:
11 13 15 
17 19 21 
23 25 27 

*/
