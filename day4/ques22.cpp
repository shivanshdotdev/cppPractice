#include <iostream>
using namespace std;

bool isPrime(int num){
    bool prime = true;

    for (int i = 2; i*i <= num; i++){
        if (num % i == 0){
            prime = false;
            break;
        }
    }

    return prime;
}

int main(){
    cout << "Enter number to check if prime: ";
    int x;
    cin >> x;

    if (isPrime(x)){
        cout << "True";
    }
    else {
        cout << "False";
    }
}
