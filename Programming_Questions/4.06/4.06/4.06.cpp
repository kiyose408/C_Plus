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
	CandyBar candys[3] = {
		{"aerbeisi",10,200},
		{"xufuji",20,400},
		{"buerjia",30,500}
	};
	for (int i = 0; i < 3; i++) {
		std::cout << "\nBrand:" << candys[i].brand;
		std::cout << "\nHeavy:" << candys[i].heavy;
		std::cout << "\nCalorie:" << candys[i].calorie;
		std::wcout << "\n___________";
	}
	return 0;
}