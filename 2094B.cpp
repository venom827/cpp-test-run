#include <iostream>
#include <vector>
#include <cmath>
typedef long long ll;
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        double n,m,l,r;
        cin>>n>>m>>l>>r;
       if (n-m>r){
        l+=(n-m);
       }
       else{
        r-=(n-m);
       } 
        cout<<l<<" "<<r<<'\n';
    } 



    return 0;
}