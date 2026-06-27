#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
int main() {
 
    int n, k;
    cin >> n >> k;
 
    vector<int> arr(n);
 
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
 
    vector<pair<int,int>> v;
 
    for(int i = 0; i < n; i++) {
        v.push_back({arr[i], i + 1});
    }
 
    sort(v.begin(), v.end());
 
    int sum = 0;
    vector<int> ans;
 
    for(int i = 0; i < n; i++) {
 
        if(sum + v[i].first <= k) {
            sum += v[i].first;
            ans.push_back(v[i].second);
        }
        else {
            break;
        }
    }
 
    cout << ans.size() << "\n";
 
    for(int x : ans) {
        cout << x << " ";
    }
}