#include<iostream>
int main()
{
	using namespace std;
	cout << "Enter the starting vountdown value: ";
	int limit;
	cin >> limit;
	int i;
	for (i = limit; i; i--)		//当i为0时中间的条件判断就是0也就是假（不成立）的情况，就会跳出循环
		cout << "i = " << i << "\n";
	cout << "Done now that i = " << i << "\n";
	return 0;
}