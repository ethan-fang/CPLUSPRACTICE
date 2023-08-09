#include <iostream>
#include "math.h"

using namespace std;

void initiateValues()
{
  int a1;
  int a3(5);
  std::string s1("C++");

  char d1[9] = {'\0'};
  char d3[9] = {'a', 'b', 'c'};

  int b1{};
  // int b2(); // Most vexing parse
  int b3{5}; // Direct initialization

  int b4 = 0;
  char e1[8]{};
  char e2[6]{"Hello"};

  int *p1 = new int{};
  char *p2 = new char[9]{};
  char *p3 = new char[9]{"hello"};

  /**
   * Value initialization => T obj{};
   * Direct initialization => T obj{v};
   * Copy initialization => T obj = v;
   */

  float f{};
  //  int i{f};
}

void addressOperator()
{
  int x = 10;
  int *ptr = &x;
  std::cout << &x << "\n";
  std::cout << ptr << "\n";


  *ptr = 5;
  std::cout << x << "\n";

  int y = *ptr;
  std::cout << y << "\n";

  int *newPtr = nullptr;

  // *newPtr = 10;
  cout << newPtr << "\n";
}

int main()
{
  using namespace std;

  int x = 1;
  int y = 2;
  int result = Add(x, y);
  std::cout << 4 << std::endl;

  addressOperator();
  return 0;
}