#include <iostream>
using namespace std;

int main() {
    int n = 2, m = 2;
    int A[2][2], B[2][2], C[2][2];

    cout << "Enter Matrix A:\n";
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin >> A[i][j];

    cout << "Enter Matrix B:\n";
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin >> B[i][j];

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            C[i][j] = A[i][j] + B[i][j];

    cout << "Result (A+B):\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cout << C[i][j] << " ";
        cout << endl;
    }

    return 0;
}
