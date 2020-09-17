#include <iostream>
int main()
{
	int a = 1, b = 2;
	double a1 = 3, b1 = 3.14;
	std::cin >> a >> b >> a1 >> b1;
	std::cout << "int + int  =" << a+b << " int - int = " << a-b << " int * int =" << a*b << " int / int=" << a/b << "\n";
	std::cout << "double + double  =" << a1 + b1 << " double - double = " << a1 - b1 << " double * double =" << a1 * b1 << " double / double=" << a1 / b1 << "\n";
	std::cout << "double + int  =" << a1 + b << " double - int = " << a1 - b << " double * int =" << a1 * b << " double / int=" << a1 / b << "\n";
	std::cout << "int + double  =" << a + b1 << " int - double = " << a - b1 << " int * double =" << a * b1 << " int / double=" << a / b1 << "\n";
}