#ifndef SHOVEL_H
#define SHOVEL_H

#include "Farming_equipment.h"
class Shovel : public Farming_equipment {
public:
    static const double SHOVEL_PRICE;  // Fixed price for the tractor
    static const int REDUCE_HARVEST_TIME;  // Amount of time the tractor reduces from the harvest

    Shovel();  
    void reduce_harvest(int& harvest_time);  // Function to reduce harvest time
};
#endif