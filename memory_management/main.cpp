#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

void dynamicMemory()
{
  int *p = (int *)malloc(5 * sizeof(int));
  *p = 5;
  printf("%d", *p);
  free(p);
  p = NULL;
  free(p);
}

void newOperator()
{
  int *p = new int;
  *p = 6;
  std::cout << *p << std::endl;
  delete p;
  p = nullptr;
}

void newArray()
{
  int *p = new int[5];
  for (int i = 0; i < 5; ++i)
  {
    p[i] = i;
  }
  delete[] p;
}

void newString()
{
  char *p = new char[5];
  strncpy(p, "C++", 4);
  std::cout << p << std::endl;
  delete[] p;
}

int main()
{
  // dynamicMemory();
  // newOperator();
  newString();
}