//P58:precision problems with float
#include <iostream>
int main()
{
    using namespace std;
    float a = 2.34E+22f;
    float b = a +1.0f;

    cout << "a = " << a << endl;
    cout << "b -a = " <<b - a << endl;
    return 0;
}
//��󷵻صĽ����Ȼ��0��������1.
//ԭ������float����ֻ�ܱ�ʾ�����е�ǰ6Ϊ����ǰ��λ
//����޸ĵ�23λ�����ֵ�������Ӱ�졣
