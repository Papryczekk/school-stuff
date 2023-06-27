// szyfr cezara.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    string passwd;
    int n;
    char szyfr[6]; 

    cout << "Podaj haslo do szyfrowania: ";
    cin >> passwd;
    cout << "Podaj wartosc przesuniecia n: ";
    cin >> n;

    int size = passwd.size();
    cout << "Rozmiar hasla: " << size << endl;

    char character;
    for (int i = 0; i < size; i++) {
        character = passwd[i];
        int cha = static_cast<int>(character);
        cha = cha + n;
        if (cha > 122) {
            cha = cha - 26;
        }
        if (cha < 97) {
            cha = cha + 26;
        }
        cout << cha << ";";
        szyfr[i] = static_cast<char>(cha);
    }
    szyfr[size] = '\0';

    cout << "\nSzyfrowane haslo: " << szyfr << endl;
    cout << "--------------------odszyfrowanie--------------------\n";
    cout << "Twoje hasło to: ";
    for (int i = 0; i < size; i++) {
        cout << szyfr[i] << " ";
    }
    cout << endl;
    cout << "Podaj wartość przesunięcia n: ";
    cin >> n;
    for (int i = 0; i < size; i++) {
        int cha = static_cast<int>(szyfr[i]);
        cha = cha - n;
        if (cha > 122) {
            cha = cha + 26;
        }
        if (cha < 97) {
            cha = cha - 26;
        }
        cout << cha << ";";
        szyfr[i] = static_cast<char>(cha);
    }
    szyfr[size] = '\0';
    cout << "Odszyfrowane haslo: " << szyfr << endl;
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
