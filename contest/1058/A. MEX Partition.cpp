// MOHIT-IITP template
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define el endl
#define pb push_back
#define MOD 1000000007

void solve() {
  int n;cin>>n;
  vector<int> b(105,0);
  vector<int> a(n);
  for(auto & x: a) {
    cin>>x;
    b[x]=1;
  }
  for(int i = 0; i < 105 ;i++){
    if(b[i] == 0 ){
      cout<<i<<endl;
      break;
    }
  }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
