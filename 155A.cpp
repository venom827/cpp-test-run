#include <iostream>
using namespace std;
/*
My solution to 158A. I defined a max and min score, initialized with first round scores and updated its value 
for every iteration if this low or high is broken it will be updated and 
recorded in counter which will be incremented by 1
*/
int main(){
//All declarations
    int n;
    cin >> n;
    int scores[1000];
    int min_score;
    int max_score;
    int counter = 0;

//Assignment of all values  into array
    for (int i = 0; i < n; i++){
        int input;
        cin >> input;
        scores[i] = input;
    }



    min_score = scores[0];
    max_score = scores[0];

    for (int i = 0; i < n; i++){
        if (scores[i] > max_score){
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