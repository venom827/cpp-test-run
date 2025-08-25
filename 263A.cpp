#include <iostream>
using namespace std;
//My solution to 263A. Since one step is just 1 unit of distance from point 3,3 I used the abs value to get the answer
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