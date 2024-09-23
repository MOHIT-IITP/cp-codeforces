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
  vector<int> vec;
  for(int i =0;i<4;i++){
    int x;
    cin>>x;
    vec.pb(x);
  }
  sort(vec.begin(), vec.end());
  for(int i =0;i<3;i++){
    cout<<vec[3]-vec[i]<<" ";
  }
}

int main() {
  fast;
  solve();
  return 0;
}
