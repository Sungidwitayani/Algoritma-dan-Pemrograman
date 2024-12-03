#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 8;
    cout << "Enter the velue of a: ";
    cin >> a;
    cout << "Enter the velue of b: ";
    cin >> b;

    if (a < b) {
    int temp = a;
    a = b;
    b = temp;
        cout << "Before swap: a = " << a << ", b = " << b << endl;
    }else{
        cout << "After swap: a = " << a << ", b = " << b << endl;
    }
    return 0;
}
