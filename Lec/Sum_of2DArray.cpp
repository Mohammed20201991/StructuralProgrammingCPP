// Compute Sum of 2D Array
#include <iostream>
using namespace std;

int main() {
    int items[2][3];
    int sum = 0;

    cout << "Enter 6 numbers:\n";
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 3; j++)
            cin >> items[i][j];

    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 3; j++)
            sum += items[i][j];

    cout << "Sum = " << sum;

    return 0;
}
