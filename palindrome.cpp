#include<iostream>
#include<vector>
using namespace std;

void palindrome(vector<int>& v1){
    bool flag = true;
    for(int i=0,j=v1.size()-1; i<j; i++,j--){
        if(v1[i] != v1[j]){
            flag = false;
            break;
        }
    }
    
    if(flag == true){
        cout<<"Vector is a palindrome";
    }
    else{
        cout<<"Vector is not a palindrome";
    }
}


int main(){
    vector<int> v;

    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    palindrome(v);

}