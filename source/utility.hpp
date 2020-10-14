// INCLUDING:
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <stdexcept>
#include <stdlib.h>
using namespace std;

#ifdef OSNAME
  std::cout << "Error: OSNAME was already defined. Exiting..." << '\n';
  exit(EXIT_FAILURE);
#endif

#ifndef INTEGER_16
#define INTEGER_16 65536
#endif

#ifndef INTEGER_32
#define INTEGER_32 4294967296
#endif

#ifndef INTEGER_64
#define INTEGER_64 18446744073709551616
#endif

#ifdef _WIN32
#ifndef OSNAME
#define OSNAME "win32"
#endif
#elif __linux__
#ifndef OSNAME
#define OSNAME "linux"
#endif
#elif _WIN64
#ifndef OSNAME
#define OSNAME "win64"
#endif
#elif __APPLE__ || __MACH__
#ifndef OSNAME
#define OSNAME "macos"
#endif
#elif __unix || __unix__
#ifndef OSNAME
#define OSNAME "unix"
#endif
#elif __FreeBSD__
#ifndef OSNAME
#define OSNAME "fbsd"
#endif
#else
#ifndef OSNAME
#define OSNAME "Error! Unable to get!"
#endif
#endif

extern ostream cerr;

void printString(string write) {
  std::cout << write << '\n';
}

void clear() {
  cout << "\033[2J\033[1;1H";
}

class cube {
public:
  double x;
  double y;
  double z;
  double volume(){
    return x * y * z;
  }
};

void readFile(string file) {
  /*
  string stream_content;
  ifstream stream(file);
  while (getline (stream, stream_content)) {
    printString(stream_content);
  }
  */
  try {
    string stream_content;
    ifstream stream(file);
    while (getline (stream, stream_content)) {
      printString(stream_content);
    }
  } catch (std::exception const& e) {
    std::cout << "Error : " << e.what() << '\n';
  }
}

void pause(string text) {
  if (text.empty()) {
    printf("Press enter to continue...\n");
    cin.get();
  } else {
    std::cout << text << '\n';
    cin.get();
  }
}

int charToInt(char a) {
  return a - '0';
}

string operatingSystemName() {
  #ifdef _WIN32
  return "Windows x32";
  #elif __linux__
  return "Linux";
  #elif _WIN64
  return "Windows x64-86";
  #elif __APPLE__ || __MACH__
  return "MacOS";
  #elif __unix || __unix__
  return "Unix";
  #elif __FreeBSD__
  return "FreeBSD";
  #else
  std::cerr << "Error: Unable to get OS name" << '\n';
  return "Error: Unable to get OS name";
  exit(EXIT_FAILURE);
  #endif
}

double pythagoreanTheorem(double a, double b) {
  double a2 = a * a;
  double b2 = b * b;
  double c2 = a2 + b2;
  return sqrt(c2);
}

bool isPrimeNumber(int n) {
  int i;
  if (n == 0 || n == 1) {
    return false;
  } else {
    for (i = 2; i <= n / 2; ++i) {
      if (n % i == 0) {
        return false;
      }
    }
  }
  return true;
}

class speed {
public:
  double v;
  double s;
  double t;
  double calcV() {
    return s / t;
  }
  double calcS() {
    return v * t;
  }
  double calcT() {
    return s / v;
  }
};
