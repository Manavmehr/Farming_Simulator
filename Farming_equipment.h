#ifndef FARMING_EQUIPMENT_H
#define FARMING_EQUIPMENT_H
#include<iostream>
#include<string.h> 
#include<Seeds.h>
#include<Seeds_Corn.h>
#include<Seeds_Rice.h>
#include<Seeds_Wheat.h>
#include<Tractor.h>
#include<Garden_Hose.h>
#include<Shovel.h>


class Farming_equipment{
    public:
std:: string name;
double Cost;


bool Is_seeds;

void Add_Tractor(double Cost,double Finances,std::string name);
void Add_Garden_Hose(double Cost,double Finances,std::string name);
void  Add_Seeds_Corn(double Cost,double Finances,std::string name);
void Add_Seeds_Wheat(double Cost,double Finances,std::string name);
void  Add_Seeds_Rice(double Cost,double Finances,std::string name);

};
#endif