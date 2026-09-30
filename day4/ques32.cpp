#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;

    int largest = 0;
    while (n > 0){
        int rem = n % 10;

        if (rem > largest){
            largest = rem;
        }

        n /= 10;
    }

    cout << largest << endl;
}
