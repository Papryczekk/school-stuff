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
