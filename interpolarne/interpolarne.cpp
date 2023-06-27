// interpolarne.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

using namespace std;
int n = 5,s;
int* tab = new int[n];

int wyszukiwanie(int x, int tab[], int n) {
    int m = n / 2;
    int* pom = new int[m];
    
    if (x < tab[m]) {
        for (int i = 0; i < m; i++) {
            pom[i] = tab[i];
        }
        wyszukiwanie(x, pom, m);
    }
    else if (x > tab[m]) {
        for (int i = m; i < n; i++) {
            pom[i] = tab[i];
        }
        wyszukiwanie(x, pom, m);
    }
    else {
        return m;
    }
}

int main()
{
    cout << "uzupełnij tablice: ";
    for (int i = 0; i < n; i++) {
        cin >> tab[i];
    }
    cout << "Podaj szukana: ";
    cin >> s;
    cout << "Wyszukana: " << wyszukiwanie(s, tab, n);
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
