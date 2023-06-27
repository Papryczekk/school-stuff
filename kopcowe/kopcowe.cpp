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
