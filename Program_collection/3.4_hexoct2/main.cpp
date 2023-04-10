// hexoct2.cpp -- display values in hex and octal 程序实现对于普通十位进制数字转换为其他进制的数字时应当是什么样的效果
#include <iostream>
using namespace std;
int main()
{
    using namespace std;
    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout << "Monsieur cuts a striking figure!" <<endl ;
    cout << "chest = " <<chest  << " (decimal for 42)"<<endl;
    cout << hex;            //十六进制
    cout << "waist = " << waist  << " (hexdecimal for 42)"<< endl;
    cout << oct;            //八进制
    cout << "inseam = " <<inseam  << " (otcal for 42)"<<endl;
    return 0;
}
