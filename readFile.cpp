#include <fstream>
#include <iostream>
using namespace std;

int main() {
  string line;

  ifstream myFile("myfile.txt");
  while (getline(myFile, line)) {
    cout << line << endl;
  }

  cout << "you have read everything in the file" << endl;

  myFile.close();
  return 0;
}
