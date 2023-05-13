#include<iostream>
#include<string>
int main()
{
	using namespace std;
	string fn;
	string ln;
	std::cout << "Enter your first name: ";
	std::cin >> fn;
	std::cout << "Enter your last name: ";
	std::cin >> ln;
	string name;
	name = fn + "," + ln;
	std::cout << "Here is the information in a single string : " << name;
	return 0;
}