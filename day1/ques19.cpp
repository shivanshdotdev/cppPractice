#include <iostream>
using namespace std;

int factorial(int num){
    if (num == 1){
        return 1;
    }

    return num * factorial(num - 1);
}

int main(){
    int N;
    cout << "Enter any positive integer: ";
    cin >> N;

    cout << factorial(N) << endl;
}
