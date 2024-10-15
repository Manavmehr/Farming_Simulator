
#ifndef SEEDS_CORN_H
#define SEEDS_CORN_H
#include<Seeds.h>

class Seeds_Corn: public Seeds{
    public:
    double Cost_Corn;
    bool Needs_Cornfeild;

    Seeds_Corn(const double Cost_Corn, bool Needs_Cornfield);

};
#endif