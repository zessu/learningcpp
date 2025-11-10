#include <iostream>
using namespace std;

int main() {
  int numbers[3] = {101, 234, 2323};
  int *p = &numbers[0];

  cout << numbers << endl;
  cout << p << endl;
  cout << "both numbers and p store the memory address of the array" << endl;

  cout << *p++ << endl; // return value of p then point to the next one
  cout << *p << endl;
  cout << "incremented to point to the new address and dereferenced that value "
       << endl;

  cout << *++p << endl; // change address to next then dereference
  cout << *p << endl;
  cout << "points to next item then dereferences it" << endl;

  cout << ++*p << endl; // 2023 + 1
  cout << *p << endl;
  cout << "dereferences current value then increases it" << endl;
}
