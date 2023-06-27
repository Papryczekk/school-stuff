// quick.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

using namespace std;

void quick(int tab[], int lewy, int prawy) {
    int i = lewy;
    int j = prawy;
    int x = tab[(lewy + prawy) / 2];
    do {
        while (tab[i] < x) {
            i++;
        }while (tab[j] > x) {
            j--;
        }
        if (i <= j) {
            int pom;
            pom = tab[i];
            tab[i] = tab[j];
            tab[j] = pom;
            i++;
            j--;
        }
    } while (i <= j);
    if (lewy < j) {
        quick(tab, lewy, j);
    }
    if (prawy > i) {
        quick(tab, i, prawy);
    }
}

int main()
{
    int n;
    cout << "podaj ile tab: ";
    cin >> n;
    int* tab = new int[n];
    for (int i = 0; i <= n; i++) {
        cout << "uzupelnij: ";
        cin >> tab[i];
    }
    quick(tab, 0, n - 1);
    for (int i = 0; i <= n; i++) {
        cout << tab[i]<<endl;
    }
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
