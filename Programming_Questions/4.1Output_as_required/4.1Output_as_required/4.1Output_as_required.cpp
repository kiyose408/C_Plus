#include<iostream>
#include<string>
using namespace std;
int main()
{
	string fn;
	string ln;
	string name;
	int age;
	char grade;
	std::cout << "What is your first name: ";
	getline(cin, fn);		//std::cin >> fn;两者区别在于使用getline可以避免在识别到空格就跳过下阶段的输入
	std::cout << "\nWhat is your last name : ";
	getline(cin, ln);		//std::cin >> ln; 使用getline需要头文件string
	name = ln + "," + fn;
	std::cout << "\nWhat letter grade do you deserve?";
	std::cin >> grade;
	grade += 1;
	std::cout << "\nWhat is your age?";
	std::cin >> age;
	std::cout << "Name: " << name << "\nGrade: " << grade << "\nAge: " << age;
	return 0;
}