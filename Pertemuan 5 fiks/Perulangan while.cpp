#include <iostream>
using namespace std;

int main() {
    int n, i, j;

    cout << "Masukkan jumlah bintang paling atas: ";
    cin >> n;
    i = n;

    while (i >= 1) {
            j = 1;
        while (j <= i) {
                cout << "* ";
                j++;
        }
        cout << endl;
        i--;
    }
    return 0;
}
