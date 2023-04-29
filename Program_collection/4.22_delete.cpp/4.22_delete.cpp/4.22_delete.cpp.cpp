//P116:usinf the delete operator
#include <iostream>
#include <cstring>	//or string.h
#pragma warning(disable:4996)		//防止strcpy在vs中安全性报错
using namespace std;
char* getname(void);		//function prototype
int main()
{
	char* name;

	name = getname();
	cout << name << " at " << (int*)name << "\n";
	delete [] name;

	name = getname();
	cout << name << " at " << (int*)name << "\n";
	delete[] name;
	return 0;
}
char* getname()
{
	char temp[80];
	cout << "Enter last name: ";
	cin >> temp;
	char* pn = new char[strlen(temp) + 1];
	strcpy(pn, temp);

	return pn;
}