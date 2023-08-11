#include "Car.h"
#include <iostream>
using namespace std;

Car::Car()
{
  fuel = 0;
  cout << "Car()" << endl;
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

void Car::FillFuel(float amount)
{
  fuel = amount;
}