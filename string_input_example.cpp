#include <iostream>
#include <string>
using namespace std;

int main() {
  string name;
  cout << "Enter your name: ";
  cin >> name;

  cout << "You entered: " << name << std::endl;
  cout << "Length of the string: " << name.length() << std::endl;

  // Print each character and its ASCII value
  cout << "Character breakdown:" << std::endl;
  for (size_t i = 0; i < name.length(); ++i) {
    cout << "  [" << i << "] '" << name[i] << "' (ASCII: " << (int)name[i]
         << ")" << std::endl;
  }

  return 0;
}
