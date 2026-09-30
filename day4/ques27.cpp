#include <cmath>
#include <iostream>
using namespace std;

bool isArmstrong(int num){
    int digitCount = 0;
    int numCopy = num;

    while (numCopy > 0){
        numCopy /= 10;
        digitCount++;
    }

    int sum = 0;
    int original = num;
    while (num > 0){
        sum += pow(num % 10, digitCount);
        num /= 10;
    }

    return sum == original;
}

int main(){
    int n;
    cout << "Enter to check if the number is armstrong or not: ";
    cin >> n;

    if (isArmstrong(n)){
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}
