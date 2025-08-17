#include <iostream>
#include <string>
using namespace std;
/*
My solution to the 228A problem as a beginner, pre STL(still improving my c++ rather than cp skills)
My initial method was to use a string as the sole input and well
that was disastrous. So pay attention to specefic things written in problems
for example this problem explicitly told me to take 3 integers as inputs
I ignored that and well took like 3-4 trys till I got it right
I have added some comments in an attempt to explain my reasoning, hope you(or my future self) learns something ;)
*/
int main() {

    int s1 , s2 , s3 , s4 , counter , arr_length;
    counter = 0; //variable to keep track of horseshoes to buy
    cin >> s1 >> s2 >> s3 >> s4;
    int arr[4] = {s1 , s2 , s3 , s4};
    arr_length = sizeof(arr)/sizeof(s1);//pre stl so this was the only way I got to calculate size of an array


/*
The reason why I used the loops in this way was bcz I only wanted to compare values that havent been compared
For example --> for input 1 1 3 4
this loop compares 1 to 1,3, and 4
then the other 1 to 3,4
lastly 3 to 4 and finally 4 to nothing bcz inner loop is instantly broken
*/
    for (int i = 0; i < arr_length; i++){
        for (int j = i+1; j < arr_length; j++){
            if (arr[i] == arr[j]){
                counter++;
                break;//once counter have been incremented once, it's risky to let the loop increment it again
                
            }
            
            
        }
        if (counter == 3)
        {/* Counter can't possibly have a value higher than 3 in any scenario
            however for programming that scenario is input case of repeated numbers like 7 7 7 7 or 1 1 1 1
            as these will increment counter on their 3rd and 4th iteration of the outer loop,
            so I don't allow counter to go above 3 */
                break;
            }

    }
    cout << counter;
    return 0;
}