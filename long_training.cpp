#include <iostream>
#include <vector>
#include<string>
using namespace std;


int main(){

    int n,m,s,p;
    cin>>n>>m>>s>>p;

    int tmin = n*m +(n*s)/60+((n-1)*p)/60;
    int tsec = (n*s)%60 + ((n-1)*p)%60;\
    if (tsec>60){
        tmin+=tsec/60;
        tsec=tsec%60;
    } 
    cout<<tmin<<endl<<tsec<<endl;





    return 0;
}