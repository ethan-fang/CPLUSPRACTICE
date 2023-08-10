#include <iostream>
using namespace std;

// #define Square(x) x*x;

inline int Square(int x) {
  return x*x;
}

void inlineFunction() {
  int result = Square(6);
  cout << result << endl;
}