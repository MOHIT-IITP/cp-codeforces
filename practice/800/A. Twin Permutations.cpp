// MOHIT-IITP template
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define el endl
#define pb push_back
#define MOD 1000000007

void solve() {
  int n; cin>>n;
  vector<int> a(n);
  for(auto &x : a)cin>>x;

  vector<int> b;
  for(int i=0 ; i<n ; i++){
    b.pb(n + 1 - a[i]);
  }
  for(auto it : b) cout<<it<<" ";
  cout<<el;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
