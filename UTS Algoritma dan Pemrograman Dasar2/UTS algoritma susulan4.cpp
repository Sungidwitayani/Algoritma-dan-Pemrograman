#include <iostream>
using namespace std;

double hitungTotal(double harga, int jumlah) {
    return harga * jumlah;
}

void tampilkanMenu() {
    cout << "Menu Barang\n";
    cout << "1. Buku (Rp 30,000)\n";
    cout << "2. Pulpen (Rp 10,000)\n";
    cout << "3. Penghapus (Rp 5,000)\n";
    cout << "\n";
}

int main() {
    int pilihan, jumlah;
    char lanjut;
    double total = 0.0, diskon = 0.0;

    do {
        tampilkanMenu();
        cout << "Pilih barang (1-3): ";
        cin >> pilihan;

        double harga = 0.0;
        switch (pilihan) {
            case 1:
                harga = 30000;
                break;
            case 2:
                harga = 10000;
                break;
            case 3:
                harga = 5000;
                break;
            default:
                cout << "Pilihan tidak valid!\n";
                continue;
        }

        cout << "Masukkan jumlah barang: ";
        cin >> jumlah;

        if (jumlah <= 0) {
            cout << "Jumlah barang harus lebih dari 0!\n";
            continue;
        }

        total += hitungTotal(harga, jumlah);

        cout << "Tambah barang lagi? (y/n): ";
        cin >> lanjut;
    } while (lanjut == 'y' || lanjut == 'Y');

    if (total > 100000) {
        diskon = 0.1 * total;
        cout << "\nSelamat! Anda mendapatkan diskon 10%.\n";
    }

    cout << "\n";
    cout << "Total Harga Sebelum Diskon: Rp " << total << endl;
    cout << "Diskon: Rp " << diskon << endl;
    cout << "Total Harga Setelah Diskon: Rp " << total - diskon << endl;
    cout << "\n";

    cout << "Terima kasih telah berbelanja!\n";
    return 0;
}
