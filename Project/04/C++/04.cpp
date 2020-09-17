#include <iostream>
int main()
{
	int a = 0,b = 0,c = 0;
	std::cin >> a >> b;
	c = a;
	a = b;
	b = c;
	std::cout << "a=" << a << " b=" << b <<"\n";
	a += b;
	b = a - b;
	a = a - b;
	std::cout << "a=" << a << " b=" << b <<"\n";
}