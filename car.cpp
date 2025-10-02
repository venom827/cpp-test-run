#include <iostream>
#include <vector>

typedef long long ll;
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    
    while(t--){
        int c,comp,count=0;
        cin>>c;
        vector<int> v(c);
        if (c==1){
            cin>>v[0];
            count=1;
        }
        else if(c>1){
            for (int i=0;i<c;i++){
                cin>>v[i];
            }
            comp = v[0];
            for (int i=0;i<c;i++){
                if (comp>=v[i]){
                    comp = min(comp,v[i]);
                    count++;

                }
                else{
                    continue;
                }
            }
            
        }
        cout<<count<<'\n';
    }



    return 0;
}