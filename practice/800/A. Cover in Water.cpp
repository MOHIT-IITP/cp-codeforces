// MOHIT-IITP template
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define MOD 1000000007

void solve() {
  int n; cin>>n;
  string s;cin>>s;
  int ans = 0 ;

  bool f = true;
  for(int i = 0 ; i < n ; i++){
    if(i>0 && i < n-1){
      if(s[i] == '.' && s[i-1] == '.' && s[i+1] == '.'){
        cout<<2<<endl;
        f = false;
        break;
      }
    }
    if(s[i] == '.'){
      ans++;
    }
  }
  if(f){
    cout<<ans<<endl;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t; cin >> t;
  while (t--) solve();
  return 0;
}



// # # . . . . # = 2 
//
