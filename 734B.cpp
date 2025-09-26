#include <iostream>
#include <vector>
#include <cmath>
typedef long long ll;
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k2,k3,k4,k5,sum=0;
    cin>>k2>>k3>>k4>>k5;
    sum = min(min(k2,k4),k5)*256;
    k2-=min(min(k2,k4),k5);
    sum+=min(k2,k3)*32;
    cout<<sum;



    return 0;
}