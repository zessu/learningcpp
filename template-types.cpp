#include <iostream>
using namespace std;

template <typename T>

T add(T num1, T num2) {
  return num1 + num2;
}

int main() {
  cout << add<int>(10, 5) << endl;
  return 0;
}
