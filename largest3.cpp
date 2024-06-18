// WAP to find the largest three elements in the array.

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

void findLargest(vector<int> & v1){
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int max3 = INT_MIN;

    for(int i=0; i<v1.size(); i++){
        if(v1[i] > max1) max1 = v1[i];
    }

    for(int i=0; i<v1.size(); i++){
        if(v1[i] > max2 &&  v1[i] != max1) max2 = v1[i];
    }

    for(int i=0; i<v1.size(); i++){
        if(v1[i] > max3 && v1[i] != max1 && v1[i] != max2) max3 = v1[i];
    }

    cout<<max1<<" "<<max2<<" "<<max3;
}
int main(){
    vector<int> v;
    
    int n;
    cout<<"enter the size of vector: ";
    cin>>n;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    findLargest(v);

}