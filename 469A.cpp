#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
typedef long long ll;
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> val;
    int n,counter=0;
    cin>>n;
    for (int i=0;i<2;i++){
        string a;
        cin>>a;
        for (int j=2;j<((int)a[0]+'0');j+=2){
            if  (a[j]+'0'<=n){
                    auto it = find(val.begin(),val.end(),a[j]+'0');
                    if (a[j]+'0'==*it){
                        continue;
                    }
                    else{
                        counter++;
                        val.push_back(a[j]+'0');
                    }
                }
        }
    }
   
    

        
                
    

    if (n==counter){
        cout<<"I become the guy.";
    }
    else{
        cout<<"Oh, my keyboard!";
    }




    return 0;
}