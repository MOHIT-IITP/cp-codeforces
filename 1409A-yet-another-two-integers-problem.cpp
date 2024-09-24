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
    ll a, b;
    cin>>a>>b;
    ll sub = 0, sum = 0 , div = 0, mod = 0;
    if(b<a){
        swap(a,b);
    }
    sub = b - a;
    div = sub / 10;
    mod = sub % 10;
    sum = div;
    if(mod > 0){
        sum++;
    }
    cout<<sum<<endl;
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
