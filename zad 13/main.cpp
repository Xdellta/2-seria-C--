//Patryk Piotrowski
//2 AG Informatyk | gr. 2
//zad. 13 | Seria: 2 | Lp. 1
//==================================================================================

#include <iostream>

using namespace std;

float a;

int main()
{
    cout << "Podaj liczbe: ";
    cin >> a;
    cout << endl;

    if (( a <= 12 ) && ( a >= 1 )) {
        cout << "To moze byc numer miesiaca" << endl;
    }

    else if (( a > 12) || ( a < 1 )) {
        cout << "To NIE jest numer miesiaca" << endl;
    }

    return 0;
}
