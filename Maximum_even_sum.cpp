#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    int t;
    cin>>t;
    
    for (int i=0;i<t;i++){
        int a,b;
        cin>>a>>b;
       
        for (int i=1;i<=b;i++){
            if (b%i==0){
                if((a*i+b/i)%2==0){
                    cout<<a*i+b/i<<'\n';
                    break;
                }
                else{
                    cout<<-1<<'\n';
                    break;
                }
            }
        }
    }


    return 0;
}