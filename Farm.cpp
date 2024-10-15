#include "Farm.h"
#include <iostream>

Farm::Farm() : daysPassed(0) {}

void Farm::StartDay() {
    daysPassed++;
    std::cout << "Day " << daysPassed << " has started." << std::endl;
}

void Farm::EndDay() {
    std::cout << "Day " << daysPassed << " has ended." << std::endl;
    financesReport.Record_expenses();
    financesReport.Record_income();
}

void Farm::ManageCrops() {

    std::cout << "Managing crops..." << std::endl;
}

void Farm::SaveGame() {
    std::cout << "Saving game..." << std::endl;
}
