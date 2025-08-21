#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int scores[1000];
    int min_score;
    int max_score;
    int counter = 0;
    for (int i = 0; i < n; i++){
        int input;
        cin >> input;
        scores[i] = input;
    }

    min_score = scores[0];
    max_score = scores[0];
    for (int i = 0; i < n; i++){
        if (scores[i] > max_score ){
            counter++;
            max_score = scores[i];
        }
        else if (scores[i] < min_score){
            counter++;
            min_score = scores[i];
        }
    }


    cout << counter;


    return 0;
}