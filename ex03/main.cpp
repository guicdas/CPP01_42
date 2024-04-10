#include "HumanA.hpp"
#include "HumanB.hpp"

int main(){
	{
		Weapon gun("gun");
		Weapon sword("sword");
		Weapon nothing("");

		HumanA gui("Gui", sword);
		gui.attack();
		HumanA hugo("Hugo", nothing);
		hugo.attack();
		HumanB Carlos("Carlos");
		Carlos.setWeapon(gun);
		Carlos.attack();
		HumanB diogo("Diogo");
		diogo.attack();
	}
	std::cout << std::endl;
	{
		Weapon club("crude spiked club");

		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club("crude spiked club");

		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
}