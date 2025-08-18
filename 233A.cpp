#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    if (n%2 == 0){
        for (int i = 1; i <= n; i++){
            int counter = 0;
            if (i%2 == 0){
                counter = i-1;
            }
            else{
                counter = i+1;
            }
            cout << counter << " ";
        }
    }
    else{
        cout << -1;
    }


    return 0;
}