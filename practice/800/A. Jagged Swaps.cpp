// MOHIT-IITP template
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define MOD 1000000007

void solve() {
    int n;cin>>n;
    vector<int> vec(n);
    for(int i = 0 ; i < n ; i++) cin>>vec[i];

    if(vec[0] != 1){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
