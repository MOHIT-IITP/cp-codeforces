// MOHIT-IITP template
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define MOD 1000000007


void solve() {

  int n;cin>>n;
  int m;cin>>m;

  string x;cin>>x;
  string s;cin>>s;

  int count = 0;
  bool f = false;  

    if(x.find(s) != string::npos){
      f = true;
    }


    for(int i = 0 ; i < 6;i++){

      if(x.find(s) != string::npos){
        cout<<i<<endl;
        f = true;
        break;
      }

      x = x + x;
  }

  if(!f){
    cout<<-1<<endl;
  }
}


int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t; cin >> t;
  while (t--) solve();
  return 0;
}
