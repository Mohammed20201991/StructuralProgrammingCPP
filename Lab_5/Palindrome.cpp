#include <iostream>
using namespace std;

int main() {
    int A[5] = {1, 2, 3, 2, 1};
    bool isPalindrome = true;

    for(int i = 0; i < 5 / 2; i++) {
        if(A[i] != A[5 - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    if(isPalindrome)
        cout << "Array is Palindrome";
    else
        cout << "Array is NOT Palindrome";

    return 0;
}
