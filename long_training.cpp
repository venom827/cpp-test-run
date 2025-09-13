#include <iostream>
#include <vector>
#include<string>
using namespace std;


int main(){

    int n,m,s,p;
    cin>>n>>m>>s>>p;

    int tmin = n*m;
    int tsec = n*s;
    tmin += tsec/60;
    tsec = tsec%60;
    int rmin = p/60;
    int rsec = p%60;
    int total_min = tmin+rmin*(n-1);
    int total_sec = rsec*(n-1)+tsec;
    total_min += total_sec/60;
    total_sec = total_sec%60;

    cout<<total_min<<'\n';
    cout<<total_sec;





    return 0;
}