#include <stdexcept>

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
  #endif
}

double pythagoreanTheorem(double a, double b) {
  double a2 = a * a;
  double b2 = b * b;
  double c2 = a2 + b2;
  return sqrt(c2);
}
