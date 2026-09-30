#include <iostream>
using namespace std;

int HCF(int a, int b){
    int divisor = a;
    int dividend = b;

    while (true){
        
        int remainder = dividend % divisor;

        if (remainder == 0){
            break;
        }

        dividend = divisor;
        divisor = remainder;
        
    }

    return divisor;
}

int main(){
    cout << "Give me two numbers and I will tell its LCM: ";
    int a, b;
    cin >> a >> b;

    int LCM = (a * b) / HCF(a, b);

    cout << LCM << endl;
}
