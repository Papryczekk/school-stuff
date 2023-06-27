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

