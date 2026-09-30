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
    cout << "Enter the range: ";
    int limit;
    cin >> limit;

    for (int i = 1; i <= limit; i++){
        if (isPrime(i)){
            cout << i << "\t";
        }
    }
    cout << endl;
}
