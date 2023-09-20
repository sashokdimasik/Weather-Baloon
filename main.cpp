/********************************
 * Author:       Platonov A.A.  *
 * Group:        ПИ-231         *
 * Variant:      14             *
 * Date:         20.09.2023     *
 * Project name: Weather Baloon *
 ********************************/

#include <iostream>
#include <iomanip>
#include <math.h>

int main() {
  double height, temperature;
  
  double liftTime[5] = {0.5, 1, 2, 5, 10};
  
  std::cout << std::fixed << std::setprecision(2);
  
  for (int i = 0; i < 5; i ++) {
    height = 4.87 * sqrt(liftTime[i]);
    if (height < 11) temperature = 15.2 - 6.55 * height;
    else temperature = -56.6 + 0.01 * height;
    std::cout << "Time = " << liftTime[i] << " Height = " << height << " Temperature = " << temperature << '\n';
  }
  
  return 0;
}