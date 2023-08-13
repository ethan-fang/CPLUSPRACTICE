#include <iostream>

enum class Color: int{RED=5, GREEN, BLUE};

enum class TrafficLight: char{RED = 'c', GREEN, BLUE};

void FillColor(Color color) {
  if (color == Color::RED) {
    std::cout << "RED" << std::endl;
  }
  if (color == Color::GREEN) {
    std::cout << "GREEN" << std::endl;
  }
  if (color == Color::BLUE) {
    std::cout << "BLUE" << std::endl;
  }
}

int main() {
  Color c = Color::RED;
  FillColor(c);
  FillColor(Color::GREEN);
  FillColor(static_cast<Color>(5));
}