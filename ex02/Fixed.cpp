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

bool Fixed::operator> (const Fixed &copy) const
{
	return (this->chislo > copy.chislo);
}

bool Fixed::operator< (const Fixed &copy) const
{
	return (this->chislo < copy.chislo);
}

bool Fixed::operator>= (const Fixed &copy) const
{
	return (this->chislo >= copy.chislo);
}

bool Fixed::operator<= (const Fixed &copy) const
{
	return (this->chislo <= copy.chislo);
}

bool Fixed::operator== (const Fixed &copy) const
{
	return (this->chislo == copy.chislo);
}

bool Fixed::operator!= (const Fixed &copy) const
{
	return (this->chislo != copy.chislo);
}

Fixed Fixed::operator+ (const Fixed &copy)
{
	return (Fixed(this->toFloat() + copy.toFloat()));
}

Fixed Fixed::operator- (const Fixed &copy)
{
	return (Fixed(this->toFloat() - copy.toFloat()));
}

Fixed Fixed::operator* (const Fixed &copy)
{
	return (Fixed(this->toFloat() * copy.toFloat()));
}

Fixed Fixed::operator/ (const Fixed &copy)
{
	if (copy.toFloat() == 0)
		throw (std::runtime_error("Cannot divide by zero"));
	return (Fixed(this->toFloat() / copy.toFloat()));
}

Fixed Fixed::operator++(int)
{
	Fixed res(*this);
	this->chislo++;
	return (res);
}

Fixed Fixed::operator++ ()
{
	this->chislo++;
	return (*this);
}

const Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

const Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
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
