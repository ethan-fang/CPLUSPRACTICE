#include <iostream>

// int Add(int x, int y)
// {
//   int sum = x + y;
//   std::cout << "Sum is:" << sum << std::endl;
//   return sum;
// }

int Add(int *a, int *b)
{ // Add two numbers and return the sum
  int sum = *a + *b;
  std::cout << "Sum is:" << sum << std::endl;
  return sum;
}

void AddVal(int *a, int *b, int *result)
{ // Add two numbers and return the sum through the third pointer argument
  *result = *a + *b;
}
void Swap(int *a, int *b)
{ // Swap the value of two integers
  int c = *a;
  *a = *b;
  *b = c;
}
void Factorial(int *a, int *result)
{ // Generate the factorial of a number and return that through the second pointer argument
  if (*a < 0)
  {
    std::cerr << "Factorial is not defined for negative numbers." << std::endl;
    *result = 0; // Set the result to an appropriate value for error case
    return;
  }

  if (*a == 0 || *a == 1)
  {
    *result = 1; // Factorial of 0 or 1 is 1
    return;
  }

  *result = 1;
  for (int i = 2; i <= *a; ++i)
  {
    *result *= i;
  }
}