#include <iostream>
using namespace std;
const int MAX = 10;
void readMatrix(int mat[MAX][MAX], int rows, int cols);
void displayMatrix(int mat[MAX][MAX], int rows, int cols);
void add(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX], int rows, int cols);
void subtract(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX], int rows, int cols);
void multiply(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX],
              int m, int n, int p);
void transpose(int A[MAX][MAX], int T[MAX][MAX], int rows, int cols);
int main() 
{
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
    int r1, c1, r2, c2;
    int choice;
    cout << "Enter rows and columns for matrix A: ";
    cin >> r1 >> c1;
    cout << "Enter elements of matrix A:\n";
    readMatrix(A, r1, c1);
    cout << "Enter rows and columns for matrix B: ";
    cin >> r2 >> c2;
    cout << "Enter elements of matrix B:\n";
    readMatrix(B, r2, c2);

    do {
        cout << "\n Matrix Operations Menu \n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Transpose (of matrix A)\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                if (r1 == r2 && c1 == c2) 
				{
                    add(A, B, C, r1, c1);
                    cout << "Result of Addition:\n";
                    displayMatrix(C, r1, c1);
                } else {
                    cout << "Addition not possible: dimensions mismatch.\n";
                }
                break;
            case 2:
                if (r1 == r2 && c1 == c2) {
                    subtract(A, B, C, r1, c1);
                    cout << "Result of Subtraction (A - B):\n";
                    displayMatrix(C, r1, c1);
                } else {
                    cout << "Subtraction not possible: dimensions mismatch.\n";
                }
                break;
            case 3:
                if (c1 == r2) {
                    multiply(A, B, C, r1, c1, c2);
                    cout << "Result of Multiplication (A * B):\n";
                    displayMatrix(C, r1, c2);
                } else {
                    cout << "Multiplication not possible: columns of A != rows of B.\n";
                }
                break;
            case 4:
                transpose(A, C, r1, c1);
                cout << "Transpose of matrix A:\n";
                displayMatrix(C, c1, r1);
                break;
            case 5:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 5);

    return 0;
}
void readMatrix(int mat[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> mat[i][j];
        }
    }
}
void displayMatrix(int mat[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << mat[i][j] << "\t";
        }
        cout << "\n";
    }
}
void add(int A[MAX][MAX], int B[MAX][MAX],
         int C[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}
void subtract(int A[MAX][MAX], int B[MAX][MAX],
              int C[MAX][MAX], int rows, int cols) {

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
}
void multiply(int A[MAX][MAX], int B[MAX][MAX],
              int C[MAX][MAX], int m, int n, int p) {

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < p; ++j) {
            C[i][j] = 0;
        }
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < p; ++j) {
            for (int k = 0; k < n; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}
void transpose(int A[MAX][MAX], int T[MAX][MAX],
               int rows, int cols) {

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            T[j][i] = A[i][j];
        }
    }
}
