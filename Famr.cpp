#include "Farm.h"
#include <iostream>
using namespace std;

Farm::Farm() : dayCount(0) {}

Farm::~Farm() {
    for (auto farm : farmlands) {
        delete farm;
    }
}

void Farm::startDay() {
    dayCount++;
    cout << "Day " << dayCount << " started.\n";
}

void Farm::endDay() {
    cout << "Day " << dayCount << " ended.\n";
}


void Farm::addFarmland(Farmland* farmland) {
    farmlands.push_back(farmland);
    cout << "Added new farmland.\n";
}

void Farm::manageCrops() {
    for (auto farm : farmlands) {
        farm->harvestCrops();
    }
}

void Farm::showFarmStatus() {
    cout << "Day Count: " << dayCount << "\n";
    cout << "Number of Farmlands: " << farmlands.size() << "\n";
    for (auto& farm : farmlands) {
        cout << *farm;
    }
}

