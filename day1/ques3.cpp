#include <iostream>
using namespace std;

int main(){
    cout << "Enter the temperature in celcius: ";
    int temp;
    cin >> temp;

    cout << "Temperature in fahrenheit: " << (temp * 1.8) + 32 << endl;
}
