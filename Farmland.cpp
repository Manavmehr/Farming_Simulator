#include "Farmland.h"
#include <iostream>
#include <algorithm> // For std::remove

Farmland::Farmland(std::string type, int capacity, int buildTime)
    : typeOfLand(type), landCapacity(capacity), buildTime(buildTime) {}

void Farmland::HarvestCrops() {
    std::cout << "Harvesting crops from " << typeOfLand << "..." << std::endl;

    for (size_t i = 0; i < currentSeeds.size(); i++) {
        if () {
            std::cout << "Crop harvested: " << currentSeeds[i].GetCropType() << std::endl;
            currentSeeds.erase(currentSeeds.begin() + i);
        }
    }
}

void Farmland::AddCrops(Seeds seed) {
    if (currentSeeds.size() < landCapacity) {
        currentSeeds.push_back(seed);
        std::cout << "Added " << seed.GetCropType() << " to " << typeOfLand << " land." << std::endl;
    } else {
        std::cout << "Land capacity full. Cannot add more crops." << std::endl;
    }
}

void Farmland::BuildLand() {
    std::cout << "Building... " << typeOfLand << " land. Time to build: " << buildTime << " days." << std::endl;
}

void Farmland::UpgradeLand() {
    landCapacity++;
    std::cout << "Upgraded " << typeOfLand << " land. New capacity: " << landCapacity << std::endl;
}
