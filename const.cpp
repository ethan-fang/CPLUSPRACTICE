#include <iostream>

void Print(const int *ptr)
{

  using namespace std;
  cout << *ptr << endl;
  // *ptr = 700;
}

void PrintRef(const int &ptr)
{

  using namespace std;
  cout << ptr << endl;
  // *ptr = 700;
}

void practiceConst()
{
  const int CHUNK_SIZE = 512;
  const int *const ptr = &CHUNK_SIZE;
  // *ptr = 1;
  Print(ptr);
  PrintRef(*ptr);
  int x = 10;
  Print(&x);
  PrintRef(x);
}