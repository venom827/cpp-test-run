#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n,m,sum=0;
    cin>>n>>m;
    vector<vector<int>> matrix(n,vector<int>(m));

    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            int counter;
            cin>>counter;
            matrix[i][j] = counter;
        }
       
    }

    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            sum+=matrix[i][j];
        }
        
    }
    cout<<sum;


    return 0;
}