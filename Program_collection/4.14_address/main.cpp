//P98:using the & operator to find address
#include <iostream>
int main()
{
    using namespace std;
    int donuts = 6;
    double cups = 4.5;

    cout <<"donuts value = " << donuts;
    cout << " and donuts ddress = " << &donuts << endl;
    //NOTE: you my need to use unsigned (&donuts)
    //and usigned (&cups)
    cout << "cups value = " << cups;
    cout << " and cups address = " <<&cups << endl;
    return 0;
}
