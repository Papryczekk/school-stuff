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


