#include<iostream>
using namespace std;

int main()
{
	//野指针SS
	//在程序中，尽量避免出现野指针
	int* p = (int*)0x1100;//指向非法内存空间

	cout << *p << endl;//访问报错
	cout << *p << endl;//访问报错
	system("pause");

	return 0;
}
//空指针与野指针都不是我们申请的空间，所以不要访问