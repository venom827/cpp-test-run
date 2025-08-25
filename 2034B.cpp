#include <iostream>

using namespace std;

void strengthen(int n, int m, int k, string s){
    int left_pointer = 0;
    int left_counter = 0;
    int right_pointer = s.length()-1;
    int right_counter = 0;
    
    for (int i=0;i<n;i++){
        if (s[left_pointer] == 0){
            left_counter++;
            if (left_counter == m){
                s[i+1] = '1';
            }
        }
        else if (s[right_pointer] == 0){
            right_counter++;
            if (right_counter == m){
                s[i-1] = '1';
            }
        }
        left_pointer++;
        right_pointer--;
    }
}
int main(){




    return 0;
}