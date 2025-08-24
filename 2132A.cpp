#include <iostream>
using namespace std;

void task(string &a, string b, string c){
    int right_pointer = c.length();
    int left_pointer = 0;
    for (int i=0;i<c.length();i++){
        if (c[i] == 'D'){
            a.insert(right_pointer,1,b[i])
        }
        else if (c[i] == 'V'){
            a.insert(left_pointer,1,b[i])
        }
    }
}

int main(){



    return 0;
}