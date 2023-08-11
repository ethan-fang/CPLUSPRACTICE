#pragma once

class Car
{

private:
  float fuel{2};
  char *p{};
  int arr[5] = {1, 2, 3};
  static int totalCount;

public:
  Car();
  ~Car();
  Car(int amount);
  void AddPassengers() const;
  void FillFuel(float amount);
  void Foo(const Car &car) const;
};