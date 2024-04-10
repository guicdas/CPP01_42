#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name){
    this->weapon = NULL;
}

HumanB::~HumanB(void){

}

void    HumanB::setWeapon( Weapon& weapon ) {
    this->weapon = &weapon;
}

void HumanB::attack(){
	if (this->weapon && this->weapon->getType() != "") {
        std::cout << name << " attacks with their " << this->weapon->getType() << "!\n";
    } else {
        std::cout << name << " has no weapon to attack with!" << std::endl;
    }
}