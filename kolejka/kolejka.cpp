// kolejka.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <time.h>
using namespace std;

int k, ocz, l, pom;


int main()
{
	srand(time(NULL));
	k = ocz = l = pom = 0;
	k = 5;
	int* kolejna = new int[k];
	int* serwer = new int[k];
	for (int i = 0; i < 5; i++) {
		serwer[i] = i;
		kolejna[i] = 105;
	}
	cout << "na serwerze sa uzytkownicy: ";
	for (int i = 0; i < 5; i++) {
		cout<<serwer[i]<<";";
	}
	for (int i = 0; i < k; i++) {
		for (int i = 0; i < k; i++) {
			ocz = rand() % 100 + 1;
			if (ocz <= 0) {
				cout << "podaj prawidlowa cyfre: ";
				cin >> ocz;
			}
			l = 0;
			if (l == 5) {
				l = 0;
			}
			kolejna[l] = ocz;
		}
		for (int i = 0; i < k; i++) {
			for (int j = 0; j < k; j++) {
				if (kolejna[j] > kolejna[j + 1]) {
					pom = kolejna[j];
					kolejna[j] = kolejna[j + 1];
					kolejna[j + 1] = pom;
				}
			}
		}
	}
	cout <<endl<< "kolejka: ";
	for (int i = 0; i < 5; i++) {
		cout << kolejna[i] << ";";
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
