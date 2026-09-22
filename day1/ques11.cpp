#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Enter a and b to calculate a^b: ";
    cin >> a >> b;

    int product = 1;
    for (int i = 0; i < b; i++){
        product *= a;
    }

    cout << "The answer is: " << product << endl;
}
