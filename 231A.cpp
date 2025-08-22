#include <iostream>
#include <string>
using namespace std;
/*My solution to 231A. The program is too short to add much but as you can see I just broke 
the loop at the point 2 same chars are found and those are '1'
*/
int main () {

    int n;
    int counter = 0;
    cin>> n;

    for (int i = 0; i <= n; i++){
        string s;
        getline(cin , s); // The input is of form 1 1 0 not 110 therefore this works
        for (int j = 0; j < s.length(); j++){
            int z = j+1;
            for ( z ; z < s.length(); z++){
                if (s[j] == s[z] && s[j] == '1'){
                    counter++;
                    break;
                }
            }
            if (s[j] == s[z] && s[j] == '1'){
                    break;
                }
        }
    }
    cout << counter;

    return 0;
}