//P81:following number input with line input
#include<iostream>
int main()
{
    using namespace std;
    cout<<"What year was your house built?\n";
    int year;
    cin>>year;
    cin.get();      //2.or cinget(ch)Ҳ�������ñ��ʽcin>>year����cin���󣬽�����ƴ��������(cin>>year).get();or(cin>>year).get(ch);
    cout << "What is its street address?\n";
    char address[80];
    cin.getline(address,80);    //1.cin.getline()�������з�������Ϊ��һ�����У����ҽ�һ�����ַ�������address���顣
    cout<<"Year built: "<<year<<endl;//
    cout <<"Address: "<<address<<endl;
    cout<<"Done!\n";
    return 0;
}
