#include <iostream>
using namespace std;

bool isPerfectNumber(int num){
    int sum = 0;

    for (int i = 1; i < (num/2) + 1; i++){
        if (num % i == 0){
            sum += i;
        }
    }

    return sum == num;
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    if (isPerfectNumber(n)){
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}
