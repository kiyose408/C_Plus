#include<iostream>
#include<vector>		//STL C++98(标准库）
#include<array>			//C++ 11
int main()
{
	using namespace std;
	//C,original C++
	double a1[4] = { 1.2,2.4,3.6,4.8 };
	//C++98 STL
	vector<double>a2(4);//create vector with 4 elements
	//no simple way to initialize in C98
	a2[0] = 1.0 / 3.0;
	a2[1] = 1.0 / 5.0;
	a2[2] = 1.0 / 7.0;
	a2[3] = 1.0 / 9.0;
	//C++11--create and initialize array object
	array<double, 4>a3 = { 3.14,2.72,1.62,1.41 };
	array<double, 4>a4;
	a4 = a3;	//valid for array objects of same size
	//use array notaion
	//无论是数组，vector对象还是array对象，都可以使用标准数组表示法来访问各个元素。其次，从地址可知，array对象和数组存储在相同的内存区域（即栈）中，而vector对象存储在另一个区域（自由存储区或堆）中。第三，注意到可以将一个array对象赋给另一个array对象；而对于数组，必须逐元素复制数据。
	cout << "a1[2]:" << a1[2] << " at " << &a1[2] << endl;
	cout << "a2[2]:" << a2[2] << " at " << &a2[2] << endl;
	cout << "a3[2]:" << a3[2] << " at " << &a3[2] << endl;
	cout << "a4[2]:" << a4[2] << " at " << &a4[2] << endl;
	//misdeed
	a1[-2] = 20.2;//等同于：*（a1 -2）= 20.2；即找到a1指向的地址，向前移动两个double元素，并且将20.2存储到目标地址（数组之外）。这里的意思是对于在a1数组之前的地址位置进行赋值操作，与C语言一样C++也不检查这种超出界限的错误。这种超界也许会带来对其他正在使用的地址的数据造成污染。表明数组的行为是不安全的。在vector与array对象中，您让其禁止，他们就可以禁止。也就是说仍然可以编写不安全的代码。
	//您还有其他选择，一种是使用成员函数at()。就像使用cin对象的成员函数getline（）一样，您也可以使用vector和array对象的成员函数at():
	a2.at(1)=2.3;//assign 2.3 to a2[1]
	//中括号表示法和成员函数at()差别在于使用at（）时，将在运行期间捕获非法索引，而程序将默认中断。同时检查会让运行的时间更长。此外还有一些类可以降低超界错误的发生。例如begin()和end()可以让你确定边界，以免无意超界。
	cout << "a1[-2]: " << a1[-2] << " at " << &a1[-2] << endl;
	cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
	cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;
	cout << "a2[1]: " << a2[1] << " at " << &a2[1] << endl;
	return 0;

}