#include "Fixed.hpp"

Fixed::Fixed()
{
	this->chislo = 0;
}

Fixed::Fixed(const int copy)
{
	this->chislo = copy << this->bits;
}

Fixed::Fixed(const float copy)
{
	this->chislo = roundf((1 << this->bits) * copy);
}

Fixed::Fixed(const Fixed& copy)
{
	*this = copy;
}

Fixed &Fixed::operator= (const Fixed &copy)
{
	this->chislo = copy.getRawBits();
	return (*this);
}

bool Fixed::operator> (const Fixed &copy)
{

}

bool Fixed::operator< (const Fixed &copy)
{

}

bool Fixed::operator>= (const Fixed &copy)
{

}

bool Fixed::operator<= (const Fixed &copy)
{

}

bool Fixed::operator== (const Fixed &copy)
{

}

bool Fixed::operator!= (const Fixed &copy)
{

}

Fixed &Fixed::operator+ (const Fixed &copy)
{
	Fixed res;
	res = this->toFloat() + copy.toFloat();
	return (res);
}

Fixed &Fixed::operator- (const Fixed &copy)
{
	Fixed res;
	res = this->toFloat() - copy.toFloat();
	return (res);
}

Fixed &Fixed::operator* (const Fixed &copy)
{

}

Fixed &Fixed::operator/ (const Fixed &copy)
{

}

const int &Fixed::min(int &a, int &b) const
{
	if (a < b)
		return (a);
	else
		return (b);
}

const int &Fixed::min(const int &a, const int &b) const
{
	if (a < b)
		return (a);
	else
		return (b);
}

const int &Fixed::max(int &a, int &b) const
{
	if (a > b)
		return (a);
	else
		return (b);
}

const int &Fixed::max(const int &a, const int &b) const
{
	if (a > b)
		return (a);
	else
		return (b);
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
	return (this->chislo);
}

void Fixed::setRawBits( int const raw )
{
	this->chislo = raw;
}

Fixed::~Fixed()
{

}
