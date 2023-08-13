#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include "Integer.h"
#include "Project.h"

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

void new2DArray()
{
  int data[2][3] = {
    1, 2, 3,
    4, 5, 6,
  };

  int *p1 = new int[3];
  int *p2 = new int[3];

  int **pData = new int *[2];
  pData[0] = p1;
  pData[1] = p2;

  pData[0][1] = 2;

  delete[]p1;
  delete[]p2;

  delete [] pData;
}

void newString()
{
  char *p = new char[5];
  strncpy(p, "C++", 4);
  std::cout << p << std::endl;
  delete[] p;
}

void Display(Integer *p) {
  if(!p) {
    return;
  }
  std::cout << p->GetValue() << std::endl;
}

Integer * GetPointer(int value) {
  Integer *p = new Integer{value};
  return p;
}

void Store(std::unique_ptr<Integer> p) {
  std::cout << "Storing data into a file:" << p->GetValue() << std::endl;
}

void Operator(int value) {
  std::unique_ptr<Integer> p{GetPointer(value)};
  if (p == nullptr) {
    p.reset(new Integer{value});
  }
  p->SetValue(100);
  Display(p.get());
  p.reset(new Integer{});
  *p = __LINE__;
  Display(p.get());
  Store(std::move(p));
}

int main()
{
  // dynamicMemory();
  // newOperator();
  // newString();
  // Operator(5);
  testProject();
}
