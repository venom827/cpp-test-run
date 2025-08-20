#include <iostream>
#include <string>
using namespace std;

int main(){
    char arr[100][100];
    int pnts[3][2];
    int n,m;
    int c1 = 0;
    int counter = 0;
    int r_coordinate;
    int c_coordinate;
    cin >> n >> m;

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
                pnts[c1][0] = i+1;
                pnts[c1][1] = j+1;
                c1++;
            }
        }
    }
    for (int i = 0; i < 2; i++){
        for (int j = i+1; j < 3; j++){
            if (pnts[i][0] == pnts[j][0]){
                for (int k = 0; k < 3; k++){
                    if (pnts[k][0] != pnts[i][0]){
                        r_coordinate = pnts[k][0];
                    }
                }
            }
        }
    }

    for (int i = 0; i < 2; i++){
        int k = 0;
        for (int j = i+1; j < 3; j++){
            if (pnts[i][1] == pnts[j][1]){
                for (k; k < 3; k++){
                    if (pnts[k][1] != pnts[i][1]){
                        c_coordinate = pnts[k][1];
                        break;
                    }
                }
            }
            if (pnts[k][1] != pnts[i][1]){
                        break;
                    }
        }
        if (pnts[k][1] != pnts[i][1]){
                        break;
                    }
    }

        cout << r_coordinate << " " << c_coordinate;


    

    return 0;
}