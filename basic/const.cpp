#include <iostream>
using namespace std;
void Print(const int *ptr)
{

  
  cout << *ptr << endl;
  // *ptr = 700;
}

void PrintRef(const int &ptr)
{

  using namespace std;
  cout << ptr << endl;
  // *ptr = 700;
}

void constAssignment()
{
  // Try to modify x1 & x2 and see the compilation output
  int x = 5;
  const int MAX = 12;
  int &ref_x1 = x;
  const int &ref_x2 = x;
  x = 7;
  ref_x1 = 8;
  // ref_x2 = 9;

  // Try to modify the pointer (e.g. ptr1) and the pointee value (e.g. *ptr1)
  const int *ptr1 = &x;
  int *const ptr2 = &x;
  const int *const ptr3 = &x;
  ptr1 = ptr2;
  *ptr2 = 19;
  // *ptr1 = 2;

  // Find which declarations are valid. If invalid, correct the declaration
  const int *ptr5 = &MAX;
  const int *ptr4 = &MAX;

  const int &r1 = ref_x1;
  const int &r2 = ref_x2;

  const int *&p_ref1 = ptr1;
  int *const &p_ref2 = ptr2;
  int *const p_ref3 = ptr2;

  cout << *p_ref2 << " " << *p_ref3 << endl;
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