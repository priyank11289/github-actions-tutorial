#include "SpeedMonitor.h"
#include <iostream>

int main() {
  SpeedMonitor monitor(100);
  monitor.addSpeedReading(90);
  
  if (monitor.isSpeeding()) {
    std::cerr << "Test failed: Should not be speeding at 90" << std::endl;
    return 1;
  }

  monitor.addSpeedReading(110);
  if (!monitor.isSpeeding()) {
    std::cerr << "Test failed: Should be speeding at 110" << std::endl;
    return 1;
  }

  if (monitor.getAverageSpeed() != 100.0) {
    std::cerr << "Test failed: Average speed should be 100" << std::endl;
    return 1;
  }

  std::cout << "All Automotive Tests Passed!" << std::endl;
  return 0;
}
