#include<iostream>
#include<cstring>
int main()
{
	char fn[20];
	char ln[20];
	std::cout << "Enter your first name: ";
	std::cin >> fn;
	std::cout << "Enter your last name: ";
	std::cin >> ln;
	char name[50];
	strcpy_s(name, fn);
	strcat_s(name, ",");
	strcat_s(name, ln);
	std::cout << "Here is the information in a single string : " << name;
	return 0;
}