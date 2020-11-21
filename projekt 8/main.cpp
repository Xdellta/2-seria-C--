//Patryk Piotrowski
//2 AG Informatyk | gr. 2
//zad. 8 | Seria: 2 | Lp. 1
//==================================================================================

#include <iostream>

using namespace std;

float a, b, c;

int main()
{
    cout << "Podaj liczbe: ";
    cin >> a;

    cout << "Podaj druga liczbe: ";
    cin >> b;

    if (( a == 0) || ( b == 0)) {
        cout << endl;
        cout << "Ale Ale panie kolego! Nie dzielimy przez zero." << endl;
    }

    else {
        c = ( a / b );
        cout << endl;
        cout << "Wynik dzielenia: " << c << endl;
    }

    return 0;
}
