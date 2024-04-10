#include "Harl.hpp"

int main(void){
	Harl instance;
	std::string level;
	int i = 0;

	void	(Harl::*complain)(std::string level) = &Harl::complain;
	while (i == 0)
	{
		std::cout << "level:\t";
		std::cin >> level;
		(instance.*complain)(level);
		if (level.compare("EXIT"))
			i++;
	}
	
	std::cout << "\nBye!\n\n";
}