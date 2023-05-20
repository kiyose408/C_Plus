#include<iostream>
int main()
{
	using namespace std;
	float De=100,Cl=100,mo=100,y=1;
	for (; De >= Cl; )
	{
		De += 0.1*mo;
		Cl = 1.05 * Cl;
		y++;
	}
	std::cout << "第" << y << "年时，Cleo的收益将超过Dephne.\nCleo总持有投资金额: " << Cl << "\nDephne总持有投资金额： " << De << endl;
}