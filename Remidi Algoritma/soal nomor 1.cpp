#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Masukkan sebuah bilangan: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << number << " adalah bilangan genap." << endl;
    } else {
        cout << number << " adalah bilangan ganjil." << endl;
    }

    return 0;
}
