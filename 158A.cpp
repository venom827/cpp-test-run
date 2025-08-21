#include <iostream>
using namespace std;

int main(){

    int n,k;
    int score[100];
    int input;
    int counter = 0;
    cin >> n >> k;

    for (int i = 0; i < n; i++){
        cin >> input;
        score[i] = input;
    }

    for (int i = 0; i < n; i++){
        if (score[i] == k){
            break;
        }
        if (score[i] != 0){
            counter++;
        }
    }

    cout << counter;
    return 0;
}