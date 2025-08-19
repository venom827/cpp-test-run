#include <iostream>
#include <string>
using namespace std;
int main(){

    int n,m;
    string holder;
    cin >> n >> m;
    int pnt_1[2];
    int pnt_2[2];
    int pnt_3[2];
    int pnt_4[2];
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
            if (arr[i][j] == '*'){
                pnt_1[0]=i;
                pnt_1[1]=j;
            }
            else if (arr[i][j] == '*' && pnt_1[0] != 0){
                pnt_2[0] = i;
                pnt_2[1] = j;
            }
            else if (arr[i][j] == '*' && pnt_2[0] != 0){
                pnt_3[0] = i;
                pnt_3[1] = j;
            }
            
        }
    }
    pnts[0][0] = pnt_1[0];
    pnts[0][1] = pnt_1[1];
    pnts[1][0] = pnt_2[0];
    pnts[1][1] = pnt_2[1];
    pnts[2][0] = pnt_3[0];
    pnts[2][1] = pnt_3[1];


    if (pnt_1[0] == pnt_2[0]){
        row_distance = pnt_3[0] - pnt_1[0];
        if (row_distance <= 0){
            row_distance *= -1;
        }
    }
     if (pnt_2[0] == pnt_3[0]){
        row_distance = pnt_1[0] - pnt_2[0];
        if (row_distance <= 0){
            row_distance *= -1;
        }
    }
     {
        row_distance = pnt_2[0] - pnt_1[0];
        if (row_distance <= 0){
            row_distance *= -1;
        }
    }
    if (pnt_1[1] == pnt_2[1]){
        column_distance = pnt_3[1] - pnt_1[1];
        if (column_distance <= 0){
            column_distance *= -1;
        }
    }
     if (pnt_2[1] == pnt_3[1]){
        column_distance = pnt_3[1] - pnt_1[1];
        if (column_distance <= 0){
            column_distance *= -1;
        }
    }
     if (pnt_1[1] == pnt_3[1]){
        column_distance = pnt_3[1] - pnt_2[1];
        if (column_distance <= 0){
            column_distance *= -1;
        }
    }
    for (int i = 0; i < 3; i++){
        if (pnts[i][0] == pnts[i+1][0]){
            pnt_4[0] = pnts[i-1][0] - row_distance; 
        }
        if (pnts[i][1] == pnts[i+2][1])  {
            pnt_4[1] = pnts[i+1][1] - column_distance;
        }     
    }

    cout << pnt_4[0]<< " " << pnt_4[1];


    return 0;
    }