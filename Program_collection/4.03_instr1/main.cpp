//P77:reading more than one string
//获取用户输入的数据与元素，并且对于出入的元素做组合输出效果
#include<iostream>
int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    cin >> name;
    cout << "Enter your facorite dessert:\n";
    cin >> dessert;
    cout << "I have some delicious " << dessert;
    cout << " for you, " <<name<<".\n";
    return 0;
}
