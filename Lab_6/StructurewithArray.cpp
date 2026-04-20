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

