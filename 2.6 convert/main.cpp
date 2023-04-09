// convert.cpp -- converts stone to pounds
#include <iostream>
int stonetold(int);     //function prototype
int main()
{
    using namespace std;
    int stone;
    cout << "Enter the weight in stone: ";
    cin >> stone;
    int pounds = stonetold(stone);
    cout << stone << "stone = ";
    cout << pounds << "pounds." << endl;
    return 0;
}

int stonetold(int sts)
{

    return 14 * sts;
}
// 函数的特性包括：有函数头和函数体；接受一个参数；返回一个值；需要一个原型。


