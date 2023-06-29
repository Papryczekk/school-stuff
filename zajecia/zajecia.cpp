#include <iostream>
#include <string>
#include <map>

using namespace std;
int n, mocS, y;
string x, ozn;

int main()
{
    map<string, int> moc;

    cout << "Podaj ile elementow: ";
    cin >> n;

    for (int i=0; i<n; i++){
        cout << "Podaj oznaczenie silnika: ";
        cin >> ozn;
        cout << "Podaj ile km: ";
        cin >> mocS;
        moc[ozn] = mocS;
    }

    for(auto silnik : moc){
        cout << silnik.first << " moc: " << silnik.second << "km" << endl;
    }

    cout << "szukanie oznaczenia: ";
    cin >> x;

    for(auto silnik : moc){
        int i;
        i++;
        if(silnik.first == x){
            cout << " znaleziono na: " << i << " miejscu" << endl;
            break;
        }
    }
    cout << "szukana moc: ";
    cin >> y;
    for(auto silnik : moc){
        int i;
        i++;
        if(silnik.second == y){
            cout << " znaleziono na: "<< i << " miejscu" << endl;
            break;
        }
    }

    cout << "co usunac? (ozn silnika) ";
    string us;
    cin >> us;
    moc.erase(us);
    cout << "Usunieto " << us << endl;
    return 0;
}