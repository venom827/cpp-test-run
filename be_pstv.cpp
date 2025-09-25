#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin>>t;
    while(t--){
        int n,zero=0,one=0;
        cin>>n;
        vector<int> array(n);
        for (int i=0;i<n;i++){
            cin>>array[i];
        }
        for (int i=0;i<n;i++){
            if(array[i]==-1){
                one++;
            }
            if(array[i]==0){
                zero++;
            }
        }
        if(one%2==0){
            cout<<zero<<'\n';
        }
        else{
            
            cout<<2+zero<<'\n';
        }
        
    }




    return 0;
}