#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    int count = 0;

    int n;
    while (true){
        cout << "Enter the number (0 to stop): ";
        cin >> n;

        if (n == 0){
            break;
        }

        sum += n;
        count++;
    }

    cout << "Sum: " << sum << endl;
    cout << "Count: " << count << endl;
    cout << "Average: " << (sum/count) << endl;
}
