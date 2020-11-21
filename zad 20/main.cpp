//Patryk Piotrowski
//2 AG Informatyk | gr. 2
//zad. 20 | Seria: 2 | Lp. 1
//==================================================================================

#include <iostream>

using namespace std;

int main()
{
    int liczba; // Podana liczba

    cout << "Podaj liczbe: ";
    cin >> liczba;
    cout << endl;

    switch ( liczba ) {
    case 1:
        cout << "Poniedzialek" << endl;
        break;

    case 2:
        cout << "Wtorek" << endl;
        break;

    case 3:
        cout << "Sroda" << endl;
        break;

    case 4:
        cout << "Czwartek" << endl;
        break;

    case 5:
        cout << "Piatek" << endl;
        break;

    case 6:
        cout << "Sobota" << endl;
        break;

    case 7:
        cout << "Niedziela" << endl;
        break;

    default:
        cout << "Podana liczba nie jest numerem dnia" << endl;
        break;
        }

    return 0;
}
