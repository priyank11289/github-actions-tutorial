#include "SpeedMonitor.h"
#include <iostream>

int main() {
  SpeedMonitor monitor(100);
  monitor.addSpeedReading(80);
  monitor.addSpeedReading(105);

  std::cout << "Vehicle Speeding: " << (monitor.isSpeeding() ? "YES" : "NO")
            << std::endl;
  std::cout << "Average Speed: " << monitor.getAverageSpeed() << std::endl;
  return 0;
}