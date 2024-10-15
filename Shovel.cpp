#include "Shovel.h"

// Define fixed price and the amount of time the shovel reduces harvest time
const double Shovel::SHOVEL_PRICE = 400.0;
const int Shovel::REDUCE_HARVEST_TIME = 2;

Shovel::Shovel() {
    // No parameters needed since the price and harvest reduction are fixed
}

void Shovel::reduce_harvest(int& harvest_time) {
    harvest_time -= REDUCE_HARVEST_TIME;
    if (harvest_time < 0) {
        harvest_time = 0;  // Ensure's that harvest days do not go negative
    }
}
