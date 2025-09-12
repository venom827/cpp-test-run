#include <iostream>
#include <vector>

typedef long long ll;
using namespace std;

string Capitalize(string s){
    for (int i=65;i<=90;i++){
        if ((int)s[0]==i) return s;
    }
    s[0] = s[0]-' ';
    return s;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;
    cin>>input;
    
    string result = Capitalize(input);

    cout<<result;


    return 0;
}