#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    int t=0;
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            t=1;
        }
    }
    if(t==0){
        cout<<"easy"<<"\n";
    }
    else{
        cout<<"hard"<<"\n";
    }
}