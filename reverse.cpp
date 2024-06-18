// Write a program to reverse the array without using any extra array.

#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int>& a){
    // int i=0;
    // int j = v.size()-1;
    // while(i <= j){
    //     int temp = v[i];
    //     v[i] = v[j];
    //     v[j] = temp;
    //     i++;
    //     j--;
    // }


    for(int i=0, j=a.size()-1; i<=j; i++,j--){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}

void display(vector<int>& b){
    for(int i=0; i<b.size(); i++){
        cout<<b[i]<<" ";
    }
}

int main(){
    vector<int> v;
    int n;
    cout<<"Enter the size of vector: ";
    cin>>n;

    
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // v.push_back(40);
    // v.push_back(50);

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    display(v);
    cout<<endl;

    // int i=0;
    // int j = v.size()-1;
    // while(i <= j){
    //     int temp = v[i];
    //     v[i] = v[j];
    //     v[j] = temp;
    //     i++;
    //     j--;
    // }


    // for(int i=0, j=v.size()-1; i<=j; i++,j--){
    //     int temp = v[i];
    //     v[i] = v[j];
    //     v[j] = temp;
    // }

    reverse(v);

    display(v);
}