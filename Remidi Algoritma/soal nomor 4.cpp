#include <iostream>
using namespace std;

int kali(int a, int b) {
    return a * b;
}

int main() {
    int num1, num2;

    cout << "Masukkan bilangan pertama: ";
    cin >> num1;
    cout << "Masukkan bilangan kedua: ";
    cin >> num2;

    int hasil = kali(num1, num2);
    cout << "Hasil kali dari " << num1 << " dan " << num2 << " adalah: " << hasil << endl;

    return 0;
}
