//Este programa calcula la intersección de dos segmentos
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{

    float m1, m2, b1, b2, intersection_X, intersection_Y;

    cout << "Formato de las rectas: y=m*x+b" << endl;

    cout << "\nIntroduzca m1: " << endl;
    cin >> m1;
    cout << "\nIntroduzca b1: " << endl;
    cin >> b1;
    cout << "\nIntroduzca m2: " << endl;
    cin >> m2;
    cout << "\nIntroduzca b2: " << endl;
    cin >> b2;

    if (m1 == m2 && b1 != b2)
    {
        cout << "\nNo hay intersección" << endl;
        system("pause");
    }
    else
    {
        if (m1 == m2 && b1 == b2)
        {
            cout << "\nEstan superpuestas una sobre la otra" << endl;
            system("pause");
        }
        else
        {
            intersection_X = (b2 - b1) / (m1 - m2);
            intersection_Y = m1 * intersection_X + b1;

            cout << "\nPunto de intersección en X = " << intersection_X << endl;
            cout << "\nPunto de intersección en Y = " << intersection_Y << endl;
        }
    }
    system("\npause");
    return 0;
}