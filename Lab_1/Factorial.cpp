// 2- Find Factorial of a Number
#include <iostream>
using namespace std;

int main() {
    int n;
//    long long factorial = 1;  // skip it for now
    int factorial = 1;

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    cout << "Factorial = " << factorial;

    return 0;
}
