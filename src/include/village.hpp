#include "living_area.hpp" 

class Village : public LivingArea{
    public:
    Village(int _population, std::string _name):
        LivingArea(_population, _name) {}
    
    void sendAngryFarmers(){
        std::cout << "A mob of angry farmers is invading your city!!!" << std::endl;
    }
};