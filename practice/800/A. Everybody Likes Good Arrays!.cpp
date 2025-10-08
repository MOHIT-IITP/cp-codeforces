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

  int countPair=0;
  for(int i = 0; i < n-1; i++){
    if(a[i] % 2 == 0 && a[i+1] % 2 == 0){
      countPair++;
    }else if(a[i] % 2 != 0 && a[i+1] % 2 != 0){
      countPair++;
    }
  }
  cout<<countPair<<el;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
