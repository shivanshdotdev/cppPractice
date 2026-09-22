#include <iostream>
using namespace std;

int main(){
    int num;
    bool prime = true;
    cout << "Enter number to check if prime or not: ";
    cin >> num;

    for (int i = 2; (i*i) <= num; i++){
        if (num % i == 0){
            prime = false;
            break;
        }
    }

    if (prime){
        cout << "Its a prime number\n";
    }
    else{
        cout << "Its not a prime number\n";
    }
}
