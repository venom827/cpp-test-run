#include<iostream>
#include<vector>
#include <iterator>
#include<algorithm>
typedef long long ll;
using namespace std;

int main(){

    int t;
    cin>>t;
    
    ;
    while(t--){
        
        int m,n;
        ll sum = 0;
        cin >> n >> m;
        vector<int> ovenP(n);
        for (int i=0;i<n;i++) cin>>ovenP[i];
        sort(ovenP.begin(),ovenP.begin()+n,greater<int>());
        for (int i=0;i<n;i++) sum += 1ll*ovenP[i]*max(0,m-i);
        cout<<sum<<'\n';
    }



    return 0;
}