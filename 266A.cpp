#include<iostream>
#include <string>
using namespace std;
int main(){
    int counter = 0;
    int n;
    string s;
    cin >> n;
    cin >> s;
    for (int i = 0; i<=s.length()-1; i++){
        for (int j = 1; j<=s.length()-1; j++){
            if(s[i]==s[j] && j==(i+1)){
                counter++;
            }
        }
    }
    cout<<counter;


    return 0;
}