#include <iostream>

using namespace std;
int n = 5,s;
int* tab = new int[n];

int wyszukiwanie(int x, int tab[]) {
    int l = 1;
    int r = n; 
    int m;
    while (l <= r) {
        m = (l + r) / 2;
        if (tab[m] < x) {
            l = m + 1;
        }
        else if (tab[m] > x) {
            r = m - 1;
        }
        else {
            return m;
        }
    }
    return -1;
}

int main()
{
    cout << "wypełnij tablice: ";
    for (int i = 0; i < n; i++) {
        cin >> tab[i];
    }
    cout << "Podaj co szukasz: ";
    cin >> s;
    int ret;
    ret = wyszukiwanie(s, tab);
    if (ret == -1) {
        cout << "Nie znaleziono";
    }
    else {
        cout <<"Pozycja: "<< ret+1;
    }
}
