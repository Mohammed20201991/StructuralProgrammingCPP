#include <iostream>
using namespace std;

struct Numbers {
    int a, b;
};

int main() {
    Numbers n;

    cout << "Enter two numbers: ";
    cin >> n.a >> n.b;

    cout << "Sum = " << n.a + n.b << endl;
    cout << "Sub = " << n.a - n.b << endl;
    cout << "Mul = " << n.a * n.b << endl;

    return 0;
}
