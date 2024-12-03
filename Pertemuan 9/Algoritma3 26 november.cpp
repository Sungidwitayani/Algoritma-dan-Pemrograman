#include <iostream>
#include <vector>
using namespace std;

// Fungsi untuk menampilkan menu utama
void displayMenu() {
    cout << "\nMenu Array Manipulation:" << endl;
    cout << "1. Entry nilai array" << endl;
    cout << "2. Ganti nilai array" << endl;
    cout << "3. Tentukan panjang array" << endl;
    cout << "4. Keluar" << endl;
    cout << "Pilih menu: ";
}

// Fungsi untuk entry nilai array
void entryArray(vector<int>& arr) {
    int n;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    arr.clear();
    cout << "Masukkan nilai array:" << endl;
    for (int i = 0; i < n; ++i) {
        int value;
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> value;
        arr.push_back(value);
    }

    cout << "Array berhasil diisi!" << endl;
}

// Fungsi untuk mengganti nilai array
void replaceArrayValue(vector<int>& arr) {
    int maxSize = 100; // Batas maksimum panjang array
    if (arr.size() > maxSize) {
        cout << "Panjang array melebihi batas maksimum (" << maxSize << "). Operasi tidak dapat dilakukan." << endl;
        return;
    }

    int index, newValue;
    cout << "Masukkan indeks elemen yang ingin diganti (mulai dari 0): ";
    cin >> index;

    if (index < 0 || index >= arr.size()) {
        cout << "Indeks tidak valid!" << endl;
        return;
    }

    cout << "Masukkan nilai baru: ";
    cin >> newValue;

    arr[index] = newValue;
    cout << "Nilai array pada indeks " << index << " berhasil diganti!" << endl;
}

// Fungsi untuk menampilkan panjang array
void displayArrayLength(const vector<int>& arr) {
    cout << "Panjang array saat ini: " << arr.size() << endl;
}

int main() {
    vector<int> array;
    int choice;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                entryArray(array);
                break;
            case 2:
                replaceArrayValue(array);
                break;
            case 3:
                displayArrayLength(array);
                break;
            case 4:
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << "Pilihan tidak valid! Silakan coba lagi." << endl;
        }
    } while (choice != 4);

    return 0;
}
