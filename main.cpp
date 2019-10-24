#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Podaj n " << endl;
    cin >> n;
    switch (n)
    {
    case 2:
        cout << "niedostateczny " << endl;
        break;
    case 3:
        cout << "dostateczny " << endl;
        break;
    case 4:
        cout << "dodry " << endl;
        break;
    case 5:
        cout << "bardzo dobry " << endl;
        break;
    case 6:
        cout << "celujacy " << endl;
        break;
    }

    return 0;
}
