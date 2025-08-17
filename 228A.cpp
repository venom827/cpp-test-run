#include <iostream>
#include <string>
using namespace std;

int main() {

    int s1 , s2 , s3 , s4 , counter , arr_length;
    counter = 0;
    cin >> s1 >> s2 >> s3 >> s4;
    int arr[4] = {s1 , s2 , s3 , s4};
    arr_length = sizeof(arr)/sizeof(s1);

    for (int i = 0; i < arr_length; i++){
        for (int j = i+1; j < arr_length; j++){
            if (arr[i] == arr[j]){
                counter++;
                break;
                
            }
            
            
        }
        if (counter == 3){
                break;
            }

    }
    cout << counter;
    return 0;
}