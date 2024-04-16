#include "Harl.hpp"

Harl::Harl(){
	this->instance[0] = &Harl::debug;
	this->instance[1] =  &Harl::info;
	this->instance[2] =  &Harl::warning;
	this->instance[3] =  &Harl::error;
}


Harl::~Harl(void){}

void Harl::debug(void){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do! (DEBUG)\n";
}

void Harl::info(void){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more! (INFO)\n";
}

void Harl::warning(void){
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month. (WARNING)\n";
}

void Harl::error(void){
	std::cout <<  "This is unacceptable! I want to speak to the manager now. (ERROR)\n";
}

void Harl::complain(std::string level){
	std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR"};
	
	for (int i = 0; i < 4; i++)
    {
		if (levels[i].compare(level) == 0)
	    	(this->*instance[i])();
	}
}

