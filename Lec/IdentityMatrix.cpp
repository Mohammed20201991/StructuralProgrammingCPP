// Exercise 4 — Check Identity Matrix
#include <iostream>
using namespace std;

int main() {
    int n = 3;
    int a[3][3];
    bool identity = true;

    cout << "Enter 9 numbers:\n";
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++) {
            if(i == j && a[i][j] != 1)
                identity = false;
            if(i != j && a[i][j] != 0)
                identity = false;
        }

    if(identity)
        cout << "Identity Matrix";
    else
        cout << "Not Identity Matrix";

    return 0;
}
