#include <iostream>
using namespace std;

int main()
{
    float Kg, Gr;
    cout << "vazn ra be kg vared konid: ";
    cin >> Kg;
    Gr = Kg * 1000;
    cout << Kg << " Kg"
         << " = " << Gr << " gr";
};