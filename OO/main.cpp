#include "Car.h"
#include <iostream>
using namespace std;

class Integer1 {
	int m_Value{ 0 };
public:
	Integer1() = default;
	//Integer() {
	//	m_Value = 0;
	//}
	Integer1(int value) {
		m_Value = value;
	}
	Integer1(const Integer1 &) = delete; // Prevent copy
	void SetValue(int value) {
		m_Value = value;
	}
	void SetValue(float) = delete; // Prevent assign
};

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