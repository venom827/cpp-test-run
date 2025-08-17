#include <iostream>
#include <string>
using namespace std;
/*
My solution to 236A. Pretty straightforward but the approach is to get the string,
iterate through it, and increment a counter variable for every other character, 
but decrement if there is another same character present in the string.
This allows for counter to be canceled out for the first instance of each character 
that is present multiple times in the string. And then get incremented on their other instance, 
allowing us to get the value of distinct characters.

As you might have guessed, this gives rise to an edgecase of when there are more than 2 usage of the same character 
in the string or userName. For that, I did a very simple thing that took care of it. 
You will find the comments below.
*/
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
                break;//When counter is decremented once, I don't allow the code
                //to decrement it any more.
            }
        }
    }
    if (counter%2 == 0){//very standard even-odd program
        cout << "CHAT WITH HER!";
    }
    else{
        cout << "IGNORE HIM!";
    }

    return 0;
}