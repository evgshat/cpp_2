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
		bool operator> (const Fixed &copy);
		bool operator< (const Fixed &copy);
		bool operator>= (const Fixed &copy);
		bool operator<= (const Fixed &copy);
		bool operator== (const Fixed &copy);
		bool operator!= (const Fixed &copy);
		Fixed &operator+ (const Fixed &copy);
		Fixed &operator- (const Fixed &copy);
		Fixed &operator* (const Fixed &copy);
		Fixed &operator/ (const Fixed &copy);
		Fixed &operator++ (const Fixed &copy);
		const int &min(int &a, int &b) const;
		const int &min(const int &a, const int &b) const;
		const int &max(int &a, int &b) const;
		const int &max(const int &a, const int &b) const;
		float toFloat(void) const;
		int toInt( void ) const;
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

std::ostream& operator<< (std::ostream& os, const Fixed &copy);
