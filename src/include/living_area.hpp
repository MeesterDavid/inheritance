#pragma once
#include <iostream>
#include <vector>
#include <string>

class Connection;

class LivingArea{
    public: 
    std::string name;
    std::vector<Connection*> connections;   

    protected:
    int population;

    LivingArea(int _population, std::string _name):
        population(_population),
        name(_name) {} 

};


