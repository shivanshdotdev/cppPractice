#include <iostream>
using namespace std;

int main(){
    int limit;
    cout << "Enter the limit: ";
    cin >> limit;

    for (int i = limit; i > 0; i--){
        for (int j = 0; j < i; j++){
            cout << "*";
        }
        cout << endl;
    }

}
