#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD1 998244353
#define MOD 1000000007 
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
  int n, t;
  cin >> n >> t;
  vector<int> c(n);
  int p = 0;
  for( int i = 0;i < n; i++) cin >> c[i];
  while(p < t - 1) p += c[p];
  if(p == t - 1) cout <<  " YES" << endl;
  else cout << "NO" << endl;
}

int main(){
  fast;
  solve();
  return 0;
}
