
#include<Seeds.h> 



void Seeds:: Water_Today(){
int watered_today=0;
};
void Seeds :: Health_water_relationship(){
    if (watered_today>0);{
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





