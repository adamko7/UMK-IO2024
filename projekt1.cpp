#include <iostream>

using namespace std;

bool isPrime(unsigned int n) {
    if (n <= 1) return false;

    for (int i = 2; i <= (n / 2); i++) {
        if (n % i == 0) return false;
    }

    return true;
}

int main() {
    int a, b;
    cout << "Podaj liczbe calkowita ";
    cin >> a >> b;
    int wyjscie;
    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "1. Sprawdz czy pierwsza" << endl;
        cout << "0. Wyjscie" << endl;
        cin >> wyjscie;

        if (wyjscie == 1) {
            cout << isPrime(a) << endl;
        }
    } while(wyjscie != 0);
    return 0;
}
