#ifndef FARM_H
#define FARM_H

#include "Farmland.h"
#include <vector>
using namespace std;

class Farm {
private:
    vector<Farmland*> farmlands;
    int dayCount;

public:
    Farm();
    ~Farm();
    
    void startDay();
    void endDay();
    
    void addFarmland(Farmland* farmland);
    void harvestAll();
    void showFarmStatus();
};

#endif
