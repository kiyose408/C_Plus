//要求用户输入数字，每次输入后都求和。当输入0的时候退出程序。
#include<iostream>
int main()
{
	using namespace std;
	int count, sum=0;
	while (1) 
	{
		std::cout << "请输入待添加的数据（输入0退出程序）：" ;
		std::cin >> count;
		if (count == 0)
			break;
		else
			sum += count;
		std::cout << "当前计数和为：" << sum<<std::endl;
	}
	return 0;
}