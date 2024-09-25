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
    ll x;
    cin>>x;
    if(x % 2 != 0){
        cout<<((x-1)/2)<<endl;
    }else{
        cout<<((x/2)-1)<<endl;
    }
}

int main() {
  fast;
  int t;
  cin>>t;
  while(t--){
      solve();
  }
  return 0;
}
