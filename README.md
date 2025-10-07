# 2-D Arrays Matrices

## Aim:

To study and implement C++ 2D Array-Matrices.

### Theory:

A 2D array (two-dimensional array) in C++ is an array of arrays that can be visualized as a matrix of rows and columns. 
It is used to store data in a tabular format, such as a grid, making it useful for mathematical operations like matrix addition, subtraction, and multiplication.

2D arrays are widely used in:

- Scientific computations

- Game development (for grids, boards)

- Image processing

- Matrix operations

## 1. Algorithm: Addition of two matrices

**Step 1**: Start

**Step 2**: Declare variables R1, C1, R2, C2 to store rows and columns of both matrices

**Step 3**: Prompt user to enter the number of rows and columns for the first matrix, and read R1, C1

**Step 4**: Prompt user to enter the number of rows and columns for the second matrix, and read R2, C2

**Step 5**: Check if matrix dimensions are the same:

- If R1 ≠ R2 or C1 ≠ C2, print error and terminate the program

**Step 6**: Declare three 2D arrays:

- matrix1[R1][C1], matrix2[R2][C2], sum[R1][C1]

**Step 7**: Input elements for the first matrix using nested loops

**Step 8**: Display the first matrix

**Step 9**: Input elements for the second matrix using nested loops

**Step 10**: Display the second matrix

**Step 11**: Perform matrix addition:

- For each element [i][j], calculate

sum[i][j] = matrix1[i][j] + matrix2[i][j]

**Step 12**: Display the resulting sum matrix

**Step 13**: End

## 2. Algorithm: Multiplication of two matrices

**Step 1** : Input Matrix Dimensions

- Prompt the user to enter the number of rows and columns for the first matrix → R1, C1.

- Prompt the user to enter the number of rows and columns for the second matrix → R2, C2.

**Step 2** : Check Matrix Multiplication Validity

If C1 != R2, then:

- Output an error message: "Matrices cannot be multiplied." and terminate the program.

**Step 3** : Create a 2D array matrix1[R1][C1] and input elements of first matrix.

**Step 4** : Display First Matrix

- Print the matrix in row-wise format using nested loops.

**Step 5** : Create a 2D array matrix2[R2][C2] and input elements of Second Matrix.

**Step 6** : Display Second Matrix

- Print the matrix in row-wise format using nested loops.

**Step 7** : Initialize Result Matrix. Create a 2D array product[R1][C2] to store the result.

- Initialize all elements of product to 0.

**Step 8** : Perform Matrix Multiplication

- For each row i from 0 to R1 - 1:

- For each column j from 0 to C2 - 1:

- For each k from 0 to C1 - 1: product[i][j] += matrix1[i][k] * matrix2[k][j]

**Step 9** : Display Result Matrix

- Print the product matrix in row-wise format.

## 3. Algorithm: Diagonal addition

**Step 1** : Start

**Step 2** : Input the size n of the square matrix

**Step 3** : Declare a 2D array matrix[n][n]

**Step 4** : Initialize sum = 0

**Step 5** : For i = 0 to n - 1:
- For j = 0 to n - 1:
- Input matrix[i][j]

**Step 6** : For i = 0 to n - 1:
- Add matrix[i][i] to sum  // Primary diagonal
- Add matrix[i][n - 1 - i] to sum  // Secondary diagonal

**Step 7** : If n is odd:
- Subtract matrix[n / 2][n / 2] from sum  // Remove duplicated center element

**Step 8** : Output sum as the sum of both diagonals

**Step 9** : End the program.

## 4. Algorithm: Transpose of a matrix

**Step 1** : Start

**Step 2** : Input number of rows and columns → rows, cols

**Step 3** : Declare a 2D array matrix[rows][cols] and another 2D array transpose[cols][rows]

**Step 4** : Input matrix elements:
- For i = 0 to rows - 1:
- For j = 0 to cols - 1:
- Input matrix[i][j]

**Step 5** : Display original matrix:
- For i = 0 to rows - 1:
- For j = 0 to cols - 1:
- Print matrix[i][j]

**Step 6** : Compute transpose:
- For i = 0 to rows - 1:
- For j = 0 to cols - 1:
- Set transpose[j][i] = matrix[i][j]

**Step 7** : Display transpose matrix:
- For i = 0 to cols - 1:
- For j = 0 to rows - 1:
- Print transpose[i][j]

**Step 8** : End the program.

## Conclusion:

In this experiment, we studied and implemented the concept of 2D arrays in C++, specifically focusing on their application in matrix operations. Through programs like matrix multiplication, diagonal addition, and matrix transpose, we gained a clear understanding of how to:

- Declare and initialize 2D arrays

- Input and display matrix elements

- Perform various operations by accessing elements using row and column indices

Thus, the experiment successfully demonstrated the practical use of 2D arrays for matrix operations in C++.# Arrays-Matrix-in-C-plus-plus.# arrays-matrix-in-c-plus-plus
