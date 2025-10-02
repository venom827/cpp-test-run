#include <iostream>
#include <vector>

typedef long long ll;
using namespace std;

int square(int n,vector<vector<int>> &store,int count1,int count2){

    if (n==0){
        return 2;
    }
    for (int i=count1;i<count2;i++){
        if (i==count1 || i==(count2-1)){
            for (int j=count1;j<count2;j++){
                store[i][j]=n;
            }
            
            
        }
        else{
            for (int j=count1;j<count2;j++){
                if (j==count1 || j==(count2-1)){
                    store[i][j]=n;
                }
                
            }

            
        }
    
    
    }
    count1++;
    count2--;
    square(n-1,store,count1,count2);
}

void squarei(int n,vector<vector<int>> &store,int count1,int count2){


    for (int i=count1;i<count2;i++){
        if (i==count1 || i==(count2-1)){
            for (int j=count1;j<(n*2)-1;j++){
                store[i][j]=n;
            }
            
            
        }
        else{
            for (int j=count1;j<count2;j++){
                if (j==count1 || j==(count2-1)){
                    store[i][j]=n;
                }
                
            }

            
        }
    }
    count1++;
    count2--;
    square(n-1,store,count1,count2);
}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,count1=0;
    cin>>n;
    int count2=(n*2)-1;
    vector<vector<int>> store((n*2)-1,vector<int>((n*2)-1,0));
    squarei(n,store,count1,count2);
    store[n-1][n-1]=1;

    
    
    for (int i=0;i<(n*2)-1;i++){
        for (int j=0;j<(n*2)-1;j++){
            cout<<store[i][j]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}
