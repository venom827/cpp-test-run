#include <iostream>
using namespace std;

int main(){

    int n,k;
    int score[50];
    int input;
    int counter = 0;
    int position = 1;
    cin >> n >> k;

    for (int i = 0; i < n; i++){
        cin >> input;
        score[i] = input;
    }
    
    for (int i = 0; i < n; i++){
        int j;
        if (score[0] == 0){
            break;
        }
        else if(score[i] >= score[k-1]){
            
        counter++;
        }
    }
    cout << counter;
    
    
    return 0;
}