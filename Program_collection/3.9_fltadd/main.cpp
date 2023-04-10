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
//最后返回的结果依然是0，而不是1.
//原因在于float类型只能表示数字中的前6为或者前七位
//因此修改第23位对这个值不会产生影响。
