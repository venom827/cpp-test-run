#include <iostream>
#include <vector>
#include <string>
using namespace std;

int index(vector<int> v){
    int num;
    for (int i=0;i<v.size()-1;i++){
        for (int j=i+1;j<v.size();j++){
            if (v[i]==v[j]){
                num = v[i];
                
            }
    }
   }
   for (int i=0;i<v.size();i++){
        if (v[i]!=num){
            return i+1;
        }
   }
   
}

int main(){
    
    vector<int> result;
    string t;
    getline(cin>>ws,t);
    int t2 = stoi(t);
    for (int i=0;i<t2;i++){
        string n;
        getline(cin>>ws,n);
        int n2 = stoi(n);
        vector<int> v;
        
        for (int j=0;j<n2;j++){
            int values;
            cin>>values;
            v.push_back(values);

        }
        int counter = index(v);
        result.push_back(counter);
    }

    for (int i=0;i<result.size();i++){
            cout<<result[i]<<endl;
    }


    return 0;
}