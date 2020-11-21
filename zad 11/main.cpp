//Patryk Piotrowski
//2 AG Informatyk | gr. 2
//zad. 11 | Seria: 2 | Lp. 1
//==================================================================================

#include <iostream>

using namespace std;

int main()
{
    int a; //Podawana liczba

    cout << "Podaj liczbe: ";
    cin >> a;
    cout << endl;

    if ( a % 2 == 0 ) {
        cout << "Liczba jest parzysta";
    }

    else {
        cout << "Liczba jest nieparzysta";
    }

    return 0;
}
