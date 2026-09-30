#include <iostream>
using namespace std;

int factorial(int num){
    if (num <= 1){
        return 1;
    }

    return num * factorial(num - 1);
}

int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;

    int original = num;
    int sum = 0;

    while (num > 0){
        int rem = num % 10;
        num /= 10;

        sum += factorial(rem);
    }

    if (sum == original){
        cout << "Yes";
    }
    else{
        cout << "No";
    }

    cout << endl;
}
