//#include<iostream>
//using namespace std;
//
////引用做函数的返回值
////1、不要返回局部变量的引用
//int& test01()
//{
//	int a = 10;	//局部变量存放在四区中的  栈区
//	return a;
//}
////2、函数的调用可以做为左值
//
//int& test02()
//{
//	static int a = 10;	//静态变量，存放在全局区，全局区上的数据在程序结束后系统释放
//	return a;
//}
//int main()
//{
//	int& ref = test01();
//
//	cout << "ref = " << ref << endl;
//	cout << "ref = " << ref << endl;
//
//	int& ref1 = test02();
//	cout << "ref1 = " << ref1 << endl;//实现对于静态变量的返回
//	cout << "ref1 = " << ref1 << endl;//在程序结束之前不会被释放
//
//	//如果函数的返回值是引用，这个函数调用可以作为左值
//
//	test02() = 1000;//返回的是a，相当于对a直接操作
//
//	cout << "ref1 = " << ref1 << endl;//ref1就是a的别名，所以此时就会改变此处的值了
//	cout << "ref1 = " << ref1 << endl;
//
//	system("pause");
//}