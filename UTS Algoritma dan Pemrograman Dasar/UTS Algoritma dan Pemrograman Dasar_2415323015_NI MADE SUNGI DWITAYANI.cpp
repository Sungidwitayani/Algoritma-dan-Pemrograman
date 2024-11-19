#include <iostream>
#include <string>
using namespace std;

// Function untuk menghitung total harga
double hitungTotal(double harga, int jumlah) {
    return harga * jumlah;
}

// Procedure untuk menampilkan daftar barang
void tampilkanMenu() {
    cout << "Menu Barang\n";
    cout << "1. Buku (Rp 30,000)\n";
    cout << "2. Pulpen (Rp 10,000)\n";
    cout << "3. Penghapus (Rp 5,000)\n";
    cout << "\n";
}

// Main Program
int main() {
    int pilihan, jumlah;
    char lanjut;
    double total = 0.0, diskon = 0.0;

    do {
        // Tampilkan menu
        tampilkanMenu();
        cout << "Pilih barang (1-3): ";
        cin >> pilihan;

        // Harga barang berdasarkan pilihan
        double harga = 0.0;
        switch (pilihan) {
            case 1:
                harga = 30000; // Harga buku
                break;
            case 2:
                harga = 10000; // Harga pulpen
                break;
            case 3:
                harga = 5000;  // Harga penghapus
                break;
            default:
                cout << "Pilihan tidak valid!\n";
                continue; // Ulangi input jika salah
        }

        // Input jumlah barang
        cout << "Masukkan jumlah barang: ";
        cin >> jumlah;

        // Validasi jumlah barang
        if (jumlah <= 0) {
            cout << "Jumlah barang harus lebih dari 0!\n";
            continue;
        }

        // Hitung total harga
        total += hitungTotal(harga, jumlah);

        // Tanya apakah ingin melanjutkan
        cout << "Tambah barang lagi? (y/n): ";
        cin >> lanjut;
    } while (lanjut == 'y' || lanjut == 'Y');

    // Pemberian diskon jika total lebih dari Rp 100,000
    if (total > 100000) {
        diskon = 0.1 * total; // Diskon 10%
        cout << "\nSelamat! Anda mendapatkan diskon 10%.\n";
    }

    // Tampilkan total harga
    cout << "\n";
    cout << "Total Harga Sebelum Diskon: Rp " << total << endl;
    cout << "Diskon: Rp " << diskon << endl;
    cout << "Total Harga Setelah Diskon: Rp " << total - diskon << endl;
    cout << "\n";

    cout << "Terima kasih telah berbelanja!\n";
    return 0;
}
