// Example 1: Basic do...while Loop
#include <iostream>
using namespace std;

int main() {
    int number = 1;

    do {
        cout << "Number: " << number << endl;
        number++;
    } while (number <= 5);

    return 0;
}

// Why use do...while here?
// Because the menu should appear at least once, even before checking the exit condition.
// // Example 2: Menu Program (User Input)
// #include <iostream>
// using namespace std;

// int main() {
//     int choice;

//     do {
//         cout << "\nMenu:\n";
//         cout << "1. Say Hello\n";
//         cout << "2. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;

//         if (choice == 1) {
//             cout << "Hello, Student!\n";
//         }

//     } while (choice != 2);

//     cout << "Program Ended.\n";
//     return 0;
// }
