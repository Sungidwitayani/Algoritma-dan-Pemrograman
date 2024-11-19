#include <iostream>

using namespace std;

// Function declaration for addition
int add(int a, int b) {
    return a + b;
}

// Function declaration for multiplication
int perkalian (int a, int b) {
    return a * b;
}

// Procedure (void function) declaration for subtraction
void subtract(int a, int b) {
    if (b != 0) {  // Pastikan pembagi bukan nol
        int result = a / b;
        cout << "pembagian: " << result << endl;
    } else {
        cout << "Error: Division by zero is undefined." << endl;
    }

{
    int result = a - b;
    cout << "pengurangan: " << result <<endl;
}
}



int main() {
    int num1, num2;

    // Asking user for input
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Calling the addition function
    int sum = add(num1, num2);
    cout << "Sum: " << sum << endl;

    int kali = perkalian (num1, num2);
    cout << "perkalian: " <<kali<< endl;

   subtract (num1, num2);

   return 0;
}
