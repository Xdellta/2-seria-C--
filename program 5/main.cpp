//Patryk Piotrowski
//2 AG Informatyk | gr. 2
//zad. 5 | Seria: 2 | Lp. 1
//==================================================================================

#include <iostream>

using namespace std;

float a;

int main()
{
    cout << "Podaj liczbe: ";
    cin >> a;

    if ( a == 0) {
        cout << endl;
        cout << "Twoja liczba jest rowna zero" << endl;
    }

    else if ( a > 0 ) {
        cout << endl;
        cout << "Twoja liczba jest dodatnia" << endl;
    }

    else {
        cout << endl;
        cout << "Twoja liczba jest ujemna" << endl;
    }

    return 0;
}
