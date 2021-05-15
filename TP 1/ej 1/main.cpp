#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <locale.h>
using namespace std;

int main()
{    
    setlocale(LC_CTYPE, "Spanish");

    float kmh, mts;

    cout << "Ingrese el valor en km/h: ";
    cin >> kmh;

    mts = kmh / 3.6;
    
    cout.precision(8);
    cout << "\nResultado en mt/s: " << mts << endl;

    system("pause");
    return 0;
}
