#ifndef FARM_H
#define FARM_H

#include <vector>
#include "Financial_Records.h"
#include "Seeds.h"

class Farm {
private:
    std::vector<Seeds> crops;
    Financial_Records financesReport;
    int daysPassed;
    
    void ClearScreen();

public:
    Farm();
    void StartDay();
    void EndDay();
    void ManageCrops();
    void SaveGame();
    void Menu();
};

#endif

