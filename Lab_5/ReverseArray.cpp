#include <iostream>
using namespace std;

int main() {
    int A[5] = {1, 2, 3, 4, 5};

    cout << "Reversed Array:\n";
    for(int i = 4; i >= 0; i--)
        cout << A[i] << " ";

    return 0;
}
