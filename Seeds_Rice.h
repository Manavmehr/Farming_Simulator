#ifndef SEEDS_RICE_H
#define SEEDS_RICE_H
#include<Seeds.h>
class Seeds_Rice: public Seeds{
public:
double Cost_Rice;
bool Needs_Ricefield;


Seeds_Rice(const double Cost_Rice,bool Needs_Ricefield);
};
#endif