#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->chislo = 0;
}

Fixed::Fixed(const int copy)
{
	std::cout << "Int constructor called" << std::endl;
	*this = copy >> 8;
}

Fixed::Fixed(const float copy)
{
	std::cout << "Float constructor called" << std::endl;
	*this = copy;
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

Fixed &Fixed::operator<< (const float &copy)
{

}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
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
