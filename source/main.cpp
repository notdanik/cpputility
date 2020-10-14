#include <iostream>
#include <cmath>
#include <fstream>
#include <cstdlib>
using namespace std;

#include "utility.hpp"

int main(int argc, char const *argv[]) {
  speed car1;
  speed car2;
  speed car3;

  car1.v = 69;
  car1.t = 5;

  car2.s = 129.7;
  car2.t = 1.2;

  car3.s = 31.7;
  car3.v = 19;

  std::cout << "Car1 S: " << car1.calcS() << '\n';
  std::cout << "Car2 V: " << car2.calcV() << '\n';
  std::cout << "Car3 T: " << car3.calcT() << '\n';

  std::cout << OSNAME << INTEGER_16 << INTEGER_32 << INTEGER_64 << '\n';

  return 0;
}
