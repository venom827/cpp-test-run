#include <iostream>
#include <string>
using namespace std;

int main() {

    int counter = 0;
    string s;
    getline(cin , s);
    for (int j = 0; j < s.length(); j++){
        for (int i = j+1; i < s.length(); i++){
            if (s[i] == s[j]){
                counter++;
            }
            if (s[i] == s[j] && s[i] == s[1]){
                counter--;
            }
            if (counter == 3){
                break;
            }

        }
        
    }
    cout << counter;


    return 0;
}