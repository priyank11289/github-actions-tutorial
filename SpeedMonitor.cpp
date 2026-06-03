#include "SpeedMonitor.h"
#include <numeric>

SpeedMonitor::SpeedMonitor(int speedLimit) : limit(speedLimit) {}

void SpeedMonitor::addSpeedReading(int speed) {
  readings.push_back(speed);
}

bool SpeedMonitor::isSpeeding() const {
  if (readings.empty()) return false;
  return readings.back() > limit;
}

double SpeedMonitor::getAverageSpeed() const {
  if (readings.empty()) return 0.0;
  double sum = 0;
  for(int speed : readings) { sum += speed; }
  return sum / readings.size();
}
