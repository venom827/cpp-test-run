#include <iostream>
#include <string>
using namespace std;
int main () {

    int n;
    int counter = 0;
    cin>> n;

    for (int i = 0; i <= n; i++){
        string s;
        getline(cin , s);
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