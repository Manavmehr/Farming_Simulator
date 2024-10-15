 #include "Garden_Hose.h"
const double Garden_Hose::GARDEN_HOSE_PRICE = 250.0;
const int Garden_Hose::REDUCE_WATERING_AMOUNT = 1;

Garden_Hose::Garden_Hose() {

}

void Garden_Hose::reduce_water(int& water_per_day) {
    water_per_day -= REDUCE_WATERING_AMOUNT;
    if (water_per_day < 0) {
        water_per_day = 0;  
    }
}
