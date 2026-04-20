#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
  for(int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}

int main() {
  int nums[3] = {1, 2, 3};
  printArray(nums, 3);
  return 0;
}

// To do convert to 2D Array
