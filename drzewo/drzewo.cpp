// drzewo.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>
#include <stdlib.h>
#include <windows.h>

using namespace std;

string marka = "ford";
string markaP;

char czujnikO, plyn, uszczelka, silnik, mieszanka, tloki;

int tempO;

void wymien_olej() {
    cout << "wymien olej i filtry";
}

void czy_silnik() {
    cout << "Czy silnik rowno pracuje? t/n";
    cin >> silnik;
    if (tolower(silnik) == 116) {
        cout << "Diagnoza zakonczona!";
        Sleep(3000);
        exit(0);
    }
    cout << "Czy prawidlowa mieszanka? t/n";
    cin >> mieszanka;
    if (tolower(mieszanka) != 116) {
        cout << "Wyczysc dolot i kolektor";
        Sleep(3000);
        exit(0);
    }
    cout << "Czy sprawne tloki itd? t/n";
    cin >> tloki;
    if (tolower(tloki) != 116) {
        cout << "wymien je na nowe";
        Sleep(3000);
        exit(0);
    }
    cout << "wymien silnik";
    Sleep(3000);
    exit(0);
}

int main()
{
    cout << "podaj marke auta: ";
    cin >> markaP;
    if (marka != markaP) {
        cout << "Nieprawidlowa marka!";
        return 0;
    }
    cout << "podaj temperature oleju: ";
    cin >> tempO;
    if (tempO < 80 || tempO > 110) {
        wymien_olej();
        return 0;
    }
    cout << "Czy czujnik cisnienia oleju jest sprawny? t/n: ";
    cin >> czujnikO;
    if (tolower(czujnikO) != 116) {
        cout << "Wymien czujnik cisnienia oleju";
        return 0;
    }
    cout << "Czy ubywa plynu chlodzacego t/n: ";
    cin >> plyn;
    if (tolower(plyn) == 116) {
        cout << "Czy przedostaje sie do oleju t/n: ";
        cin >> uszczelka;
        if (tolower(uszczelka) != 110) {
            cout << "Wymien uszczelke pod glowica"<<endl;
            wymien_olej();
            return 0;
        }
        czy_silnik();
    }
    czy_silnik();
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
