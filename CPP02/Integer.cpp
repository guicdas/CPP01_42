#include "Integer.hpp"

Integer::Integer( int const n ){
	std::cout << "Constructo called \n";
}

Integer::~Integer(){

}



int Integer::getValue(void) const{
	return (this->n);
}

Integer &	Integer::operator=( Integer const & rhs){
	std::cout << "Assign called with " << this->n;
	std::cout << " to " << rhs.getValue() << std::endl;

	this->n = rhs.getValue();

	return *this;
}

Integer Integer::operator+( Integer const & rhs) const{
	std::cout << "Addition operator called with " << this->n;
	std::cout << " and " << rhs.getValue() << std::endl;
	return Integer(this->n + rhs.getValue() );
}

std::ostream &	operator<<( std::ostream & o , Integer const & rhs){
	o << rhs.getValue();
	return (o);
}