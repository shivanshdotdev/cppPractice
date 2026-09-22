#include <iostream>
using namespace std;

int main(){
    int year;
    cout << "Enter the year: ";
    cin >> year;

    if (year % 100 == 0){
        if (year % 400 == 0){
            cout << "Leap year\n";
            return 0;
        }
        else{
            cout << "Not a Leap year\n";
            return 0;
        }
    }
    else if (year % 4 == 0){
        cout << "Leap year\n";
        return 0;
    }
    else{
        cout << "Not a Leap year\n";
        return 0;
    }
}
