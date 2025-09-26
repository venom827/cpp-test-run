#include <iostream>
#include <vector>
#include <iomanip>
typedef long long ll;
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    double sum = 0;
    cin>>n;
    for (int i=0;i<n;i++){
        double p;
        cin>>p;
        sum+=p/100;
    }
    double ans = sum/n*100;
    cout<<fixed<<setprecision(15)<< ans;




    return 0;
}