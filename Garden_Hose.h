#ifndef GARDEN_HOSE_H
#define GARDEN_HOSE_H

#include "Farming_equipment.h"

class Garden_Hose : public Farming_equipment {
public:
    static const double GARDEN_HOSE_PRICE;
    static const int REDUCE_WATERING_AMOUNT;

    Garden_Hose();

    virtual void reduce_water(int& water_per_day);
};
#endif