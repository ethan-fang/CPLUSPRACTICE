#include <stdio.h>
#include <stdlib.h>

void dynamicMemory()
{
  int *p = (int *)malloc(5 * sizeof(int));
  *p = 5;
  printf("%d", *p);
  free(p);
  p = NULL;
  free(p);
}

int main()
{
  dynamicMemory();
}