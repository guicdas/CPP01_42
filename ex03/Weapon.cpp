#include "Weapon.hpp"

Weapon::Weapon(std::string weaponName){
	this->type = weaponName;
}

Weapon::~Weapon(){
	
}

const std::string&	Weapon::getType(void){
	return (this->type);
}

void	Weapon::setType(std::string newType){
	this->type = newType;
}