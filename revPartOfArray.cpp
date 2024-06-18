#include<iostream>
#include<vector>
using namespace std;

void revPart(vector<int>& a){
    for(int i=1, j=a.size()-2; i<=j; i++, j--){
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

    int n; // size
    cin>>n;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    display(v);
    cout<<endl;
    revPart(v);
    display(v);

}