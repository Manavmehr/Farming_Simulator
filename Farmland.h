#ifndef FARMLAND_H
#define FARMLAND_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Seeds {
public:
    string seedType;
    int harvestTime;
    double cropQuality;

    Seeds(string type, int hTime, double quality);
    void showInfo() const;
};

class Farmland {
private:
    string typeOfLand;
    int landCapacity;
    vector<Seeds*> currentSeeds;
    int buildTime;

public:
    Farmland(string landType, int capacity, int buildDuration);
    ~Farmland();
    
    void addCrops(Seeds* seed);
    void harvestCrops();
    void buildLand();
    void upgradeLand();

    friend ostream& operator<<(ostream& out, const Farmland& farm);
};

#endif
