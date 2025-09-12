#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;

long long binpow(long long a, long long n) {
    if (n == 0)
        return 1;
    long long res = binpow(a, n / 2);
    if (n % 2)
        return res * res * a;
    else
        return res * res;
}

int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   ll a=2,b=5;
   cout<<binpow(a,b);




    return 0;
}