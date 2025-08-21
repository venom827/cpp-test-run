#include <iostream>
using namespace std;

int main(){

    int n,k;
    int score[100];
    int input;
    int counter = 0;
    int position = 1;
    cin >> n >> k;

    for (int i = 0; i < n; i++){
        cin >> input;
        score[i] = input;
    }

    for (int i = 0; i < n-1; i++){
        if (score[0] == 0){
            break;
        }
        if (position == k){
            break;
        }
        if (score[i] >= score[i+1]){
            counter++;
        }
        if (score[i] > score[i+1]){
            position++;
        }
        
    }

    cout << counter;
    
    return 0;
}