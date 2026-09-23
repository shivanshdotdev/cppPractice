#include <iostream>
using namespace std;

int main(){
    int n = 5;

    for (int i = 1; i <= 5; i++){
        for (int j = 1; j <= i; j++){
            if (i % 2 == 0){
                cout << int(j % 2 == 0);
            }
            else {
                cout << int(j % 2 != 0);
            }
        }
        cout << endl;
    }
}
