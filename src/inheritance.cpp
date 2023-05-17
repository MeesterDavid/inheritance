#include <iostream>

class IOfficiary {
    public:
    virtual bool fine() = 0;
};


class Human {
    protected:
        int age;
    public:
        Human(int humanAge) : 
            age(humanAge) {}

        void talk() {
            std::cout << "I am a human. ";
            std::cout << "My age is " << age << "." << std::endl;
        }
};

class Cop : public Human, public IOfficiary {
    public:
    int guns;
    Cop(int copAge, int _guns) : 
        Human(copAge),
        guns(_guns) {}

    void talkGuns(){
        std::cout << "Check out my " << guns << " guns." << std::endl;
    }

    bool fine(){
        std::cout << "5 euro betalen, nu!!" << std::endl;
        return true;
    }
};

class CyberCop : public Cop{
    public:
    int hackingSkills;
    CyberCop(int copAge, int guns, int _hackingSkills):
        Cop(copAge, guns),
        hackingSkills(_hackingSkills) {}
    
    void hack(){
        if (hackingSkills >= 10){
            std::cout << "I hacked your bank account but you didn't even have money. Why am I hacking students?" << std::endl;
        }
    }
};


class LivingArea{
    protected:
    int population;
    LivingArea(int _population):
        population(_population) {} 
};

class Village : LivingArea{
    public:
    Village(int _population):
        LivingArea(_population) {}
    
    void sendAngryFarmers(){
        std::cout << "A mob of angry farmers is invading your city!!!" << std::endl;
    }
};

class City : LivingArea{
    public:
    City(int _population):
        LivingArea(_population) {}
    
    void buildUniversity(){
        std::cout << "Another university enters the realm." << std::endl;
    }
};


class Vehicle {
    public:
    virtual void drive() = 0;
    virtual void useHorn() = 0;
};

class Car : Vehicle {
    public:
    void drive(){
        std::cout << "Driving on the road" << std::endl;
    }
    void useHorn(){
        std::cout << "Honk!" << std::endl;
    }
};

class Boat : Vehicle {
    public:
    void drive(){
        std::cout << "You hear the sound of waves clashing against the bow. It soothes you." << std::endl;
    }    
};


int main(){
    Human human(30);
    Cop cop(40, 5);
    CyberCop cyberCop(5001, 21, 10);

    human.talk();
    cop.talk();
    cop.talkGuns();

    cyberCop.talk();
    cyberCop.talkGuns();
    cyberCop.hack();

    Village venlo(2000);
    City utrecht(200000);

    venlo.sendAngryFarmers();
    utrecht.buildUniversity();

    cop.fine();

    return 0;
}