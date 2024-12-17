#include <iostream>
using namespace std;

int main() {
    int n, jumlahGenap = 0;

    cout << "Masukkan nilai N: ";
    cin >> n;

    for (int i = 2; i <= n; i += 2) {
        jumlahGenap += i;
    }

    cout << "Jumlah bilangan genap dari 1 hingga " << n << " adalah: " << jumlahGenap << endl;

    return 0;
}
