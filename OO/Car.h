#pragma once

class Car
{
private:
  float fuel{2};
  char *p{};
  int arr[5] = {1, 2, 3};

public:
  Car();
  ~Car();
  Car(int amount);
  void FillFuel(float amount);
};