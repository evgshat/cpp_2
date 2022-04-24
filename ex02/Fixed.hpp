#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					chislo;
		static const int	bits = 8;
	public:
		Fixed();
		Fixed(const int copy);
		Fixed(const float copy);
		Fixed(const Fixed& copy);

		Fixed &operator= (const Fixed &copy);

		bool operator> (const Fixed &copy) const;
		bool operator< (const Fixed &copy) const;
		bool operator>= (const Fixed &copy) const;
		bool operator<= (const Fixed &copy) const;
		bool operator== (const Fixed &copy) const;
		bool operator!= (const Fixed &copy) const;

		Fixed operator+ (const Fixed &copy);
		Fixed operator- (const Fixed &copy);
		Fixed operator* (const Fixed &copy);
		Fixed operator/ (const Fixed &copy);
		Fixed operator++(int);
		Fixed operator++ ();

		static const Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static const Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);
		float toFloat(void) const;
		int toInt( void ) const;
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

std::ostream& operator<< (std::ostream& os, const Fixed &copy);
