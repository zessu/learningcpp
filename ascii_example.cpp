#include <iostream>
#include <string>
using namespace std;

int main() {
  // This will cause a compilation error in C++
  // std::string x = 49;  // ERROR: cannot convert 'int' to 'std::string'

  // However, if you want to assign the ASCII character represented by 49:
  char char_49 =
      49; // This assigns the ASCII character '1' (49 is ASCII code for '1')
  cout << "char char_49 = 49;" << std::endl;
  cout << "char_49 = '" << char_49 << "'" << std::endl;
  cout << "ASCII value of char_49: " << (int)char_49 << std::endl;
  cout << std::endl;

  // To convert a number to string representation, you need to do it explicitly:
  std::string str_num = std::to_string(49);
  cout << "std::string str_num = std::to_string(49);" << std::endl;
  cout << "str_num = \"" << str_num << "\"" << std::endl;
  cout << std::endl;

  // Or assign a character to a string:
  std::string str_char = "1"; // String containing the character '1'
  cout << "std::string str_char = \"1\";" << std::endl;
  cout << "str_char = \"" << str_char << "\"" << std::endl;
  cout << std::endl;

  // Other ASCII examples:
  char char_65 = 65; // ASCII code for 'A'
  cout << "char char_65 = 65;" << std::endl;
  cout << "char_65 = '" << char_65 << "'" << std::endl;
  cout << "ASCII value of char_65: " << (int)char_65 << std::endl;
  cout << std::endl;

  // Important: When you output a char, C++ shows the character, not the number
  std::cout << "Demonstrating the difference when outputting:" << std::endl;
  int num = 49;
  char ch = 49;
  cout << "int num = 49;  ->  num = " << num << std::endl;
  cout << "char ch = 49;  ->  ch = " << ch << std::endl;
  cout << "To see the ASCII value of ch: " << (int)ch << std::endl;

  return 0;
}
