#include <iostream>
using namespace std;

int main(){
    int op1, op2;
    char opr;

    cout << "Enter Operand 1: ";
    cin >> op1;
    cout << "Enter Operator: ";
    cin >> opr;
    cout << "Enter Operand 2: ";
    cin >> op2;

    cout << "Result: ";
    switch (opr) {
        case '+':
            cout << op1 + op2 << endl;
            break;
        case '-':
            cout << op1 - op2 << endl;
            break;
        case '*':
            cout << op1 * op2 << endl;
            break;
        case '/':
            cout << op1 / op2 << endl;
            break;
        case '%':
            cout << op1 % op2 << endl;
            break;
        default:
            cout << "Invalid Arguments";
            break;
    }
}
