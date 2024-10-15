#ifndef TRACTOR_H
#define TRACTOR_H
#include "Farming_equipment.h"
class Tractor : public Farming_equipment {
public:
    static const double TRACTOR_PRICE;  // Fixed price for the tractor
    static const int REDUCE_HARVEST_TIME;  // Amount of time the tractor reduces from the harvest

    Tractor();  
    void reduce_harvest(int& harvest_time);  // Function to reduce harvest days

private:
   
};

#endif 
