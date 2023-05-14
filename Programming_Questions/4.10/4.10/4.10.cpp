#include<iostream>
#include<array>
int main()
{
	using namespace std;
	array<float, 3>run;	//创建一个run的array对象，内部包含3个float类型元素。
	float sum = 0;
	for (int i = 0; i < 3; i++)
	{
		std::cout << "请输入第" << i+1 << "次的40米跑成绩:";
		std::cin >> run[i];
		sum += run[i];
		std::cout << "\a第" << i + 1 << "次40米跑成绩为" << run[i] << "s\n\n";
		std::cout << "前" << i+1 << "次平均成绩为:" << sum / (i + 1)<<"s\n\n";
	}
	return 0;
}