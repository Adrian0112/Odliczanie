#include <iostream>
#include <Windows.h>

using namespace std;

int sekundy;

int main()
{
    cout << "Czy aby na pewno chcesz zniszczyc swoj komputer? " << endl << endl;
    cout << "Podaj liczbe sekund do spalenia jednostki: " << endl;
    cin >> sekundy;
    for (int i=sekundy; i>=0; i--)
    {
        Sleep(1000);
        cout << "Pozostalo " << i << " sekund twojemu komputerowi." << endl;

    }

    return 0;
}
