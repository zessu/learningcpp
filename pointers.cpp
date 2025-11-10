#include <iostream>
using namespace std;

int main() {
  int studentGrades[5] = {1, 2, 3, 4, 5};
  int *ptrStudentGrades = &studentGrades[0];
  int arrayLength = sizeof(studentGrades) / sizeof(studentGrades[0]);

  for (int count = 0; count < arrayLength; count++) {
    cout << *ptrStudentGrades++ << endl;
  }
}
