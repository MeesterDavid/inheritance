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
        name(_name){}   

    LivingArea(int _population, std::string _name, Connection* _connection):
        population(_population),
        name(_name)
        {
            connections.push_back(_connection);
        } 

    LivingArea(int _population, std::string _name, std::vector<Connection*> _connections):
        population(_population),
        name(_name),
        connections(_connections){}    

};


