#include <iostream>

using namespace std;

int main()
{
    int p, q;
    int wynik;
    cout << "Podaj liczbe P" << endl;
    cin >> p;
    cout << "Podaj liczbe Q" << endl;
    cin >> q;
    if (p ==2 || p==4 || p==6)
    {
       if (q == 2 || q == 4 || q == 5)
       {
          wynik = p + (3*q);
       }
       else
       {
          wynik = (2*q);
       }
    }
    else
    {
       if (q == 1 || q == 3 || q == 6)
       {
          if (p == q)
         {
          wynik = (5*p) + 3;
         }
         else
         {
           wynik = (2*q) + p;
         }
       }
       else
       {
            wynik = min(p,q) + 4;
            if ( p == 5 && q == 5 )
            {
              wynik = wynik + 5;
            }
       }

    }


    cout << "Wynik gry" << wynik;
    return 0;
}
