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
  string stream_content;
  ifstream stream(file);
  while (getline (stream, stream_content)) {
    printString(stream_content);
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
