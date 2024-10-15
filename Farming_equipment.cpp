
#include <Farming_equipment.h>






void Farming_equipment:: Add_Tractor(double Cost,double Finances,std::string name){
Cost==2000.0;


if (Cost>Finances){

    std::cout<<"Not enough Money, cannot Buy item\n";
} else( Cost<Finances);{
Finances-=Cost;
std::cout <<"Tractor has been purchased\n";
Farming_equipment* Tractor= new Tractor();
};
};

//buy a garden hose
void Farming_equipment:: Add_Garden_Hose(double Cost,double Finances,std::string name){
Cost==250.0;


if (Cost>Finances){

    std::cout<<"Not enough Money, cannot Buy item\n";
} else( Cost<Finances);{
Finances-=Cost;
std::cout <<" garden hose has been purchased\n";
Farming_equipment* Garden_Hose= new Garden_Hose();
};
};

//buy a shovel
void Farming_equipment:: Add_Shovel(double Cost,double Finances,std::string name){
Cost==400.0;


if (Cost>Finances){

    std::cout<<"Not enough Money, cannot Buy item\n";
} else( Cost<Finances);{
Finances-=Cost;
std::cout <<"Tractor has been added\n";
Farming_equipment* Shovel= new Shovel();
};
};
void Farming_equipment:: Add_Seeds_Corn(double Cost,double Finances,std::string name){
Cost==15.00;


if (Cost>Finances){

    std::cout<<"Not enough Money, cannot Buy item\n";
} else( Cost<Finances);{
Finances-=Cost;
std::cout <<"Corn Seeds have been purchased\n";
Seeds*Seeds_Corn = new Seeds_Corn();
};
};


void Farming_equipment:: Add_Seeds_Rice(double Cost,double Finances,std::string name){
Cost==8.50;


if (Cost>Finances){

    std::cout<<"Not enough Money, cannot Buy item\n";
} else( Cost<Finances);{
Finances-=Cost;
std::cout <<"Rice seeds have been purchased\n";
Seeds* Seeds_Rice= new Seeds_Rice();
};
};

void Farming_equipment:: Add_Seeds_Wheat(double Cost,double Finances,std::string name){
Cost==2000.0;


if (Cost>Finances){

    std::cout<<"Not enough Money, cannot Buy item\n";
} else( Cost<Finances);{
Finances-=Cost;
std::cout <<"Wheat Seeds have been purchased\n";
Seeds* Seeds_Wheat= new Seeds_Wheat();
};
};

























