#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){

    int n,m;
    string holder;
    cin >> n >> m;
    int pnt[2];
    int c1 = 0;
    int pnts[4][2];
    char arr[100][100];
    int column_length;


    for (int i = 0; i < n; i++){
        string input;
        cin >> input;

        for (int j = 0; j < m; j++){
            arr[i][j] = input[j];
            
        }
    
    }
            

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            
            if(arr[i][j] == '*'){
                pnts[c1][0] = i+1;
                pnts[c1][1] = j+1;
                c1++;
            }
        }
    }


    for (int i = 0; i < 2; i++){
        for (int j = i+1; j < 3; j++){
            if (pnts[i][0] == pnts[j][0]){
                column_length = abs (pnts[i][1] - pnts[j][1]);
            }
        }
    }

    for (int i = 0; i < 2; i++){
        int j;
        for( j = i+1; j < 3; j++){
           if (pnts[i][0] == pnts[j][0] && pnts[i][0] > pnts[0][0]){
                pnt[0] = pnts[0][0];
                break;
           }
           else if (pnts[i][0] == pnts[j][0] && pnts[i][0] < pnts[2][0]){
                pnt[0] = pnts[2][0];
                break;
           }
        }
        if (pnts[i][0] == pnts[j][0] && pnts[i][0] > pnts[0][0]){
                break;
        }
        else if (pnts[i][0] == pnts[j][0] && pnts[i][0] < pnts[2][0]){
                break;
        }
    }


    for (int i = 0; i < 2; i++){
        
        int j;
        for(j = i+1; j < 3; j++){
           if (pnts[i][0] == pnts[j][0] && pnts[i][0] > pnts[0][0]){
                if (pnts[0][1] > 1 ){
                    pnt[1] = pnts[0][1]-column_length;
                }
                else if(pnts[0][1] <= 1){
                    pnt[1] = pnts[0][1]+column_length;
                }
                break;
           }
           else if (pnts[i][0] == pnts[j][0] && pnts[i][0] < pnts[2][0]){
                if (pnts[2][1] > 1){
                    pnt[1] = pnts[2][1] - column_length;
                }
                else if (pnts[2][1] <= 1){
                    pnt[1] = pnts[2][1] + column_length;
                }
                break;
           }
        
        }
        if(pnts[i][0] == pnts[j][0] && pnts[i][0] > pnts[0][0]){
            break;
        }
        else if(pnts[i][0] == pnts[j][0] && pnts[i][0] < pnts[2][0]){
            break;
        }
    }
    

    cout << pnt[0]<< " " << pnt[1];

    return 0;
}