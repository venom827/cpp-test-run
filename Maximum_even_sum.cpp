#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
using ll= long long;
ll max_even_sum(ll a,ll b){
    ll k,sum;
    if (a%2==0 && b%2==0){
        k=b/2;
        a*=k;
        b/=k;
        sum = a+b;
    }
    else if (a%2==1 && b%2==1){
        k=b;
        a*=k;
        b/=k;
        sum = a+b;
    }
    else if(a%2==1 && b%2==0){
        k=b/2;
        a*=k;
        b/=k;
        sum = a+b;
    }
    else{
        sum = -1;
    }
    if (sum%2==0){
        return sum;
    }
    else{
    return -1;
    }
}

int main(){

    int t;
    cin>>t;
    
    for (int i=0;i<t;i++){
        ll a,b,sum;
        
        cin>>a>>b;
        sum = max_even_sum(a,b);
        cout<<sum<<'\n';
    }


    return 0;
}