
#include<Seeds.h> 

Seeds::Seeds(const int Harvest_time,int Water_per_day)
:Crop_quality(100),Health_Level(100),watered_today(0), Harvest_time(Harvest_time),Water_per_day(Water_per_day){}


void Seeds:: Water_Today(){
int watered_today =+1;
};
void Seeds :: Health_water_relationship(){
    if (watered_today==0);{
        Health_Level-20.00;
        
    };
};
void  Seeds :: Harvest_Health_Relationship(){

    if (Health_Level>7.50){

        Crop_quality-10.00;
    } else if( 7.50>Health_Level>5.00){

        Crop_quality-20.00;
    } else if(Health_Level<5.00){
        Crop_quality-30.00;
    };

};

void Seeds:: Health_level_calculator(double Health_Level){

Health_Level = Crop_quality/100;
};






