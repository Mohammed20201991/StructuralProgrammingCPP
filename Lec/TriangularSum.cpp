// Exercise 3 — Upper & Lower Triangular Sum
#include <iostream>
using namespace std;

int main() {
    int n = 3;
    int a[3][3];
    int upper = 0, lower = 0;

    cout << "Enter 9 numbers:\n";
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++) {
            if(j > i) upper += a[i][j];
            if(j < i) lower += a[i][j];
        }

    cout << "Upper Sum = " << upper << endl;
    cout << "Lower Sum = " << lower << endl;

    return 0;
}
