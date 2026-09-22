#include <iostream>
using namespace std;

int main(){
    char c;
    cout << "Enter any single uppercase character: ";
    cin >> c;

    if (c == 65 || c == 69 || c == 73 || c == 79 || c == 85){
        cout << "Vowel\n";
    }
    else {
        cout << "Consonant\n";
    }
}
