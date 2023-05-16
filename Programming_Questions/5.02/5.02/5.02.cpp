#include<iostream>
#include<array>
#include<string>
const int ArSize = 16;
//int main()
//{
//	using namespace std;
//	long long factorials[ArSize];
//	factorials[1] = factorials[0] = 1LL;
//	for (int i = 2; i < ArSize; i++)
//	{
//		factorials[i] = i * factorials[i - 1];
//	}
//	for (int i = 0; i < ArSize; i++)
//	{
//		std::cout << i << "!= " << factorials[i] << std::endl;
//	}
//	return 0;
//}
int main()
{
	using namespace std;
	array<long double, ArSize>factorials;
	factorials[1] = factorials[0]=1L;
	for (int i = 2; i < ArSize; i++)
	{
		factorials[i] = i * factorials[i - 1];
	}
	for(int i = 0; i < ArSize; i++)
	{
		std::cout << i << "!= " << factorials[i] <<std::endl;
	}
	return 0;
}
