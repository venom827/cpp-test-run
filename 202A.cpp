#include <iostream>
#include <string>
using namespace std;
/*
My solution to 202A. Mostly I only used a standard text book program for finding the max num
Just here i find the max char. It's pretty easy if you're comparing some inputs, just assign any 
one input to a counter variable. Then check if the other are bigger and if they are just assign them as counter
else continue. Since I had to do this with char of a string I decided to assign smallest posssible value as 
counter than compare against that for all chars in string. I was sidetracked a bit as can be seen by my commit history 
so I only asked chatgpt for problems in my code that's when it suggested a concept I should've though of earlier. But only that
part. Even the code I implemented on my own.
*/
int main(){
    
    int icounter = 0;
    string counter;
    string s;
    cin >> s;
    counter = 'a';
    for (int i = 0; i < s.length(); i++){
        if (s[i] > counter[0]){
            counter = s[i];
        }
    }

    for (int i = 0; i < s.length(); i++){
        if (s[i] == counter[0]){
            icounter++;
            if (icounter <= 1){
                continue;
            }
            else{
                counter += s[i];
            }
        }
    }
    cout << counter;
    return 0;
}