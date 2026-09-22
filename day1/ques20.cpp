#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Enter any positive integer: ";
    cin >> N;

    int reverse = 0;

    while (N > 0){
        int lastDigit = N % 10;
        N /= 10;

        reverse = reverse * 10 + lastDigit;
    }

    cout << "Reversed: " << reverse << endl;
}
