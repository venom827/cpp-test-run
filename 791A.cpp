#include <iostream>
#include <vector>

typedef long long ll;
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,counter=0;
    cin>>a>>b;

    while(a<=b){
        a*=3;
        b*=2;
        counter++;
    }
    cout<<counter;




    return 0;
}