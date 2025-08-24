#include <iostream>
#include <string>
#include <vector>
using namespace std;
//my sol to 71A. I dont think this is explainable. Its pretty straightforward
int main(){
    int n;
    int counter1 = 0;
    int counter2 = 0;
    vector <string> words;
    cin >> n;
    for (int i=0;i<n;i++){
        string input;
        cin >> input;
        if (input.length() > 10){
            counter1 = input.length() - 2;
            words.push_back(input[0] + to_string(counter1) + input[input.length()-1]);
        }
        else{
            words.push_back(input);
        }
        
    }
    for (string i:words){
        cout << i << endl;
    }
}