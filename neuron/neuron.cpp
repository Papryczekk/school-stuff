// neuron.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

using namespace std;
int ile;

class neuron {
private:
	double input, weight;
public:
	double a, b, c;
	//konstruktor
	neuron(double* input, double* weight) {
		active(input, weight);
	}
	//funkcja aktywacyjna
	void active(double *input, double *weight) {

		for (int i = 0; i < ile; i++) {
			a =+ input[i];
			b =+ weight[i];
		}
		c = a * b;
		cout << c;
	}
};



int main()
{

	cout << "Podaj ile inputow: ";
	cin >> ile;
	double* input = new double[ile];
	double* waga = new double[ile];
	for (int i = 0; i < ile; i++) {
		cout << "Podaj input: ";
		cin >> input[i];
		cout << "Podaj wage: ";
		cin >> waga[i];
	}
	
	neuron::neuron(input, waga);
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
