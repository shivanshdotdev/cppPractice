#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter number: ";
    cin >> num;

    int digit;
    cout << "Enter the digit: ";
    cin >> digit;

    int count = 0;

    while (num > 0){
        int rem = num % 10;
        num /= 10;

        if (digit == rem){
            count++;
        }
    }

    cout << count << endl;
}
