//Patryk Piotrowski
//2 AG Informatyk | gr. 2
//zad. 1 | Seria: 2 | Lp. 1
//==================================================================================

#include <iostream>

using namespace std;

float a;

int main()
{
    cout << "Podaj liczbe: ";
    cin >> a;

    if (a == 0) {
        cout << endl;
        cout << "Twoja liczba jest rowna zero" << endl;
    }
    else {
        cout << endl;
        cout << "UPS! Twoja liczba nie jest rowna zeru" << endl;
    }
    return 0;
}
