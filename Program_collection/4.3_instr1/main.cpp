//P77:reading more than one string
//��ȡ�û������������Ԫ�أ����Ҷ��ڳ����Ԫ����������Ч��
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
