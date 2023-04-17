//P93: an aarray of structures
#include <iostream>
struct inflatable
{
    char name[20];
    float volume;
    double price;
};
int main()
{
    using namespace std;
    inflatable guests[2] =      //initiaalizing an array of structs
    {
        {
            "Bambi", 0.5, 21.99         //first structure in an arraay
        },
        {
            "Godzilla",2000,565.99      //next structure in an arraay
        }
    };

    cout << "The guests " << guests[0].name << " and " << guests[1].name << "\nhave aa combined volume of "<<guests[0].volume + guests[1].volume <<" cubic feet.\n";
    return 0;
}
