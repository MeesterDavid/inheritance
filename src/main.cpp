#include "include/village.hpp"
#include "include/city.hpp"
#include "include/road.hpp"
#include "include/railroad.hpp"




int main(){


    Village venlo(2000, "venlo");
    City utrecht(20000, "utrecht");

    Road a1(&venlo, &utrecht);

    venlo.connections.push_back(&a1);

    for (auto i : a1.getConnectedAreas()){
        std::cout << "a1 connects areas " << i->name << std::endl;
    }

    return 0;
}