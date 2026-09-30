#include <iostream>
using namespace std;

int calc(int a, char opr, int b){

    switch (opr) {
        case '+':
            return a + b;
            break;
        case '-':
            return a - b;
            break;
        case '*':
            return a * b;
            break;
        case '/':
            return a / b;
            break;
        default:
            cout << "Something is wrong" << endl;
            return -1;
    }
}

int main(){
    cout << calc(10, '+', 20) << endl;
    cout << calc(10, '-', 20) << endl;
    cout << calc(10, '*', 20) << endl;
    cout << calc(10, '/', 20) << endl;
}
