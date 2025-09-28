#include <iostream>
#include <vector>

typedef long long ll;
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int total_drink = k*l;
    cout<<min(min(total_drink/nl,p/np),c*d)/n;




    return 0;
}