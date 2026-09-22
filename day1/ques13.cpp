#include <iostream>
using namespace std;

bool isPrime(int num);

int main(){
    int N;
    cout << "Enter any positive integer: ";
    cin >> N;

    for (int i = 2; i <= N; i++){
        if (isPrime(i)){
            cout << i << " ";
        }
    }

    cout << endl;
}

bool isPrime(int num){
    bool prime = true;

    for (int i = 2; (i*i) <= num; i++){
        if (num % i == 0){
            prime = false;
            break;
        }
    }

    if (prime){
        return true;
    }
    else{
        return false;
    }
}
