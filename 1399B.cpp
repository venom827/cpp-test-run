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
        ll n,counter=0;
        cin>>n;
        vector<ll> candy,orange;
        for (int i=0;i<n;i++){
            ll in;
            cin>>in;
            candy.push_back(in);
        }
        for (int i=0;i<n;i++){
            ll in;
            cin>>in;
            orange.push_back(in);
        }
        int min_c = *min_element(candy.begin(),candy.end());
        int min_o = *min_element(orange.begin(),orange.end());
        for (int i=0;i<n;i++){
            if (candy[i]>min_c && orange[i]>min_o){
                counter+=max(candy[i]-min_c,orange[i]-min_o);
            }
            else if(candy[i]>min_c){
                counter+=candy[i]-min_c;
            }
            else if(orange[i]>min_o){
                counter+=orange[i]-min_o;
            }
        }
        cout<<counter<<'\n';
    }




    return 0;
}