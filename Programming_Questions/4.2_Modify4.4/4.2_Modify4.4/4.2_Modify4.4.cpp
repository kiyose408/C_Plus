#include<iostream>
#include<string>
int main()
{
	using namespace std;
	const int ArSize = 20;
	string name;
	string dessert;
	std::cout << "Enter your name:\n";
	getline(cin, name);
	std::cout << "Enter your favorite dessert:\n";
	getline(cin, dessert);
	std::cout << "I have some delicious [" << dessert;
	std::cout << "] for you , [" << name<< "].\n";
	return 0;
}