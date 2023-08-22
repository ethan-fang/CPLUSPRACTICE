#include <iostream>
#include <memory>
#include <vector>

void ProcessRecords(int count)
{
  // std::unique_ptr<Test> t(new Test);
  if (count < 10)
  {
    throw std::out_of_range("Count should be greater tan 10");
  }

  std::vector<int> p;
  p.reserve(count);
  std::vector<int> pArray;
  pArray.reserve(count);
  // int *pArray = (int *)malloc(count * sizeof(int));
  // if (pArray == nullptr)
  // {
  //   throw std::runtime_error("Failed to allocate memory");
  // }
  for (int i = 0; i < count; ++i)
  {
    pArray.push_back(i);
  }
  // free(pArray);
}

int main()
{
  try
  {
    // ProcessRecords(std::numeric_limits<int>::max());
    ProcessRecords(11);
  }
  catch (std::runtime_error &ex)
  {
    std::cout << ex.what() << std::endl;
  }
  catch (std::out_of_range &ex)
  {
    std::cout << ex.what() << std::endl;
  }
  catch (std::exception &ex)
  {
    std::cout << ex.what() << std::endl;
  }
  return 0;
}