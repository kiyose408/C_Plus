//P111:对字符串使用指针
#include<iostream>
#include<cstring>
int main()
{
    using namespace std;
    char animal[20] = "bear";       //定义一个长度为20的animal字符串数组，内含bear
    const char *bird ="wren";   //wern实际表示的是字符串的地址，这条语句是将“wern”的地址付给了bird指针
    char * ps;

    cout << animal <<" and ";
    cout << bird <<"\n";

    cout <<"Enter a kind of animal: ";
    cin >>animal;

    ps = animal;
    cout << ps <<"!\n";
    cout << "Before using strcpy() :\n";
    cout << animal << " at " << (int *)animal<<endl;
    cout <<ps<< " at "<<(int *) ps<<endl;

    ps= new char[strlen(animal)+1];
    strcpy(ps,animal);
    cout << "After using strcpy() :\n";
    cout << animal << " at " << (int * ) animal << endl;
    cout << ps << " at " << (int * ) ps <<endl;
    delete [] ps;
    return 0;
}
//程序创建了一个char数组（animal）和两个指向char的指针变量（bird和ps）。该程序首先将animal数组初始化为字符串“bear”
//然后程序执行了一些新操作，将char指针初始化为指向一个字符串。
//
//
