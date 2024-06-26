#include <iostream>

using namespace std;

unsigned int factorial(unsigned int n) {
    if (n <= 1) return 1;

    unsigned int output = 1;
    for (int i = 2; i <= n; i++) {
        output *= i;
    }

    return output;
}

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
        cout << "1. Oblicz siline" << endl;
        cout << "2. Sprawdz czy pierwsza" << endl;
        cout << "0. Wyjscie" << endl;
        cin >> wyjscie;

        if (wyjscie == 1) {
            cout << factorial(a) << endl;
        }

        if (wyjscie == 2) {
            cout << isPrime(a) << endl;
        }
    } while(wyjscie != 0);
    return 0;
}
