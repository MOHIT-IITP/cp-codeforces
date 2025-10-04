// MOHIT-IITP template
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define MOD 1000000007

void solve() {
  int m;cin>>m;
  vector<int> a;
  for(int i=0; i<m ; i++){
    int x;cin>>x;
    if( i && a.back() > x){
      a.pb(1);
    }
    a.pb(x);
  }

  cout<<a.size()<<endl;
  for(auto it : a){
    cout<<it<<" ";
  }
  cout<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
