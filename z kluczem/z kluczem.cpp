#include <iostream>
#include <string>

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


int main()
{
    string haslo;
    char szyfr[6];
    double p = 7;
    double q = 23;
    double crypt[6];

    double c;

    double n = p * q;

    double e = 2;
    double phi = (p - 1) * (q - 1);
    while (e < phi) {

        if (nwd(e, phi) == 1)
            break;
        else
            e++;
    }

    int k = 2; 
    double d = (1 + (k * phi)) / e;

    cout << "podaj haslo: ";
    cin >> haslo;

    cout << haslo << endl;

    int size = haslo.size();
    char character;
    for (int i = 0; i < size; i++) {
        character = haslo[i];
        int msg = static_cast<int>(character);
        szyfr[i] = static_cast<char>(msg);

        c = pow(msg, e);
        c = fmod(c, n);
        crypt[i] = c;
        szyfr[i] = static_cast<char>(c);

    }
    szyfr[size] = '\0';
    

    for (int i = 0; i < size; i++) {
        cout << szyfr[i] << ";";
    }

    cout <<  endl;


    for (int i = 0; i < size; i++) {
        
        double m = pow(crypt[i], d);
        m = fmod(m, n);
        szyfr[i] = static_cast<char>(m);
    }
    szyfr[size] = '\0';
    for (int i = 0; i < size; i++) {
        cout << szyfr[i] << ";";
    }

}

