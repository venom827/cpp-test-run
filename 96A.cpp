#include <iostream>
#include <vector>
#include <string>
typedef long long ll;
using namespace std;

string checkFootball(string n){
    string emp;
    if (n.size()<7){
        return "NO";
    }
    for (int i=0;i<n.size()-6;i++){
        emp = n.substr(i,7);
        if (emp=="1111111"){
            return "YES";
        }
        else if (emp=="0000000"){
            return "YES";
        }
    }
    return "NO";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string n,emp="";
    cin>>n;
    
    cout<<checkFootball(n);





    return 0;
}