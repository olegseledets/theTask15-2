#include <iostream>

int main() {
  bool townhouse[2];
  bool swimmingPool[1];
  bool school[4];
  bool highRiseBuilding[15];
  bool shoppingСenter[3];

  std::cout << "Этажность квартала = " <<
               sizeof(townhouse) / sizeof(bool) +
               sizeof(swimmingPool) / sizeof(bool) +
               sizeof(school) / sizeof(bool) +
               sizeof(highRiseBuilding) / sizeof(bool) +
               sizeof(shoppingСenter) / sizeof(bool);
}