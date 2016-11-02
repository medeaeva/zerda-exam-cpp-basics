/**
 * Create a function that decides if there is a bigger or equal number than a given number in an array
 * It should take the array, it's length and a number as a parameter, then return a boolean
 */

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool decider(int array[], int l, int num) {
  int larger = 0;
  for (int i = 0; i < l; i++) {
    if (larger < array[i]) {
      larger = array[i];
    }
  }
  if (larger >= num) {
    return true;
  }
  else {
    return false;
  }
}

int main() {
  cout << "plz give me a number!" << endl;
  int number;
  cin >> number;

  int array[] = {3, 2, 4, 6, -1};
  int lenght = sizeof(array)/sizeof(array[0]);

  cout << "Is there a larger or equal number in the array? (1 is yes and 0 is no): " << decider(array, lenght, number) << endl;

  return 0;
}
