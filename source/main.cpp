#include <iostream>
#include <cmath>
#include <fstream>
#include <cstdlib>
using namespace std;

#include "utility.hpp"

int main(int argc, char const *argv[]) {
  char test = '7';
  std::cout << charToInt(test) - 1 << '\n';
  printString(operatingSystemName());
  readFile("test.txt");
  std::cout << pythagoreanTheorem(3, 5) << '\n';
  std::cout << "29: " << isPrimeNumber(29) << " 18: " << isPrimeNumber(18) << '\n';
  return 0;
}
