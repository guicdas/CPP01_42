#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon){
}

HumanA::~HumanA(void){

}

void HumanA::attack(){
	if (this->weapon.getType() != "") {
        std::cout << name << " attacks with their " << this->weapon.getType() << "!\n";
    } else {
        std::cout << name << " attacks with their bare hands!" << std::endl;
    }
}