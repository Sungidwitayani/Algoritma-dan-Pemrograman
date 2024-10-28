#include <iostream>
using namespace std;

int main() {
    int n, i, j;
    cout << "masukkan jumlah bintang paling atas: ";
    cin >> n;
    i = n;

    do {
        j = 1;
        do {
            cout << "* ";
            j++;
        } while (j <= i);

        cout << endl;
        i--;
    } while (i >= 1);
    return 0;
}
