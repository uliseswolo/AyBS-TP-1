#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

int main()
{
    float kmh, mts;
    cout << "Ingrese el valor en km/h: ";
    cin >> kmh;
    mts = kmh / 3.6;
    cout.precision(8);
    cout << "\nResultado en mt/s: " << mts << endl;

    system("pause");
    return 0;
}