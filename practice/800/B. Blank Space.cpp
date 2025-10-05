// MOHIT-IITP template
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define MOD 1000000007

void solve() {
  int n;cin>>n;
  vector<int> a(n);
  for(auto & x: a) cin>>x;
  int zero = 0 ;
  int maxZero = 0;
  for(auto it: a){
    if(it == 0){
      zero++;
    }else{
      maxZero = max(zero, maxZero);
      zero = 0;
    }
  }
  maxZero = max(zero, maxZero);
  cout<<maxZero<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
