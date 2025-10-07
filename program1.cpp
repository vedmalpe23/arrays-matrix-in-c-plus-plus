//Taking input from user for the matrix and then dsiplaying the matrix
#include<iostream>
using namespace std;
int main()
{
    int arr[3][3];
    int rows,cols,matrix;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    cout<<"Enter the number of columns: ";
    cin>>cols;
    cout<<"Enter elements of the matrix:\n";
    for(int i=0;i<rows;i++)
    {
        for (int j=0;j<cols;j++)
        {
            cout<<"Elements["<<i<<"]["<<j<<"]: ";
            cin>>arr[i][j];
        }
    }
    cout<<"\nMatrix is\n";
    for (int i=0;i<rows;i++)
    {
        for (int j=0;j<cols;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
    
}
/*output:
Enter the number of rows: 3
Enter the number of columns: 3
Enter elements of the matrix:
Elements[0][0]: 12
Elements[0][1]: 3
Elements[0][2]: 5
Elements[1][0]: 6
Elements[1][1]: 7
Elements[1][2]: 8
Elements[2][0]: 9
Elements[2][1]: 12
Elements[2][2]: 13

Matrix is
12 3 5 
6 7 8 
9 12 13 
*/
