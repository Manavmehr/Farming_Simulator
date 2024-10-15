#include <iostream>
#include "Shovel.h"

int main() {
    Shovel myShovel;  // Instantiate the shovel
    int harvest_time = 10;

    std::cout << "Harvest days before: " << harvest_time << std::endl;
    myShovel.reduce_harvest(harvest_time);
    std::cout << "Harvest days after using shovel: " << harvest_time << std::endl;

    std::cout << "Shovel price: $" << Shovel::SHOVEL_PRICE << std::endl;

    return 0;
}
