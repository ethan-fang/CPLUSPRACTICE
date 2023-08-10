#include <iostream>
using namespace std;
void rangeFunc()
{
  int arr[] = {1, 2, 3, 4, 5};
  for (int i = 0; i < 5; i++)
  {
    cout << arr[i] << " ";
  }

  for (const auto &x : arr)
  {
    cout << x << " ";
  }

  for (auto x : {1, 2, 3})
  {
    cout << x << " ";
  }

  // int *beg = std::begin(arr);
  // int *end = std::end(arr);

  auto &&range = arr;
  auto begin = std::begin(range);
  auto end = std::end(range);
  while (begin != end) {
    cout << *begin << endl;
    ++begin;
  }
}