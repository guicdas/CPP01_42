#pragma once

#include <iostream>
#include <fstream>

class Integer{
	private:
		int n;
	public:
		Integer( int const n );
		~Integer( void );

		int getValue( void ) const;

		Integer &	operator=( Integer const & rhs);
		Integer		operator+( Integer const & rhs) const;
};

std::ostream & operator<<( std::ostream & o, Integer const & rhs);