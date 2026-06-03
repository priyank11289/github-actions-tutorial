#include "Calculator.h"
#include <iostream>

int main() {
  Calculator calc;
  std::cout << "Hello, World!" << std::endl;
  std::cout << "2 + 3 = " << calc.add(2, 3) << std::endl;
  return 0;
}