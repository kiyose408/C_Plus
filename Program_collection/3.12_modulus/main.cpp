//P62:uses % operator to convert lbs to stone
#include <iostream>
int main()
{
    using namespace std;
    const int Lbs_per_stn =14;
    int lbs;

    cout << "Enter your weight in pounds:";
    cin >> lbs;
    int stone = lbs / Lbs_per_stn;      //whole stone
    int pounds = lbs % Lbs_per_stn;     //remember in pounds
    cout << lbs <<" pound are " << stone <<" stone, " << pounds << " pound(s).\n";
    return 0;
}
