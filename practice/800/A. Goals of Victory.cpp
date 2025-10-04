// MOHIT-IITP template
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define MOD 1000000007

void solve() {
    int n;cin>>n;
    vector<int> vec(n-1);
    for(int i=0; i<n-1 ; i++) cin>>vec[i];
    int ans =  accumulate(vec.begin(), vec.end(), 0);
    cout<<-ans<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
