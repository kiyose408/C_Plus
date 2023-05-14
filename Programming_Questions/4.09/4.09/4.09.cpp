#include<iostream>
#include<string>
struct CandyBar {
	std::string brand;//品牌
	float heavy;
	int calorie;
};
int main()
{
	using namespace std;
	CandyBar *ca1 = new CandyBar;
	CandyBar *ca2 = new CandyBar;
	CandyBar *ca3 = new CandyBar;
	CandyBar *cas[3] = { ca1,ca2,ca3 };
	for (int i = 0; i < 3; i++) {
		std::cin >> cas[i]->brand;
		std::cin >> cas[i]->calorie;
		std::cin >> cas[i]->heavy;
	}
	for (int i = 0; i < 3; i++) {
		std::cout << "\nBrand:" << cas[i]->brand;
		std::cout << "\nHeavy:" << cas[i]->heavy;
		std::cout << "\nCalorie:" <<cas[i]->calorie;
		std::wcout << "\n___________";
	}
	delete ca1, ca2, ca3,cas;
	return 0;
}