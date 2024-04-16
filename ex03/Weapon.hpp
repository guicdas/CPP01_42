#pragma once

#include <string>
#include <iostream>

class Weapon{
	
	private:
		std::string type;
	public:
		Weapon(std::string weaponName);
		~Weapon(void);

		const std::string&	getType(void);
		void				setType(std::string newType);
};