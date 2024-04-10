#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called\n";
	this->value = 0;
}

Fixed::Fixed( const Fixed &n ){
	std::cout << "Copy constructor called\n";
	this->value = n.getRawBits();
}

Fixed::Fixed( const int n ){
	std::cout << "Int constructor called\n";
	this->value = n;
	this->value = 8;
}

Fixed::Fixed( const float n ){
	std::cout << "Float constructor called\n\n";

	this->value = n / (1 << this->fractionBits);
	std::cout << "f value : " << n << " - " << this->value << "\n";
	this->value = this->value / 256;

	std::cout << "f value : " << n << " - " << this->value << "\n\n";
}

Fixed::~Fixed(){
	std::cout << "Destructor called\n";
}

Fixed &	Fixed::operator=( Fixed const & rhs){
	this->value = rhs.getRawBits();

	return *this;
}

int Fixed::getRawBits(void) const{
	return (this->value);
}

void Fixed::setRawBits(int const raw){
	this->value = raw;
}

std::ostream &	operator<<( std::ostream & o , Fixed const & rhs){
	o << rhs.getRawBits();
	return (o);
}

float	Fixed::toFloat( void ) const{
	float num;

	num = this->value;
	return (num);
}

int	Fixed::toInt( void ) const{
	int num;

	num = roundf(this->value);
	return (num);
}

// Fixed Fixed::operator+( Fixed const & rhs) const{
// 	std::cout << "Addition operator called with " << this->value;
// 	std::cout << " and " << rhs.getRawBits() << std::endl;

// 	return Fixed(this->value + rhs.getRawBits() );
// }