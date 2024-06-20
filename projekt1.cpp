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
        cout << "0. Wyjscie" << endl;
        cin >> wyjscie;
    } while(wyjscie != 0);
    return 0;
}
