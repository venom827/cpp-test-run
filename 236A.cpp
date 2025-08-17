#include <iostream>
#include <string>
using namespace std;

int main(){

    string userName;
    int counter = 0;
    cin >> userName;
    for (int i = 0; i < userName.length(); i++){
        counter++;
        int j = i+1;
        for ( j; j < userName.length(); j++ ){
            if (userName[i] == userName[j]){
                counter--;
                break;
            }
        }
    }
    if (counter%2 == 0){
        cout << "CHAT WITH HER!";
    }
    else{
        cout << "IGNORE HIM!";
    }

    return 0;
}