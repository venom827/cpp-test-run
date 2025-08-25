#include <iostream>
#include <string>
using namespace std;

//My solution to 282A. Kinda feel embarassed to do these problems but gotta keep up the problem and git streak
int main(){

    int x = 0;
    int n;
    cin >> n;

    for (int i=0;i<n;i++){
        string input;
        cin >> input;
        if (input == "++X" || input == "X++"){
            x++;
        }
        else if (input == "--X" || input == "X--"){
            x--;
        }
    }
    
    cout << x;



    return 0;
}
