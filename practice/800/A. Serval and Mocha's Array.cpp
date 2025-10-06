// MOHIT-IITP template
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define el endl
#define pb push_back
#define MOD 1000000007

void solve() {
  int n;cin>>n;
  vector<int> a(n);
  bool f = false;
  for(auto &x : a) cin>>x;
  for(auto it : a){
      for(auto kit: a){
          if(gcd(it, kit) <= 2){
              f = true;
              break;
          }
      }
  }
  if(f){
      cout<<"Yes"<<el;
    }else{
        cout<<"No"<<el;
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
