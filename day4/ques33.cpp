#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;

    int smallest = 10;
    while (n > 0){
        int rem = n % 10;

        if (rem < smallest){
            smallest = rem;
        }

        n /= 10;
    }

    cout << smallest << endl;
}
