//P81:following number input with line input
#include<iostream>
int main()
{
    using namespace std;
    cout<<"What year was your house built?\n";
    int year;
    cin>>year;
    cin.get();      //2.or cinget(ch)也可以利用表达式cin>>year返回cin对象，将调用拼接起来：(cin>>year).get();or(cin>>year).get(ch);
    cout << "What is its street address?\n";
    char address[80];
    cin.getline(address,80);    //1.cin.getline()看到换行符，将认为是一个空行，并且将一个空字符串赋给address数组。
    cout<<"Year built: "<<year<<endl;//
    cout <<"Address: "<<address<<endl;
    cout<<"Done!\n";
    return 0;
}
