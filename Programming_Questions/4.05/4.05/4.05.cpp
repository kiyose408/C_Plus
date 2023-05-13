#include<iostream>
#include<string>
struct CandyBar{
	std::string brand;//品牌
	float heavy;	
	int calorie;
};
int main()
{
	CandyBar snack{
		"Mocha Munch",
		2.3,
		350
	};
	std::cout << "snack CandyBar:\n";
	std::cout << "Brand:" << snack.brand;
	std::cout << "\nHeavy:" << snack.heavy;
	std::cout << "\nCalorie:" << snack.calorie;
	return 0;

}