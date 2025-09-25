#include <iostream>
#include <vector>
#include <string>
typedef long long ll;
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t,i=3;
    cin >> t;
    while(t--){
        string empty;
        for (int i=0;i<3;i++){
            string name;
            cin>>name;
            empty+=name[0];
        }
        cout<<empty<<'\n';
    }



    return 0;
}