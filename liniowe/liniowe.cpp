#include <iostream>

using namespace std;
int n,s;
bool search;

int main()
{
	cout << "podaj wielkosc tablicy: ";
	cin >> n;
	int* tab = new int[n];
	cout << "wypelnij tablice: ";
	for (int i = 0; i < n; i++) {
		cin >> tab[i];
	}
	cout << "Podaj co szukasz: ";
	cin >> s;

	for (int i = 0; i <= n; i++) {
		if (tab[i] == s)
		{
			cout << "Znaleziono: " << s << " na pozycji: " << i+1;
			search = true;
			break;
		}
		else {
			search = false;
		}
	}
	if (!search) {
		cout << "Nie znaleziono";
	}
}
