#include<iostream>
#include<string>
struct Pizza {
	std::string Company;
	float diameter;
	float weight;
};
int main()
{
	Pizza *pizza = new Pizza;
	std::cout << "\ndiameter:";
	std::cin >> pizza->diameter;
	std::cout << "\ncompany:";
	std::cin >> pizza->Company;
	std::cout << "\nweight:";
	std::cin >> pizza->weight;
	std::cout << "pizza信息为：";
	std::cout << "\n公司:" << pizza->Company;
	std::cout << "\n直径:" << pizza->diameter << "cm";
	std::cout << "\n重量:" << pizza->weight << "g";
	delete pizza;
	return 0;
}