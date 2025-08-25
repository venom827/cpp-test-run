#include <iostream>
using namespace std;

int main(){

    int matrix[5][5];
    int row,column,distance;
    for (int i=0;i<5;i++){
        for (int j=0;j<5;j++){
            int input;
            cin >> input;
            matrix[i][j] = input;
        }
    }

    for (int i=0;i<5;i++){
        for (int j=0;j<5;j++){
            if (matrix[i][j] == 1){
                row = i+1;
                column = j+1;
                break;
            }
        }
        
    }

     int total_steps = (abs(row-3)) + (abs(column-3));

    cout << total_steps;

    return 0;
}