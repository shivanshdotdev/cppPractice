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

    int count = 0;
    for (int i = 1; i <= limit; i++){
        if (isPrime(i)){
            count++;
        }
    }
    cout << "Total number of primes here are: " << count << endl;
}
