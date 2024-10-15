#include <iostream>
#include "Tractor.h"

int main() {
    Tractor myTractor;  // Instantiate the tractor
    int harvest_time = 10;

    std::cout << "Harvest days before: " << harvest_time << std::endl;
    myTractor.reduce_harvest(harvest_time);
    std::cout << "Harvest days after using tractor: " << harvest_time << std::endl;

    std::cout << "Tractor price: $" << Tractor::TRACTOR_PRICE << std::endl;

    return 0;
}
