#include <stdio.h>
#include <stdlib.h>
#include <iostream>

void dynamicMemory()
{
  int *p = (int *)malloc(5 * sizeof(int));
  *p = 5;
  printf("%d", *p);
  free(p);
  p = NULL;
  free(p);
}

void newOperator() {
  int *p = new int;
  *p = 6;
  std::cout << *p << std::endl;
  delete p;
  p = nullptr;

int main()
{
  // dynamicMemory();
  newOperator();
}