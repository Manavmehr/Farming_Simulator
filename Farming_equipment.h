#ifndef FARMING_EQUIPMENT_H
#define FARMING_EQUIPMENT_H
#include<iostream>
#include<string.h> 

class Farming_equipment{
    public:
std:: string name;
double Cost;
Farming_equipment(const Std::string name, double Cost);

bool Is_seeds;

void Add_equipment(double Cost,double Finances);

void sell_equipment(double Cost, double Finances);
};
#endif