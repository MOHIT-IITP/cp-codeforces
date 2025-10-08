// MOHIT-IITP template
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define el endl
#define pb push_back
#define MOD 1000000007

void solve() {
  int n;cin>>n;
  vector<int> a(n);

  for(auto &x: a) cin>>x;
  sort(a.begin(), a.end());

  bool f = true;

  if(a[0] == a[n-1]){
    cout<<"NO"<<el;
  }else{
    cout<<"YES"<<el;
    cout<<a[n-1]<<" ";
    for(int i = 0 ; i < n-1;i++){
      cout<<a[i]<<" ";
    }
    cout<<el;
  }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
