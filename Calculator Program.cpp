#include <iostream>
#include <string>
using namespace std;

int main()
{	
	double val1{}, val2{};
	char operation{};

	std::cin >> val1, operation, val2;

	//Simple Calculator 
	std::cout << "This is a simple calculator program" << "\n" << "\n";
	std::cout << "Please enter your first value: "; 
	std::cin >> val1;
	std::cout << "\n";

	std::cout << "Now enter an operator: ";
	std::cin >> operation; 
	std::cout << "\n";

	std::cout << "Now your sencond value: ";
	std::cin >> val2;
	std::cout << "\n";

	if (operation == '+')
		std::cout << val1 + val2 << "\n";
	else if (operation == '-')
		std::cout << val1 - val2 << "\n";
	else if (operation == '/')
		std::cout << val1 / val2 << "\n";
	else if (operation == '*')
		std::cout << val1 * val2 << "\n";
	else
		std::cout << val1 / val2 << "\n";

	return 0;
}