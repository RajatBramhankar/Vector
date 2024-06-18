#include<iostream>
#include<vector>
using namespace std;

void difference(vector<int>& v1){
    int sumOdd, sumEven;
    sumOdd = sumEven = 0;

    for(int i=0; i<v1.size(); i++){
        if(i%2 == 0){
            sumEven += v1[i];
        }

        else{
            sumOdd += v1[i];
        }
    }
    
    cout<<"Difference is: "<<sumEven - sumOdd;
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

    difference(v);

}