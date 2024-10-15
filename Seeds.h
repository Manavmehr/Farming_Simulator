#ifndef SEEDS_H
#define SEEDS_H
#include<iostream>
#include<string.h>
#include<Farming_equipment.h>

class Seeds: public Farming_equipment{
int Harvest_time;
int Water_per_day;
bool is_dead;
double Crop_quality;
double Health_Level;
int watered_today;

void Water_Today();
void   Harvest_Health_Relationship();

void Health_water_relationship();

void Health_level_calculator(double Health_Level);


};
#endif