#include<iostream>
#include<vector>
using namespace std;

void revPart(vector<int>& a, int s, int k){
    for(int i=s, j=k; i<=j; i++, j--){
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

    int size = v.size();
    int k;
    cin>>k;

    display(v);
    cout<<endl;
    
    revPart(v, 0, size-k-1);
    revPart(v, size-k, size-1);
    revPart(v, 0, n-1);
    display(v);

}