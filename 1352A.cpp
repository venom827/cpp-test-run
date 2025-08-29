#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

void sol(){
    int n,j;
    cin>>n;
    j = 0;
    vector<int>val;
    while(n>0){
        j++;
        int multiplier = round(pow(10,j));
        if (n%multiplier>0){
            val.push_back(n%multiplier);
            n=n-n%multiplier;
        }
        
    }
    cout<<val.size()<<endl;
    for(int i=0;i<val.size();i++){
            
            cout<<val[i]<<" ";
        }
}
int main(){

    int t;
    cin>>t;
    while(t--){
        sol();
        cout<<endl;
    }



    return 0;
}
