#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {1,2,3,4,5};


    // Mpdifying the elements of the array
    numbers[2] = 10;
    numbers[3] = 20;

    // Printing modified array
    for(int i = 0; i < 5; i++) {
        cout << "Element at index " << i << ": " << numbers[i] << endl;
    }

    return 0;
}
