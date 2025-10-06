// MOHIT-IITP template
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define el endl
#define pb push_back
#define MOD 1000000007

void solve() {
  int n;cin>>n;
  string s;cin>>s;

  int ans = 0;
  for(int i = 0 ; i < n/2; i++){
    if(s[i] != s[n-i-1]){
      ans++;
    }else{
      break;
    }
  }
  cout<<n-2 * ans<<el;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
