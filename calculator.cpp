#include <iostream>
using namespace std;

int main() {

  double num1, num2;
  char operation;
  cout << "this is a simple calculator program" << endl;

programstart:
  system("clear");
  cout << "enter the first number" << endl;
  cin >> num1;
  cout << "enter the second number" << endl;
  cin >> num2;
  cout << "what operatation do you want to do on these numbers e.g. + - / *"
       << endl;
  cin >> operation;

  switch (operation) {

  case '+':
    cout << "number one plus two is " << num1 + num2 << endl;
    break;
  case '-':
    cout << "number one plus two is " << num1 - num2 << endl;
    break;
  case '*':
    cout << "number one plus two is " << num1 * num2 << endl;
    break;
  case '/':
    if (num1 == 0 || num2 == 0) {
      cout << "you cannot divide by 0" << endl;
      break;
    }
    cout << "number one plus two is " << num1 / num2 << endl;
    break;
  default:
    cout << "unsupported operation" << endl;
  }

  cout << "do you want to add some more numbers? y/n" << endl;
  char decision;
  cin >> decision;
  if (decision == 'y')
    goto programstart;
}
