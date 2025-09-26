#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n,counter=0;
        vector<int> v;
        cin>>n;
        for (int i=0;i<n;i++){
            int in;
            cin>>in;
            v.push_back(in);
        }
        sort(v.begin(),v.end());
        for (int i=0;i<n-1;i++){
            if (abs(v[i]-v[i+1])<=1){
                counter++;         
            }
            
        }
        if (counter==n-1){
            cout<<"YES"<<'\n';
        }
        else{
            cout<<"NO"<<'\n';
        }
    }




    return 0;
}