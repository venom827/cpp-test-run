#include <iostream>
#include <string>
using namespace std;

int main(){
    int icounter = 0;
    string counter;
    string s;
    cin >> s;
    string s2 = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < s.length(); i++){
        for (int j = i+1; j < s.length(); j++){
            if (s[j] > s[i]){
                counter = s[j];
            }
        }
    }

    for (int i = 0; i < s.length(); i++){
        if (s[i] == counter[0]){
            icounter++;
            if (icounter <= 1){
                continue;
            }
            else{
                counter = counter + s[i];
            }
        }
    }
    cout << counter;
    return 0;
}