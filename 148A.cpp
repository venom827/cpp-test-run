#include <iostream>
#include <vector>

typedef long long ll;
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k,l,m,n,d,counter=0;
    cin>>k>>l>>m>>n>>d;
    for (int i=1;i<=d;i++){
        if (i%k==0 || i%l==0 || i%m==0 || i%n==0){
            counter++;
        }
    }
    cout<<counter;


    return 0;
}