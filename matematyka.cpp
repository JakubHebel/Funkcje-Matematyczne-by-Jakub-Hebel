#include <iostream>
#include <cstdlib>
#include <cmath>
#include <windows.h>
#include "matma.h"

using namespace std;

void heron()
{
    trojkat:
    double a, b, c;
    system("cls");
    cout << "Wprowadz dlugosci bokow trojkata: ";
    cin >> a >> b >> c;
    if (a==0 || b==0 || c==0)
    {
        system("cls");
        Sleep(100);
        cout << "WPROWADZ DLUGOSCI BOKOW BEDACE LICZBAMI WIEKSZYMI OD 0!" << endl;
        Sleep(2500);
        goto trojkat;
    }
    cout << "Pole trojkata o bokach " << a << " " << b << " " << c << " wynosi: " << pole(a,b,c) << endl;
}

void potega()
{
    double a, b, wynik;
    system("cls");
    cout << "Wprowadz liczbe ktora chcesz spotegowac: ";
    cin >> a;
    cout << "Wprowadz stopien potegi: ";
    cin >> b;
    cout.precision(1000);
    cout << "Wynik potegowania " << a << " do " << b << " wynosi: " << potegowanie(a,b) << endl;
}

void silnia()
{
    silka:
    double a;
    system("cls");
    cout << "Wprowadz liczbe z ktorej silnie chcesz otrzymac: ";
    cin >> a;
    if (a>17)
    {
        system("cls");
        cout << "ZA DUZA LICZBA, PROGRAM OBSLUGUJE LICZBY DO 17!" << endl;
        Sleep(2500);
        goto silka;
    }
    cout.precision(1000);
    cout << "Silnia z " << a << " wynosi: " << factorial(a) << endl;
}

void podzielnosc()
{
    dzielenie:
    int a, b, c;
    system("cls");
    cout << "Wprowadz liczbe ktorej podzielnosc chcesz sprawdzic: ";
    cin >> a;
    cout << "Wprowadz liczbe, przez ktora chcesz dzielic: ";
    cin >> b;
    if (b==0)
    {
        system("cls");
        cout << "NIE WOLNO DZIELIC PRZEZ 0!!!" << endl;
        Sleep(1200);
        goto dzielenie;
    }
    c = divisibility(a,b);
    if (c == 0)
    {
        cout << a << " jest podzielne przez " << b << endl;
    }
    else
    {
        cout << a << " nie jest podzielne przez " << b << endl;
    }
}

void euklides()
{
    int a, b, c;
    system("cls");
    cout << "Wprowadz 2 liczby, ktorych NWD chcesz otrzymac: ";
    cin >> a >> b;
    if (a==0 && b==0)
        cout << "Nieskonczenie wiele wspolnych dzielnikow" << endl;
    else if (a==0 || b==0)
    {
        if (a==0)
            cout << "NWD z " << a << " i " << b << " wynosi: " << b << endl;
        else
            cout << "NWD z " << a << " i " << b << " wynosi: " << a << endl;
    }
    else
        cout << "NWD z " << a << " i " << b << " wynosi: " << nwd(a,b) << endl;
}

void bmi()
{
    double masa, wzrost, bmi;
    system("cls");
    cout << "Wprowadz swoja mase ciala w kg: ";
    cin >> masa;
    cout << "Wprowadz swoj wzrost w cm: ";
    cin >> wzrost;
    wzrost /= 100;
    bmi = bodymass(masa,wzrost);

    cout << endl << "Twoje BMI wynosi " << bmi << endl;
    cout << "Masz ";

    if (bmi < 16)
        cout << "wyglodzenie" << endl;

    else if (bmi >= 16 && bmi < 17)
        cout << "wychudzenie" << endl;

    else if (bmi >= 17 && bmi < 18.5)
        cout << "niedowage" << endl;

    else if (bmi >= 18.5 && bmi < 25)
        cout << "prawidlowa wage" << endl;

    else if (bmi >= 25 && bmi < 30)
        cout << "nadwage" << endl;

    else if (bmi >= 30 && bmi < 35)
        cout << "I stopien otylosci" << endl;

    else if (bmi >= 35 && bmi < 40)
        cout << "II stopien otylosci (otylosc kliniczna)" << endl;

    else
        cout << "III stopien otylosci (otylosc skrajna)" << endl;
}
