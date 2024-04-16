#include "Zombie.hpp"

Zombie::Zombie(void){
	std::cout << "Zombie " << this->name << "has been created." << std::endl;
}

Zombie::~Zombie( void ){
	std::cout << "Zombie n°" << this->index + 1 << ": " << this->name << " has been destroyed." << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->index + 1 << ": " << this->name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setName(std::string name, int index){
	this->name = name;
	this->index = index;
}
