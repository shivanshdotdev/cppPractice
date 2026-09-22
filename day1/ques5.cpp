#include <iostream>
using namespace std;

int main(){
    cout << "Enter two number with space in-between: ";
    int a, b;
    cin >> a >> b;

    cout << "The greater number is: ";

    if (a > b){
        cout << a << endl;
    }
    else{
        cout << b << endl;
    }
}
