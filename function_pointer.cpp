#include <iostream>
using namespace std;

void Print(int count, char ch) {
  using namespace std;
  for (int i = 0; i < count; ++i) {
    cout << ch;
  }
  cout << endl;
}

void functionPointer() {
  Print(5, '#');
  void(*pfn) (int, char) = Print;
  (*pfn)(8, '@');
  pfn(5, '+');

}