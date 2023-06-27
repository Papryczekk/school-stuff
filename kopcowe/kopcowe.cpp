// kopcowe.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

using namespace std;
int n,x,j,k,pom,m;


int main()
{
    cout << "podaj wielkość tablicy: ";
    cin >> n;
    int* tab = new int[n];
    for (int i = 1; i <= n; i++) {
        cout << "Podaj " << i << " wartosc: ";
        cin >> tab[i];
    }
    for (int i = 2; i <= n; i++) {
        j = i;
        k = j / 2;
        x = tab[i];
        while ((k > 0) && (tab[k] < x)) {
            tab[j] = tab[k];
            j = k; k = j / 2;
        }
        tab[j] = x;
    }

    for (int i = n; i > 1; i--) {
        pom = tab[1];
        tab[1] = tab[i];
        tab[i] = pom;
        j = 1;
        k = 2;
        while (k < i) {
            if ((k + 1 < i) && (tab[k + 1] > tab[k])) {
                m = k + 1;
            }
            else {
                m = k;
            }if (tab[m] <= tab[j]) {
                break;
            }
            pom = tab[j];
            tab[j] = tab[m];
            tab[m] = pom;
            j = m; k = j + j;
        }
    }
    cout << "Po sortowaniu:\n\n";
    for (int i = 1; i <= n; i++) {
        cout << tab[i] << endl;
    }
    return 0;
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
