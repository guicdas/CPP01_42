#include "Zombie.hpp"

int main(void){
	std::string name;

    std::cout << "\nTesting Zombie.cpp (stack)\n";
    std::cout << "Zombie name:\t";
    std::cin >> name;

    Zombie Z1(name);
    Z1.announce();
    
    std::cout << "\nTesting newZombie.cpp (heap)\n";
    std::cout << "Zombie name:\t";
    std::cin >> name;

    Zombie *Z2 = newZombie(name);
    Z2->announce();
    delete Z2;

    std::cout << "\nTesting randomChump()...\n";
	std::cout << "Zombie name:\t";
	std::cin >> name;
    randomChump(name);
    return 0;
}