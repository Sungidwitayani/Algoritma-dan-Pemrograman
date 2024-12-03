#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {1,2,3,4,5};

    // Accesing and printing each element of the array
    for(int i = 0; i < 5; i++) {
        cout << "Element at index " << i << ": " << numbers [i] << endl;
    }

    return 0;
}
