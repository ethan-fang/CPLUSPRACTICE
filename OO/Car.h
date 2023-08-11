#pragma once

class Car
{
private:
  float fuel;

public:
  Car();
  ~Car();
  Car(int amount);
  void FillFuel(float amount);
};