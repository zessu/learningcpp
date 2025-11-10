#include <iostream>
using namespace std;

class Animal {
public:
  string name;
  void makeSound() {
    cout << "you asked animal " << name << " to make a sound" << endl;
  }

  Animal(string name) : name(name) {
    cout << "giving birth to animal constructor being called" << endl;
  }
  virtual ~Animal() { cout << "animal " << name << " is dying" << endl; }
};

class Dog : public Animal {
public:
  void makeSound() { cout << name << " goes woof woof" << endl; }

  Dog(string name) : Animal(name) {
    cout << "you just birthed a dog" << endl;
    ;
  }
  ~Dog() { cout << "you just killed a dog" << endl; }
};

int main() {
  // in this case both constructors and destructors are called as the function
  // is created and deleted
  Dog mydog("leon");
  mydog.makeSound();

  // in this case we have to delete the object manually for the destructor to be
  // called
  Dog *adog = new Dog("kendy");
  delete adog;

  // the parent constructor will not be called unless we declare this virtual.
  // Make sure parent contructor marked as virtual
  Animal *anAnimal = new Dog("miller");

  delete anAnimal;
  return 0;
}
