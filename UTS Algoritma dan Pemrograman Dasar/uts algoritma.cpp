#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Masukkan angka: ";
    cin >> n;

    for (int i = 2; i < n; i += 2) {
        cout << i << " G ";
    }

    return 0;
}
