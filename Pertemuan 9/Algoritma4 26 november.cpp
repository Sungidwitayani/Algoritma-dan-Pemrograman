#include <iostream>
using namespace std;

// Fungsi untuk mencetak elemen-elemen dari matriks
void printMatrix(int matrix[3][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element at [" << i << "][" << j << "]: " << matrix[i][j] << endl;
        }
    }
}

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Memanggil fungsi untuk mencetak elemen matriks
    printMatrix(matrix, 3, 3);

    return 0;
}
