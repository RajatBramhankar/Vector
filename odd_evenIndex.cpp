//  Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed values by 10.
#include<iostream>
#include<vector>
using namespace std;

void increment(vector<int>& v1){
    for(int i=0; i<v1.size(); i++){
        if(i%2 == 0){
            v1[i] += 10;
        }
        else{
            v1[i] *= 2;
        }
    }

    for(int i=0; i<v1.size(); i++){
        cout<<v1[i]<<" ";
    }
}



int main(){
    vector<int> v;

    int n;
    cout<<"enter the size of vector: ";
    cin>>n;

    cout<<"enter the elements in vector: ";
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<endl;
    increment(v);
}