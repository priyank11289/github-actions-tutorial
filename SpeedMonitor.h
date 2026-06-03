#pragma once
#include <vector>

class SpeedMonitor {
public:
  SpeedMonitor(int speedLimit);
  void addSpeedReading(int speed);
  bool isSpeeding() const;
  double getAverageSpeed() const;

private:
  int limit;
  std::vector<int> readings;
};
