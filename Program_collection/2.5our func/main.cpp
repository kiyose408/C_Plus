//ourfunc.cpp -- defining your own function
//This program define a function that print a sentences with a input value,and it can be called in the main program
#include <iostream>
void simon(int);        //function prototype for simon()

int main()
{
    using namespace std;
    simon(3);       //call the simon() function
    cout << " Pick an integer: ";
    int count;
    cin >> count;
    simon(count);       //call it again
    cout << "Done!" << endl;
    return 0;
}
void simon(int n)
{
    using namespace std;
    cout << "Simon says touch your toes " << n <<" times." << endl;
}

