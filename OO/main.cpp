#include "Car.h"
#include <iostream>
using namespace std;

struct Point
{
  int x;
  int y;
};

void DrawLine(Point start, Point end)
{
  std::cout << start.x << std::endl;
}

int main()
{
  const Car car;
  car.AddPassengers();
  return 0;
}