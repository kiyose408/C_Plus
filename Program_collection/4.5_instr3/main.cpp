//P80:reading more than one word with get() & get()
//对于4.4做出了对于整行的录入确定的效果添加与实现
#include <iostream>
int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    cin.getline(name,ArSize).get();       //read string, newline
    cout << "Enter your favorite dessert:\n";
    cin.getline(dessert, ArSize).get();
    cout << "I have some delicious "<< dessert;
    cout << " for you, " << name << ".\n";
    return 0;
}
