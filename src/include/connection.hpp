#pragma once
#include <iostream>
#include <vector>

class LivingArea;

class Connection{
    public:
    LivingArea* A;
    LivingArea* B;

    Connection(LivingArea* _A, LivingArea* _B) :
        A(_A),
        B(_B) {}
    virtual std::vector<LivingArea*> getConnectedAreas() = 0;

};


