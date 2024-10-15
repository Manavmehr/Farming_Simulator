#ifndef SEEDS_WHEAT_H
#define SEEDS_WHEAT_H
#include<Seeds.h>
class Seeds_Wheat: public Seeds{
    public:
double Cost_Wheat;
bool Needs_Wheatfeild;
public:
Seeds_Wheat(const double Cost_Wheat,bool Needs_Wheatfield);
};
#endif