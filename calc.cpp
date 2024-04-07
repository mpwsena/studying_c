#include <iostream>

using namespace std;

int main(){
    char op;
    float num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the operator (+, -, /, *): ";
    cin >> op;

    cout << "Enter the second number: ";
    cin >> num2;

    switch (op){
        case '+':
            cout << "Result: " << num1 + num2;
            break;
        case '-':
            cout << "Result: " << num1 - num2;
            break;
        case '*':
            cout << "Result: " << num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Result: " << num1 / num2;
            } else {
                cout << "Error: Division by zero!";
            }
            break;
        default:
            cout << "Invalid operator!";
    }
    return 0;
}