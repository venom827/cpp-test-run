#include <iostream>
#include<string>
using namespace std;
int main(){

    string n,output;

    cin>>n;
    if(n =="9"){
        cout<<n;
    }
    else{
        for (int i=0;i<n.length();i++){
            int number = (int)n[i]-'0';
            int inverted = 9-number;
            output+=min(number,inverted)+'0';
        }
       
        if (output[0]=='0'){
            output[0]='9';
        }
        cout<<output;
    }
    
    return 0;
}