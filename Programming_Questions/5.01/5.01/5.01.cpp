#include<iostream>//实现输入两个整数，然后将两整数之间所有数字自动求和返回，包括这两个数字
int main()
{
	using namespace std;
	int a, b, min, max, sum = 0;
	std::cout << "Enter a num:";
	std::cin >> a;
	std::cout << "Enter a num:";
	std::cin >> b;
	if (a > b)
	{
		max = a;
		min = b;
	}
	else
	{
		max = b;
		min = a;
	}
	for (int i = min; i <= max; i++)
	{
		sum += i;
	}
	std::cout << "All num added that between " << min << " and " << max << " is " << sum;
	return 0;
}
