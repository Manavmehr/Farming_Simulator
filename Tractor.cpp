#include "Tractor.h"

// Define fixed price and the amount of time the tractor reduces harvest time
const double Tractor::TRACTOR_PRICE = 2000.0;
const int Tractor::REDUCE_HARVEST_TIME = 5;

Tractor::Tractor() {
    // No parameters needed since the price and harvest reduction are fixed
}

void Tractor::reduce_harvest(int& harvest_time) {
    harvest_time -= REDUCE_HARVEST_TIME;
    if (harvest_time < 0) {
        harvest_time = 0;  // Ensure's that harvest days do not go negative
    }
}
