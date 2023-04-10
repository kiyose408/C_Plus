//sqrt.cpp -- using the sqrt() function
#include <iostream>
#include <cmath>
int main()
{
    using namespace std;

    double area;            //function a value
    cout << "Enter the floor area, in square feet, of your home:";      //print message that remind user input a number
    cin >> area;        //assignment(¸³Öµ)
    double side;
    side = sqrt(area);      //use the sqrt() to get the equivalent of user's number
    cout << "That's the equivalent of a square " << side << " feet to the side." << endl;
    cout << "How fascinating!" << endl;
    return 0;
}
