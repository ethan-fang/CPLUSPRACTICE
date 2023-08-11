#include "Car.h"
#include <iostream>
using namespace std;

Car::Car()
{
  cout << "Car()" << fuel << endl;
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

void Foo(const Car &car) {

}

void Car::AddPassengers() {
  Foo(*this);
}

void Car::FillFuel(float amount)
{
  fuel = amount;
}