#include <iostream>
using namespace std;

int main() {
    int a = 15;
    int b = 20;
    cout << "Enter the velue of a: ";
    cin >> a;
    cout << "Enter the velue of b: ";
    cin >> b;
    cout << "Before swap: a = " << a << ", b = " << b << endl;

    int temp = a;
    a = b;
    b = temp;

    cout << "After swap: a = " << a << ", b = " << b << endl;

    return 0;
}

