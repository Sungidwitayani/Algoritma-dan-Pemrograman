#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah bintang: ";
    cin >> n;
    for(int i = 1; i <= n; i++) {
            cout << "*";
    }

    return 0;
}

