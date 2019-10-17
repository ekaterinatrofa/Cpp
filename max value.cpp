#include <iostream>

using namespace std;


int main()
{
     int a, b, c;
    cout << "Podaj pierwsze liczbe a" << endl;
    cin >> a;
    cout << "Podaj drugie liczbe b" << endl;
    cin >> b;
    cout << "Podaj trzecie liczbe c" << endl;
    cin >> c;
    if ( a > c && a > b ) cout << "Wieksza liczba " << a << endl;
    if ( b > a && b > c ) cout << "Wieksza liczba " << b << endl;
    if ( c > a && c > b ) cout << "Wieksza liczba " << c << endl;
    return 0;
}
