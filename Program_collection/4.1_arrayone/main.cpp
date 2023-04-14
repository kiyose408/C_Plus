//P72:small arrays of integers
//程序创建了一个带有三个元素的数组，在输出中使用sizeof来返回类型或者数据对象长度。
//程序中输出的答案不同，一个是整个数组的长度，一个使数组中单一的元素的长度（单位为字节）
#include <iostream>
int main()
{
    using namespace std;
    int yams[3];        //creates array with three elements
    yams[0] = 7;
    yams[1] = 8;
    yams[2] = 6;

    int yamcosts[3] = {20,30,5};

    cout <<"Total yams = ";
    cout <<yams[0] + yams[1] +yams[2] <<endl;
    cout <<"The package with " << yams[1]<<"yams costs ";
    cout <<yamcosts[1] << "cents per yam.\n";
    int total = yams[0]*yamcosts[0]+yams[1]*yamcosts[1];
    total = total+yams[2]*yamcosts[2];
    cout << "The total yam expense is "<<total <<" cents.\n";

    cout << "\nSize of yams array = " <<sizeof yams;
    cout <<"bytes.\n";
    cout << "Size of one element = "<<sizeof yams[0];
    cout <<"bytes.\n";
    return 0;
}
