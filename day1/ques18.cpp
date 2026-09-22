#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Enter any positive integer: ";
    cin >> N;

    for (int i = 1; i <= N; i++){
        if (i % 2 != 0){
            cout << i << " ";
        }
    }
    cout << endl;
}
