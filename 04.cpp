/**
 * Create a function that takes an integer and returns how many divisors it has
 */

#include <iostream>
#include <string>
#include <cmath>

using namespace std;


int divisor_counter(int num) {
  int num_of_div = 0;
  for (int i = 1; i <= num; i++) {
    if (num % i == 0) {
      cout << i << ", ";
      num_of_div++;
    }
  }
  cout << endl;
  return num_of_div;
}

int main() {
  cout << "Plz give me a number!" << endl;
  int number;
  cin >> number;
  cout << "ALAKAZAAM!!!" << endl;
  cout << "Here are the divisors!" << endl;
  cout << "The number you gave has the total number of " << divisor_counter(number) << " divisors." << endl;
  cout << "YAY" << endl;
  return 0;
}
