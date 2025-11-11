
#include <iostream>
#include <vector>
using namespace std;

class Shape {
public:
  virtual void draw() = 0; // pure virtual
  virtual ~Shape() = default;
};

class Circle : public Shape {
public:
  void draw() override { cout << "Drawing Circle\n"; }
  ~Circle() { cout << "destroying circle" << endl; }
};

class Square : public Shape {
public:
  void draw() override { cout << "Drawing Square\n"; }
  ~Square() { cout << "destroying Square" << endl; }
};

int main() {
  vector<Shape *> shapes;

  shapes.push_back(new Circle());
  shapes.push_back(new Square());

  for (auto shape : shapes)
    shape->draw(); // dynamic dispatch — calls Circle/Square draw()

  for (auto shape : shapes)
    delete shape; // cleanup
}
