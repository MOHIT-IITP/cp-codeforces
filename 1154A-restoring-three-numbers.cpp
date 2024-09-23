// MOHIT-IITP
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD1 998244353
#define MOD 1000000007
#define fast                                                                   \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);

void solve() {
  int a[4];
  for(int i =0;i<4;i++){
    cin>>a[i];
  }
  for(int i =0;i<3;i++){
    cout<<a[3]-a[i];
  }
}

int main() {
  fast;
  solve();
  return 0;
}
