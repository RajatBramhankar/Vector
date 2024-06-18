#include<iostream>
#include<vector>
using namespace std;

void unique(vector<int>& v1){
    for(int i=0; i<v1.size(); i++){
        bool flag = true;
        
        for(int j=0; j<v1.size(); j++){
            if(j == i) continue;
            if(v1[i] == v1[j]){
                flag = false;
                break;
            }
        }
        if(flag == true){
            cout<<v1[i];
            break;
        }
    }
}

int main(){
    vector<int> v;

    int n;
    cout<<"Enter the size of vector: ";
    cin>>n;

    cout<<"Enter the elements in vector: ";
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    unique(v);
}