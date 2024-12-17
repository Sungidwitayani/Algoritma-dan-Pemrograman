#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan nilai N: ";
    cin >> n;

    cout << "Angka yang ditampilkan adalah: ";
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
