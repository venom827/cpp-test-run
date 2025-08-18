#include <iostream>
using namespace std;
/*
This is my solution to 233A. The approach is pretty straighforward.
I tried to understand what the perfect permutation was and it seems
it was just counting all the numbers but swapping the places for all the
consecutive 2 numbers along side each other. For ex - 1 2 becomes 2 1 and so on.
I recreated this logic i program and it seemed to work out fine.
*/

int main() {

    int n;
    cin >> n;

    if (n%2 == 0){

        for (int i = 1; i <= n; i++){


            int counter = 0;//the variable I will output each iteration

            if (i%2 == 0){
                counter = i-1;//for ex 2 becomes 1
            }

            else{
                counter = i+1;//for ex 1 becomes 2
            }


            cout << counter << " ";
        }

    }
    else{

        cout << -1;

    }


    return 0;
}