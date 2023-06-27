#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int nwd(int a, int h)
{
    int temp;
    while (1) {
        temp = a % h;
        if (temp == 0)
            return h;
        a = h;
        h = temp;
    }
}

long long fastPower(long long base, long long power, long long modulus)
{
    long long result = 1;
    base = base % modulus;

    while (power > 0) {
        if (power % 2 == 1) {
            result = (result * base) % modulus;
        }
        base = (base * base) % modulus;
        power = power / 2;
    }

    return result;
}

int main()
{
    string haslo;
    int szyfr[7];
    int p = 7;
    int q = 23;
    int crypt[7];

    int c;

    int n = p * q;

    int e = 2;
    int phi = (p - 1) * (q - 1);
    while (e < phi) {
        if (nwd(e, phi) == 1)
            break;
        else
            e++;
    }

    int k = 2;
    int d;
    int temp = 1;
    while ((temp + (k * phi)) % e != 0) {
        temp++;
    }
    d = (temp + (k * phi)) / e;

    cout << "Podaj haslo: ";
    cin >> haslo;

    int size = haslo.size();
    char character;
    for (int i = 0; i < size; i++) {
        character = haslo[i];
        int msg = static_cast<int>(character);

        c = fastPower(msg, e, n);
        crypt[i] = c;
    }

    cout << "Zaszyfrowane haslo: ";
    for (int i = 0; i < size; i++) {
        cout << crypt[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < size; i++) {
        int m = fastPower(crypt[i], d, n);
        szyfr[i] = m;
    }

    cout << "Odszyfrowane haslo: ";
    for (int i = 0; i < size; i++) {
        cout << static_cast<char>(szyfr[i]);
    }
    cout << endl;

    return 0;
}
