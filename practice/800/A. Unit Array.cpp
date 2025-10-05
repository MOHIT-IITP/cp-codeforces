// MOHIT-IITP template
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define el endl
#define MOD 1000000007

void solve() {
  int n;cin>>n;
  vector<int> a(n);
  for(auto & x: a) cin>>x;

  int neg = 0, pos = 0;
  for(auto it : a){
    if(it < 0 ){
      neg++;
    }else{
      pos++;
    }
  }

  int ans = 0 ;

  while(neg > pos){
    neg--;
    pos++;
    ans++;
  }
  while(neg % 2 != 0 ){
    neg--;
    pos++;
    ans++;
  }
  cout<<ans<<el;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
