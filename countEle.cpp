// Count the number of elements strictly greater than x.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    int x = 25;
    int count = 0;
    for(int i=0; i<v.size(); i++){
        if(v[i] > x){
            count++;
        }
    }
    cout<<count;
}