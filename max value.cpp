#include <iostream>

using namespace std;


int main()
{
     int a, b, c;
    cout << "Podaj pierwsze liczbe A" << endl;
    cin >> a;
    cout << "Podaj drugie liczbe B" << endl;
    cin >> b;
    cout << "Podaj trzecie liczbe C" << endl;
    cin >> c;
    if ( a > c && a > b ) cout << "Wieksza liczba " << a << endl;
    if ( b > a && b > c ) cout << "Wieksza liczba " << b << endl;
    if ( c > a && c > b ) cout << "Wieksza liczba " << c << endl;
    return 0;
}
