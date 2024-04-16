#include "Harl.hpp"

int main(void){
	Harl instance;
	std::string level;
	int i = 0;

	void	(Harl::*complain)(std::string level) = &Harl::complain;
	while (i == 0)
	{
		std::cout << "level:\t"	;
		std::cin >> level;
		for(int i = 0; level[i]; i++)
			level[i] = (char)toupper(level[i]);
		(instance.*complain)(level);
		if (level.compare("EXIT") == 0)
			i++;
	}
	std::cout << "\nBye!\n\n";
}