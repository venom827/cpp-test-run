#include<iostream>
#include<vector>

using namespace std;

int main(){

    int n;
    long long sum = 0;
    long long max;
    vector<int>choco;
    cin>>n;
    for (int i=0;i<n;i++){
        int in;
        cin>>in;
        choco.push_back(in);
    }
    max = choco[n-1];
    for (int i=n-1;i>=0;i--){
        sum+=min((int)max,choco[i]);
        max=min((int)max,choco[i])-1;
        if(max<=0){
            break;
        }
        
    }
    cout<<sum<<endl;
    
    return 0;
}