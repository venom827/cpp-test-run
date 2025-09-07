#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    int t;
    cin>>t;
    
    vector<int> display;
    for (int i=0;i<t;i++){
        double a,b;
        cin>>a>>b;
        vector<int> sum;
        vector<int> values;
        for (int j=1;j<=b;j++){
            if ((int)b%j==0){
                values.push_back(j);
                
            }
        }
        for (int k=0;k<values.size();k++){
            int x=a,y=b;
            x=x*values[k];
            y=y/values[k];
            sum.push_back(x+y);
        }
        int h=0;
        
        for (int i=0;i<sum.size();i++){
            if (h<sum[i] && sum[i]%2==0){
                h=sum[i];
            }
        }
        
        if (h%2==0 && h!=0){
            display.push_back(h);
        }
        else{
            display.push_back(-1);
        }

    }

    for (int i=0;i<display.size();i++){
        cout<<display[i]<<endl;
    }




    return 0;
}