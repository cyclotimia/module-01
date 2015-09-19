#include <iostream>


int main()
{
	int i = 42;
	double d = 3.14;

	std::cout << "Enter an integer and a double:\n";
	std::cin >> i >> d; // считали значения
	std::cout << "Your input is " << i << ", " << d << "\n" << std::endl; // вывели
	// БЛЯ ВСЕ ПРОПАЛО
	std::cin.clear();
	std::cin.get();
	return 0;
}