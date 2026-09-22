#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cout << "Enter three numbers with space in-between: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c){
        cout << "Largest among them is: " << a << endl;
    }
    else if (b >= a && b >= c){
        cout << "Largest among them is: " << b << endl;
    }
    else {
        cout << "Largest among them is: " << c << endl;
    }
}
