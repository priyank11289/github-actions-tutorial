#include "Calculator.h"
#include <iostream>

int main() {
  Calculator calc;
  // We expect 2 + 3 to equal 5
  if (calc.add(2, 3) != 5) {
    std::cerr << "Test failed! 2+3 did not equal 5." << std::endl;
    return 1; // Returning a non-zero number tells GitHub the test failed!
  }
  std::cout << "Test passed!" << std::endl;
  return 0;
}
