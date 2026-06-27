#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int t=1;
        int remainder;
        vector<int>arr;
        while(n!=0){
            remainder = n%10;
            arr.push_back(t * remainder);
            t*=10;
            n=n/10;
        }
        int count=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=0){
                count++;
            }
        }
        cout<<count<<"\n";
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=0){
                cout<<arr[i]<<" ";
            }
        }
        cout<<"\n";
    }
}