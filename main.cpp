#include "SpeedMonitor.h"
#include <iostream>

int main() {
  SpeedMonitor monitor(100);
  monitor.addSpeedReading(80);
  monitor.addSpeedReading(105);

  // Intentional MISRA C++ Violation: C-style cast (Rule 5-2-4)
  int roundedSpeed = (int)monitor.getAverageSpeed();

  std::cout << "Vehicle Speeding: " << (monitor.isSpeeding() ? "YES" : "NO")
            << std::endl;
  std::cout << "Average Speed: " << roundedSpeed << std::endl;
  return 0;
}