#include <iostream>
#include <string>
using namespace std;

int main(){
    int n1,n2;
    n1 = 0;
    n2 = 0;
    int icounter = 0;
    string counter;
    string s;
    cin >> s;
    string s2 = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < s.length(); i++){
        for (int j = i+1; j < s.length(); j++){
           for (int k = 0; k < s2.length(); k++){
            if (s[i] == s2[k]){
                if (n1>k){
                    break;
                }
                else{
                n1=k;
                }
            }
            else if(s[j] == s2[k]){
                if (n2>k){
                    break;
                }
                else{
                n2=k;
                }
            }
           }
           if (n2 > n1){
            counter =s2[n2];
           }
           else if( n1 > n2 ){
            counter = s2[n1];
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