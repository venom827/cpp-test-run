#include<iostream>
#include<cmath>

using namespace std;

int main(){


    
    double a,r1,r2;
    cin>>a>>r1>>r2;
    double a_sq = pow(a,2);
    double r1_sq = pow(r1,2);
    double r2_sq = pow(r2,2); 
    int x = round((a_sq-(r2_sq-r1_sq))/(a*2));
    float half = 0.5;
    int h = round(pow((r2_sq-pow((a-x),2)),half));

    cout<<(int)x<<endl<<(int)h*(-1)<<endl;
    



    return 0;
}