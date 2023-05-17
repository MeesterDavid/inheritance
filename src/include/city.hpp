#include "living_area.hpp" 

class City : public LivingArea{
    public:
    City(int _population, std::string _name):
        LivingArea(_population, _name) {}
    
    void buildUniversity(){
        std::cout << "Another university enters the realm." << std::endl;
    }
};
