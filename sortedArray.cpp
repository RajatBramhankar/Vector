#include<iostream>
#include<vector>
using namespace std;

void sorted(vector<int> v1){
    bool flag = true;   // consider vector is sorted

    for(int i=1; i<v1.size()-1; i++){
        if(v1[i] > v1[i+1]){
            flag = false;
            break;
        }
    }

    if(flag == true){
        cout<<"Vector is sorted";
    }
    else{
        cout<<"Vector is unsorted";
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

    sorted(v);
}