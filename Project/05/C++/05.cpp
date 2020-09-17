#include <iostream>
int main()
{
	double x0, v0, t, g = 9.8;
	std::cin >> x0 >> v0 >> t;
	std::cout << "x(t)" << x0 + v0 - g * t * t / 2 << "\n";
	std::cout << "x(t)" << x0 + v0 - 1/2 * g * t * t << "\n";
}