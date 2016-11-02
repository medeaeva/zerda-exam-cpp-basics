/**
 * Create a function that takes a pointer to a float and a float, then it should
 * multiply the value of the pointer with the given float and save the result
 * where the pointer points.
 * Please mutliply the total variable by 5 with it.
 */

#include <iostream>
#include <string>
#include <cmath>

using namespace std;


float multiply_float(float *pointer, float multiplyer) {
  *pointer = *pointer * multiplyer;
  return *pointer;
}

int main() {
  float total = 123.0;
  float *pointer_total = &total;
  float number = 5.0;
  cout << "original number: " << total << endl;
  multiply_float(pointer_total, number);
  cout << "original number multiply by 5 and where the pointer points: " << *pointer_total << endl;
  return 0;
}
