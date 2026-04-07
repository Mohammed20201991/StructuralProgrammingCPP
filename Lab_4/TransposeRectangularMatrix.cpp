// Transpose means: A[i][j]  →  AT[j][i]
#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    // int A[100][100], T[100][100];
    int A[rows][cols], T[cols][rows];

    // Input matrix
    cout << "Enter matrix elements:\n";
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            cin >> A[i][j];

    // Transpose logic
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            T[j][i] = A[i][j];

    // Print original matrix
    cout << "\nOriginal Matrix:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }

    // Print transpose matrix
    cout << "\nTranspose Matrix:\n";
    for(int i = 0; i < cols; i++) {
        for(int j = 0; j < rows; j++)
            cout << T[i][j] << " ";
        cout << endl;
    }

    return 0;
}
