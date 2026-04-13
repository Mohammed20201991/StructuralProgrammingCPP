#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int A[n], B[n], C[n];

    cout << "Enter elements of A:\n";
    for(int i = 0; i < n; i++)
        cin >> A[i];

    cout << "Enter elements of B:\n";
    for(int i = 0; i < n; i++)
        cin >> B[i];

    int choice;
    cout << "\nChoose operation:\n";
    cout << "1. Addition\n2. Subtraction\n3. Multiplication\n";
    cin >> choice;

    switch(choice) {
        case 1: // Addition
            for(int i = 0; i < n; i++)
                C[i] = A[i] + B[i];
            break;

        case 2: // Subtraction
            for(int i = 0; i < n; i++)
                C[i] = A[i] - B[i];
            break;

        case 3: // Multiplication (element-wise)
            for(int i = 0; i < n; i++)
                C[i] = A[i] * B[i];
            break;

        default:
            cout << "Invalid choice!\n";
            return 0;
    }

    cout << "\nResult:\n";
    for(int i = 0; i < n; i++)
        cout << C[i] << " ";

    return 0;
}
