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

void new2DArray()
{
  int data[2][3] = {
    1, 2, 3,
    4, 5, 6,
  }

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

int main()
{
  // dynamicMemory();
  // newOperator();
  newString();
}