#include <iostream>
#include <iomanip>

int main()
{
	float a = 5.0f;
	float b = 5.0;

	std::cout << a << '\n';
	std::cout << b << '\n';
	std::cout << 9876543.21 << '\n';
	std::cout << 9.87654321f << '\n';
    std::cout << 987.654321f << '\n';
    std::cout << 987654.321f << '\n';
    std::cout << 9876543.21f << '\n';
    std::cout << 0.0000987654321f << '\n';
	std::cout << std::setprecision(16); // show 16 digits of precision
    std::cout << 3.33333333333333333333333333333333333333f <<'\n'; // f suffix means float

}
