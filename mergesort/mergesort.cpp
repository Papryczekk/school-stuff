// mergesort.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
int n;
int* pom = new int[n];

using namespace std;

void scal(int tab[], int lewy, int srodek, int prawy) {
	int i = lewy, j = srodek + 1;
	for (int i = lewy; i <= prawy; i++) {
		pom[i] = tab[i];
	}
	for (int k = lewy; k <= prawy; k++) {
		if (i <= srodek) {
			if (j <= prawy) {
				if (pom[j] < pom[i]) {
					tab[k] = pom[j++];
				}
				else {
					tab[k] = pom[i++];
				}
			}
			else {
				tab[k] = pom[i++];
			}
		}
		else {
			tab[k] = pom[j++];
		}
	}
}

void sortowanie(int tab[], int lewy, int prawy) {
	if (prawy <= lewy) {
		return;
	}
	int srodek = (lewy + prawy) / 2;
	sortowanie(tab, lewy, srodek);
	sortowanie(tab, srodek+1, prawy);
	scal(tab, lewy, srodek, prawy);
}


int main()
{
	cout << "podaj wielkosc tablicy: ";
	cin >> n;
	int* tab = new int[n];
	for (int i = 0; i <= n; i++) {
		cout << "podaj "<< i << " element:";
		cin >> tab[i];
	}
	
	sortowanie(tab, 0, n - 1);
	for (int i = 0; i <= n; i++) {
		cout << tab[i] << endl;
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
