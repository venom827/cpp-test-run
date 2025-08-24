#include <iostream>
#include <vector>
#include<string>
using namespace std;
//My solution to 2132A. Used two pointers to simply insert pnts where I wanted them to. I increment value
//of right_pointer in both loops bcz size of a changes in both places
void task(string &a, string b, string c){
    int right_pointer = a.length();
    int left_pointer = 0;
    for (int i=0;i<c.length();i++){
        if (c[i] == 'D'){
            a.insert(right_pointer++,1,b[i]);
        }
        else if (c[i] == 'V'){
            a.insert(left_pointer,1,b[i]);
            right_pointer++;
        }
    }
}

int main(){
    int t ;
    
    int n,m;
    string a,b,c;
    cin >> t;
    vector <string> values;
    for (int i=0;i<t;i++){
        cin >> n;
        // cin >> ws;
        cin >> a;
        // cin >> ws;
        cin >> m;
        // cin >> ws;        
        cin >> b;
        // cin >> ws;
        cin >> c;
        // cin >> ws;

        task(a,b,c);
        values.push_back(a);

    }


    for (string i:values){
        cout << i <<endl;
    }
    return 0;
}