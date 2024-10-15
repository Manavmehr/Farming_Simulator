#include "Farm.h"
#include <iostream>

// Clear Screen function
void ClearScreen() {
#ifdef _WIN32
    system("cls"); 
#else
    system("clear");
#endif
}

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

void Farm::Menu() {
    std::cout << "1. Start Day\n2. Manage Crops\n3. End Day\n4. Save Game\n";
}
