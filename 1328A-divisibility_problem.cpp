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
    int div = 0, pls= 0;
    if(a % b == 0){
        cout<<0<<endl;
    }
    div = a/b;
    pls = (div+1)*b;
    cout<<pls-a<<endl;
}

int main() {
  fast;
  int t;
  cin>>t;
  while(t--){
          ll a, b;
    cin>>a>>b;
    int div = 0, pls= 0;
    if(a % b == 0){
        cout<<0<<endl;
        continue;
    }
    div = a/b;
    pls = (div+1)*b;
    cout<<pls-a<<endl;
  }
  return 0;
}
