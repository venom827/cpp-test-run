#include <iostream>
#include <string>
using namespace std;

int main(){
    
    int icounter = 0;
    string counter;
    string s;
    cin >> s;
    counter = 'a';
    for (int i = 0; i < s.length(); i++){
        if (s[i] > counter[0]){
            counter = s[i];
        }
    }

    for (int i = 0; i < s.length(); i++){
        if (s[i] == counter[0]){
            icounter++;
            if (icounter <= 1){
                continue;
            }
            else{
                counter += s[i];
            }
        }
    }
    cout << counter;
    return 0;
}