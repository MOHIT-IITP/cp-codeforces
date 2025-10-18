// MOHIT-IITP template
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define el endl
#define pb push_back
#define MOD 1000000007

void solve() {
    int n,k;cin>>n>>k;
    vector<char>a(n);
    for(auto &x : a) cin>>x;

    unordered_map<char,int> mp;
    for(auto it : a){
        mp[it]++;
    }

    int countOdd = 0 ;
    for(auto [key, value]: mp){
        countOdd += value % 2;
    }
    if(countOdd-k == 1){
        cout<<"YES"<<el;
    }else if(countOdd > k){
        cout<<"NO"<<el;
    }else{
        cout<<"YES"<<el;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
