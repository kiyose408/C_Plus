#include<iostream>
#include<string>
struct Pizza {
	std::string Company;
	float diameter;
	float weight;
};
int main()
{
	Pizza pizza;
	std::cout << "\ncompany:";
	std::cin >> pizza.Company;
	std::cout << "\ndiameter:";
	std::cin >> pizza.diameter;
	std::cout << "\nweight:";
	std::cin >> pizza.weight;
	std::cout << "pizza��ϢΪ��";
	std::cout << "\n��˾:" << pizza.Company;
	std::cout << "\nֱ��:" << pizza.diameter<<"cm";
	std::cout << "\n����:" << pizza.weight << "g";
	return 0;
}