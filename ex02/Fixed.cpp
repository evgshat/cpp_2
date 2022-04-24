#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->chislo = 0;
}

Fixed::Fixed(const int copy)
{
	std::cout << "Int constructor called" << std::endl;
	this->chislo = copy << this->bits;
}

Fixed::Fixed(const float copy)
{
	std::cout << "Float constructor called" << std::endl;
	this->chislo = roundf((1 << this->bits) * copy);
}

Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed &Fixed::operator= (const Fixed &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->chislo = copy.getRawBits();
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed &copy)
{
	os << copy.toFloat();
	return os;
}

float Fixed::toFloat(void) const
{
	return (static_cast<float>(this->chislo) / (1 << this->bits));
}

int Fixed::toInt( void ) const
{
	return (this->chislo >> this->bits);
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->chislo);
}

void Fixed::setRawBits( int const raw )
{
	this->chislo = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
