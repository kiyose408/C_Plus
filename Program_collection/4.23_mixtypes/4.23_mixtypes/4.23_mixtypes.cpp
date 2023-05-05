//P119:some type combinations
#include <iostream>
struct antarctica_years_end
{
	int year;
	/*some really interesting data,etc.*/
};

int main()
{
	antarctica_years_end s01, s02, s03;
	s01.year = 1998;
	antarctica_years_end* pa = &s02;
	pa->year = 1999;
	antarctica_years_end trio[3];//array of 3 structures
	trio[0].year = 2003;
	std::cout << trio->year << std::endl;//返回第一个trio结构的year元素
	const antarctica_years_end* arp[3] = { &s01,&s02,&s03 };
	std::cout << arp[1]->year << std::endl;//输出arp结构数组中的第二个结构的year元素
	const antarctica_years_end** ppa = arp;
	auto ppd = arp;		//C++11 automatic type deduction
	//or else use const antaractica_years_end ** ppd = arp
	std::cout << (*ppa)->year << std::endl;//这个指针返回的是ppa的第一个结构的year元素
	std::cout << (*(ppd + 1))->year << std::endl;//这里，指针指向的是ppd结构数组中的第二个结构的year元素
	return 0;
}