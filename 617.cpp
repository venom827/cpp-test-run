#include <iostream>
#include <vector>

typedef long long ll;
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,c=0;
    cin>>n;
    while (n){
        if (n>=5){
            c++;
            n-=5;
        }
        else if (n>=4){
            c++;
            n-=4;
        }
        else if(n>=3){
            c++;
            n-=3;
        }
        else if(n>=2){
            c++;
            n-=2;
        }
        else if(n>=1){
            c++;
            n-=1;
        }
    }

    cout<<c;



    return 0;
}