#include <iostream>
using namespace std;
/*
This is my solution to 158A. It's just obeying the conditions of the Qs nothing special in this
*/
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
        if(score[i] >= score[k-1] && score[i] > 0){
            
        counter++;
        }
    }
    cout << counter;
    
    
    return 0;
}