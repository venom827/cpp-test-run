#include<iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    for (int i=0;i<t;i++){
        int a,b,counter;
        cin>>a>>b;
        if (a==b){
            cout<<0;
        }
        else if(b%a==0){
            counter = b/a;
            a*=counter;
            cout<<1;
        }
        else if(a%b==0){
            counter = a/b;
            b*=counter;
            cout<<1;
        }
        else if(a%b!=0 || b%a!=0){
            counter = a;
            a*=b;
            b*=counter;
            cout<<2;
        }
        cout<<endl;
    }




    return 0;
}