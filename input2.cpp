#include <iostream>


int main()
{
	int i = 42;
	double d = 3.14;

	std::cout << "Enter an integer and a double:\n";
	std::cin >> i >> d; // ������� ��������
	std::cout << "Your input is " << i << ", " << d << "\n" << std::endl; // ������
	// ��� ��� �������
	std::cin.clear();
	std::cin.get();
	return 0;
}