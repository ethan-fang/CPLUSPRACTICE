#include <iostream>

namespace Avg {
  float Calculate(float x, float y) {
    return (x + y) / 2;
  }
}

namespace Basic {
  float Calculate(float x, float y) {
    return (x + y) / 2;
  }
}


void namespaceFunc() {
  using namespace Avg;
  Calculate(3.0f, 2.8f);

}