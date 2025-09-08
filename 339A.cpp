#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    string s;
    cin>>s;
    char placeholder = (int)s[0]-'0';
    vector<int> vals;
    vector<char> plus;
    vals.push_back(placeholder);

    for (int i=0;i<s.size();i++){
        if (s[i]=='+'){
            placeholder = (int)s[i+1]-'0';
            vals.push_back(placeholder);
            plus.push_back('+');
        }
    }

    sort(vals.begin(),vals.end());

    for (int i=0;i<vals.size();i++){
        cout<<vals[i];
        if (i<plus.size()){
            cout<<plus[i];
        }
    }

    return 0;
}