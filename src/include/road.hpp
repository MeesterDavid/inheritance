#include "connection.hpp"

class Road : public Connection{
    public:
    Road(LivingArea* _A, LivingArea* _B) :
        Connection(_A, _B) {}

    std::vector<LivingArea*> getConnectedAreas(){
        std::cout << "Only cars can drive on me. We are going from " << A->name << " to " << B->name << "." << std::endl;
        return std::vector<LivingArea*>{A,B};
    }
};