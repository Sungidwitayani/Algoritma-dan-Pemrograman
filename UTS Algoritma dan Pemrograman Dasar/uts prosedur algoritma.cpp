#include <iostream>
using namespace std;

void tampilkanDeret (int n) {
    cout << "Hasil deret: ";
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        } else {
            cout << "G ";
        }
    }
    cout << endl;
}

int main() {
    int n;

    cout << "Masukkan sebuah angka: ";
    cin >> n;

    tampilkanDeret(n);

    return 0;
}
