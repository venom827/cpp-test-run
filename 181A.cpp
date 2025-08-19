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
    int row_distance;
    int column_distance;
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
    
    


    for (int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
           
            if(pnts[i][0] == pnts[j][0]){
                column_distance = abs(pnts[i][1] - pnts[j][1]);
            }
            if (pnts[i][1] == pnts[j][1]){
                row_distance = abs(pnts[i][0] - pnts[j][0]);
            }
        }
    }
    int counter;
    for (int i = 0; i < 3; i++){
        counter++;
        for(int j = 0; j < 3; j++){
            if(pnts[i][0] == pnts[j][0] && pnts[i][0] > pnts[2][0]){
                pnt[0] = abs(pnts[i][0] + row_distance);
            }
            else if(pnts[i][0] == pnts[j][0] && pnts[i][0] < pnts[2][0]){
                pnt[0] = abs(pnts[i][0] - row_distance);
            }
            else if (pnts[i][0] == pnts[j][0] && pnts[i][0] > pnts[1][0]){
                pnt[0] = abs(pnts[i][0] + row_distance);

            }
            else if (pnts[i][0] == pnts[j][0] && pnts[i][0] < pnts[1][0]){
                pnt[0] = abs(pnts[i][0] - row_distance);

            }
            else if(pnts[i][1] == pnts[j][1] && pnts[i][1] < pnts[2][1]){
                pnt[1] = abs(pnts[i][1] + column_distance);
            }
            else if(pnts[i][1] == pnts[j][1] && pnts[i][1] > pnts[2][1]){
                pnt[1] = abs(pnts[i][1] - column_distance);
            }
            else if (pnts[i][1] == pnts[j][1] && pnts[i][1] < pnts[1][0]){
                pnt[1] = abs(pnts[i][1] - column_distance);

            }
            else if (pnts[i][1] == pnts[j][1] && pnts[i][1] > pnts[1][0]){
                pnt[1] = abs(pnts[i][1] + column_distance);

            }
        }
    }



    cout << pnt[0]<< " " << pnt[1];


    return 0;
    }