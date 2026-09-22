#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Enter any positive integer: ";
    cin >> N;

    int sum = 0;    
    for (int i = 1; i <= N; i++){
        sum += i;
    }

    cout << sum << endl;
}
