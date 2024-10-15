#include <iostream>
#include "Garden_Hose.h"

int main() {
    Garden_Hose myHose;
    int water_per_day = 5;git 

    std::cout << "Watering needs before: " << water_per_day << std::endl;
    myHose.reduce_water(water_per_day);
    std::cout << "Watering needs after using garden hose: " << water_per_day << std::endl;
    return 0;
}