//P79:reading more than one word with getline
//这里的程序具有与第一版本不同的效果，可以实现对于一行的输入字符的读取
#include <iostream>
int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    cin.getline(name,ArSize);       //reads through newline
    cout << "Enter your favorite dessert:\n";
    cin.getline(dessert, ArSize);
    cout << "I have some delicious "<< dessert;
    cout << " for you, " << name << ".\n";
    return 0;
}
