#include<iostream>
using namespace std;
 
int main(){
    string num;
    cin>>num;
     for(int i = 0; i < num.size(); i++) {
        int digit = num[i] - '0';
 
        if(i == 0 && digit == 9) {
            continue;
        }
 
        if(9 - digit < digit) {
            num[i] = (9 - digit) + '0';
        }
    }
    cout<<num<<"\n";
}