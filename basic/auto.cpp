#include <iostream>
using namespace std;
void autoFunc() {
  auto i = 10;
  auto j = 5;
  auto sum  = i + j;
  const int x = 10;
  const auto var = x;
  auto &var1 = x;
  auto ptr = &x;

  cout << ptr << endl;
  auto list = {1, 2, 3, 4};
  static auto y = 2;
}