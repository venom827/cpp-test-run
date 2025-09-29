#include <iostream>
#include <vector>

typedef long long ll;
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    string in;
    cin>>n>>in;
    int sum1=0,sum2=0,count=0;
    int start=0,end=n-1;
    for (int i=0;start<end;i++){
        sum1+=in[start]-'0';
        sum2+=in[end]-'0';
        if ((in[start]=='4'||in[start]=='7')&&(in[end]=='4'||in[end]=='7')){
            count+=2;
        }
        if (start<end){
            start+=1;
            end-=1;
        }
    }
    if (sum1==sum2 && count==n){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }



    return 0;
}