#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

#include "utility.hpp"

int main(int argc, char const *argv[]) {
  printString("test");
  clear();
  printString("ahoj");
  cube box;
  box.x = 1;
  box.y = 6;
  box.z = 2;
  std::cout << "Volume: " << box.volume() << '\n';
  cube box2;
  box2.x = 7.8;
  box2.y = 5.3;
  box2.z = 3.9;
  std::cout << "Volume 2: " << box2.volume() << '\n';
  pause("test");
  pause("");
  return 0;
}
