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
  return 0;
}
