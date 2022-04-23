#include <iostream>

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
		float toFloat(void) const;
		int toInt( void ) const;
		Fixed &operator<< (const Fixed &copy);
		~Fixed();

		int getRawBits( void ) const;
		void setRawBits( int const raw );
};
