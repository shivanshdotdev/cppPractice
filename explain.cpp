#include <iostream>
using namespace std;

int main(){
    // number of lines jitte print karne hai
    int n;
    cin >> n;

    // jo actual mein print ho raha hai
    char ch;
    
    // 1 se start karke <= n kara hai instead of 0 se start karke < n 
    // taki samaj mein aaye ki yes, hum log line 1 pe hai, line 2 pe hai, and hence at the end, line n pe hai
    // ye wala loop bas line ka dhyaan rakhta hai ki kis line pe hai
    // us line pe kya print karna, wo banki ke loops karte hai 
    for (int i = 1; i <= n; i++){ 

        // since har bar printing A se start ho rahi hai to har loop ke starting mein 
        // last loop ki wajah se this is not necessary and isko hum seedha upar hi assign kar sakte the 
        // but now its easier to understand and comprehend
        ch = 'A';


        // ab jaunsi line hai, uske hisaab se n-i spaces print ho raha to bas
        // agar notice karo to j ki condition is the count ki koi character kitti baar print hoga
        for (int j = 0; j < (n-i); j++){
            cout << " ";
        }

        // jis line pe hai, utte characters hi print ho rahe hai normal sequence wale, reverse wale nhi include kare isme 
        // line 1 pe bas A, line 2 pe AB, line 3 pe ABC, and so on
        for (int j = 0; j < i; j++){
            cout << ch; // A se start hai, A print karo and 
            ch++; // A ko badha ke B kardo 
        }

        ch--; 
        // ab jab last wala loop time loop chalega, jab C print ho gya wo upar mein 
        // to upar wale ch++ ki wajah se wo C ka D ho jayega 
        // ab loop end mein C ko D to kar dega but usko print nhi karega 
        // print kara usne C but ch ho gya hai D 
        // to usko waapis se C kar do


        // ab since ye loop reverse print kar raha hai to same has above but but but 
        // reverse character jitti lines hai usse ek kam print ho rahe hai 
        // jaise line 1 mein koi nhi means 0, line 2 mein bas A, line 3 mein BA and so on 
        // lines ka dhyan rakh raha hai i, so i - 1 baar reverse ko print karna hai and that's it
        for (int j = 0; j < i-1; j++){
            // ab jab loop print start karne to pattern kya hai line 3 pe -> ABCBA 
            // upar wale pe jo character print hua hai usse ek kam ya uske pahele wala print karna hai 
            // hence pahele kam karo to C ka ho jayega B phir usko print kardo 
            // phir agle mein B ka ho jayega A wo print kardo phir loop hi reset ho jayega
            ch--;
            cout << ch;
        }

        cout << endl;
    }
}
