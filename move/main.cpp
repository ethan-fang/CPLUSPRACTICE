#include <iostream>
#include "Integer.h"
#include "number.h"
// Returns r-value
// int Add(int x, int y)
// {
//   return x + y;
// }
// Return l-value
int &Transform(int &x)
{
  x *= x;
  return x;
}

void Print(int &x)
{
  std::cout << "Print(int&)" << std::endl;
}
void Print(const int &x)
{
  std::cout << "Print(const int&)" << std::endl;
}
void Print(int &&x)
{
  std::cout << "Print(int &&)" << std::endl;
}

Integer Add(int a, int b)
{
  Integer temp(a + b);
  return temp;
}

// void lAndRValue()
// {
//   // x is lvalue
//   int x = 10;

//   // ref is l-value reference
//   int &ref = x;
//   // Transform returns an l-value
//   int &ref2 = Transform(x);
//   // Binds to function that accepts l-value reference
//   Print(x);

//   // rv is r-value reference
//   int &&rv = 8;

//   // Add returns a temporary (r-value)
//   int &&rv2 = Add(3, 5);
//   // Binds to function that accepts a temporary, i.e. r-value reference
//   Print(3);
// }

// Integer Add(const Integer &a, const Integer &b)
// {
//   Integer temp;
//   temp.SetValue(a.GetValue() + b.GetValue());
//   return temp;
// }

Number CreateNumber(int num)
{
  Number n{num};
  return n;
}

void MoveFunc()
{
  Integer a(1);
  // auto b{static_cast<Integer&&>(a)};

  auto b{std::move(a)};
}

int main()
{
  // lAndRValue();

  // Integer a(1), b(3);
  // a.SetValue(Add(a, b).GetValue());

  // Construct
  // Number n1{1};

  // // Copy
  // auto n2{n1};

  // // Copy assignment
  // n2 = n1;

  // // Move constructor
  // auto n3{CreateNumber(3)};

  // // Move assignment
  // n3 = CreateNumber(3);

  // Integer a = Add(3, 5);


  MoveFunc();

  return 0;
}
