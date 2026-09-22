#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Enter two numbers with space in-between: ";
    cin >> a >> b;

    cout << "Before swapping: " << endl;
    cout << 'a' << " : " << a << endl;
    cout << 'b' << " : " << b << endl;

    swap(a, b);

    cout << "After swapping: " << endl;
    cout << 'a' << " : " << a << endl;
    cout << 'b' << " : " << b << endl;
}
