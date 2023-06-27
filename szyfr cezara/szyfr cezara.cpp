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
