#include <iostream>
#include <vector>

typedef long long ll;
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while (t--){
        int x,n;
        cin>>x>>n;
        int copy = x;
        if (n%2==0){
            cout<<0<<'\n';
        }
        else{
            cout<<x<<'\n';
        }
    }



    return 0;
}