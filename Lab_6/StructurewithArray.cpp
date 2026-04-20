// Structure with Array
// Before using array
#include <iostream>
using namespace std;

// Define structure
struct Employee {
  string name;
  int id;
  float salary;
};

int main() {

  // Multiple variables from same structure
  Employee e1, e2;

  // Assign values
  e1.name = "Ahmed";
  e1.id = 101;
  e1.salary = 750.5;

  e2.name = "Lina";
  e2.id = 102;
  e2.salary = 820.0;

  // Print
  cout << e1.name << " " << e1.id << " " << e1.salary << endl;
  cout << e2.name << " " << e2.id << " " << e2.salary << endl;

  return 0;
}

// ************************ After using array 
// #include <iostream>
// using namespace std;

// // Define structure
// struct Student {
//   string name;
//   int age;
// };

// int main() {

//   // Array of structures
//   Student students[3];

//   // Assign values using loop
//   for(int i = 0; i < 3; i++) {
//     cout << "Enter name and age for student " << i+1 << ": ";
//     cin >> students[i].name >> students[i].age;
//   }

//   // Print values
//   cout << "\nStudent Data:\n";
//   for(int i = 0; i < 3; i++) {
//     cout << students[i].name << " - " << students[i].age << endl;
//   }

//   return 0;
// }
