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
        int n,m,x,y;
        vector<int> xval;
        vector<int> yval;
        cin>>n>>m>>x>>y;
        for (int i=0;i<n;i++){
            int a;
            cin>>a;
            xval.push_back(a);
        }
        for (int j=0;j<m;j++){
            int b;
            cin>>b;
            yval.push_back(b);
        }
        cout<<n+m<<'\n';
    }



    return 0;
}