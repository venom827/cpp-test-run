#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;
using namespace std;
int check(std::vector<int> &v,ll n,int m){
    
    for (int i=0;i<m-1;i++){
            if (v[i+1]==v[i]+1){
                continue;
            }
            else{
                return 1;
            }
        }
        int mx = v[v.size()-1];
        return (n-mx+1);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        ll n;
        int m;
        cin>>n>>m;
        vector<int> place;
        for (int i=0;i<m;i++){
            int input;
            cin>> input;
            place.push_back(input);
        }
        
        int pl = check(place,n,m);
        cout<<pl<<'\n';
}



    return 0;
}