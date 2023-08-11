#include "Car.h"
#include <iostream>
using namespace std;
int Car::totalCount = 0;
Car::Car():Car(0)
{
}

Car::~Car()
{
  cout << "~Car()" << endl;
}

Car::Car(int amount)
{
  fuel = amount;
  cout << "Car(amount)" << endl;
}

void Car::Foo(const Car &car)const
{
}

void Car::AddPassengers() const
{
  this->Foo(*this);
}

void Car::FillFuel(float amount)
{
  fuel = amount;
}