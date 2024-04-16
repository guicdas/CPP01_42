#pragma once

#include <iostream>
#include <string>

class Harl{
	private:
		void (Harl::*instance[4])(void);
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
	public:
		Harl();
		~Harl();

		void	complain( std::string level );
};
