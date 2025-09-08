#include<iostream>
#include<vector>
#include <iterator>
#include<algorithm>
using namespace std;

int main(){

    int t;
    cin>>t;
    vector<int>values;
    vector<int>copy_val;
    for (int i=0;i<t;i++){
        int n,m,cakes=0;
        cin>>n>>m;

        for (int j=0;j<n;j++){
            int cut;
            cin>>cut;
            values.push_back(cut);
        }
        copy_val = values;
        for (int j=0;j<m;j++){
           
        }
        cout<<cakes;
    }



    return 0;
}