#include <iostream>
using namespace std;

struct Person {
  string name;
  int age;
};

int main() {
  Person p1 = {"Sara", 25};

  cout << p1.name << endl;
  cout << p1.age << endl;

  return 0;
}
