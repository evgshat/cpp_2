#include <iostream>
#include <iomanip>

void test_1()
{
	int a = 1; //00000111
	std::cout << a << '\n';
	a = a << 1;
	std::cout << a << '\n';
	a = 7;
	a = a << 2;
	// std::cout << a << '\n';
	a = a >> 2;
	// std::cout << a << '\n';
}

void test_2()
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

void test_3()
{
	int x = 10;
	x = x << 8;
	std::cout << x << '\n';
}

int main()
{
	test_1();
	return (0);
}
