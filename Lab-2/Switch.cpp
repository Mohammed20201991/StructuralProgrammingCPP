// Quiz: Happy Eid al-Fitr
//Sum of Cubes
//Equation:
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//    cout << "Enter a number: ";
//    cin >> n;
//
//    int sum = 0;
//
//    for (int i = 1; i <= n; i++) {
//        sum += i * i * i;  // i^3
//    }
//
//    cout << "Sum of cubes from 1 to " << n << " = " << sum << endl;
//
//    return 0;
//}


// While
//#include <iostream>
//using namespace std;
//
//int main() {
//  int countdown = 3;
//
//  while (countdown > 0) {
//    cout << countdown << "\n";
//    countdown--;
//  }
//
//  cout << "Happy Eid al-Fitr!!\n";
//
//  return 0;
//}


////C++ Nested Loops
//#include <iostream>
//using namespace std;
//
//int main() {
//  // Outer loop
//  for (int i = 1; i <= 2; ++i) {
//    cout << "Outer: " << i << "\n";  // Executes 2 times
//
//    // Inner loop
//    for (int j = 1; j <= 3; ++j) {
//      cout << " Inner: " << j << "\n";  // Executes 6 times (2 * 3)
//    }
//  }
//  return 0;
//}



// Task: Calculate the sum of cubes from 1 to N using a loop.
// Write C++ Program that find the  of squared Summation Number
// form 1^2 to + N^2
//C++ Switch Statements
//Syntax
//switch(expression) {
//  case x:
//    // code block
//    break;
//  case y:
//    // code block
//    break;
//  default:
//    // code block
//}
//
//
//The switch expression is calculated a single time.
//Its result is then compared with the value specified in each case.
//If a match is found, the corresponding block of code runs.
//The break and default statements are optional.



#include <iostream>
using namespace std;
int main() {
    int day = 4;
    //Task to do pass value from keyboard(user)
    switch (day) {
        case 1:
            cout << "Sunday";
            break;
        case 2:
            cout << "Monday";
            break;
        case 3:
            cout << "Tuesday";
            break;
        case 4:
            cout << "Wednesday";
            break;
        case 5:
            cout << "Thursday";
            break;
        case 6:
            cout << "Friday";
            break;
        case 7:
            cout << "Saturday";
            break;
        default:
            cout << "Invalid day number";
            break;
    }
    return 0;
}
// Output: Thursday

// Task Change to Months of the Islamic or Gregorian calendar

//Challenge: Fix the Calculator
//
//Test your understanding of switch and basic arithmetic in C++.
//
//Instructions:
//The program should perform a simple calculation based on the operator entered by the user.
//The code is incomplete.
//Insert the variable op inside the switch().
//Replace each case: with the correct operator symbol ('+', '-', '*', '/').
//Move cout << "Invalid operator"; into a default: case.

// To do 5 Minutes
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;
    char op = '+'; // operator: '+', '-', '*', '/'
    switch () {
        case:
            cout << "Result: " << a + b;
            break;
        case:
            cout << "Result: " << a - b;
            break;
        case:
            cout << "Result: " << a * b;
            break;
        case:
            cout << "Result: " << a / b;
            break;
        cout << "Invalid operator";
    }
    return 0;
}

// Sol
//#include <iostream>
//using namespace std;
//
//int main() {
//    int a = 10, b = 5;
//    char op = '+'; // operator: '+', '-', '*', '/'
//    switch (op) {  // insert the variable 'op' here
//        case '+':  // addition
//            cout << "Result: " << a + b;
//            break;
//        case '-':  // subtraction
//            cout << "Result: " << a - b;
//            break;
//        case '*':  // multiplication
//            cout << "Result: " << a * b;
//            break;
//        case '/':  // division
//            cout << "Result: " << a / b;
//            break;
//        default:   // handles any invalid operator
//            cout << "Invalid operator";
//    }
//    return 0;
//}

//int i = 5;
//int j = i++;
//// In this case, 'j' is assigned the original value of 'i' (which is 5).
//// Then, 'i' is incremented to 6.
//// Result: i = 6, j = 5
