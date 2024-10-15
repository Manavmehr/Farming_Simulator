#ifndef FARMLAND_H
#define FARMLAND_H

#include <string>
#include <vector>
#include "Seeds.h"

class Farmland {
private:
    std::string typeOfLand;
    int landCapacity;
    std::vector<Seeds> currentSeeds;
    int buildTime;

public:
    Farmland(std::string type, int capacity, int buildTime);

    void HarvestCrops();
    void AddCrops(Seeds seed);
    void BuildLand();
    void UpgradeLand();
};

#endif
