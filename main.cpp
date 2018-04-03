#include <iostream>
#include <cstdlib>
#include <windows.h>
#include "matematyka.h"

using namespace std;

int main()
{
    poczatek:
    int cyfra;
    string wybor;
    cout << "MENU GLOWNE" << endl;
    cout << "-----------------------" << endl;
    cout << "WITAJ W PROGRAMIE WYKONUJACYM WYBRANE OBLICZENIA MATEMATYCZNE!" << endl;
    cout << "WYBIERZ NR OPERACJI: " << endl;
    cout << "1. Pole trojkata z dlugosci jego bokow (wzor Herona)" << endl;
    cout << "2. Podniesienie dowolnej liczby do dowolnej potegi" << endl;
    cout << "3. Silnia z liczby naturalnej" << endl;
    cout << "4. Czy 1 liczba jest podzielna przez druga" << endl;
    cout << "5. NWD (Algorytm Euklidesa)" << endl;
    cout << "6*. Kalkulator BMI :)" << endl;
    cout << "7. Wyjscie z programu" << endl;

    cin >> cyfra;

    if (cyfra == 1)
        heron();
    else if (cyfra == 2)
        potega();
    else if (cyfra == 3)
        silnia();
    else if (cyfra == 4)
        podzielnosc();
    else if (cyfra == 5)
        euklides();
    else if (cyfra == 6)
        bmi();
    else if (cyfra == 7)
    {
        cout << endl << "DO WIDZENIA!" << endl;
        Sleep(1000);
        return 0;
    }
    else
    {
        system("cls");
        cout << "NIEPOPRAWNY WYBOR!" << endl << endl;
        Sleep(1000);
        system("cls");
        goto poczatek;
    }

    cout << endl << "Czy chcesz wrocic do menu glownego?" << endl;
    cout << "Wcisnij t jesli tak, inny klawisz jesli nie" << endl;
    cin >> wybor;
    if (wybor == "t")
    {
        system("cls");
        goto poczatek;
    }
    else
    {
        cout << endl << "DO WIDZENIA!" << endl;
        Sleep(1000);
        return 0;
    }

    return 0;
}
