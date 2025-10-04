// MOHIT-IITP template
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define MOD 1000000007

void solve() {
  int a, b, c;cin>>a>>b>>c;
  if(a > b){
    cout<<"First"<<endl;
  }else if(b > a){
    cout<<"Second"<<endl;
  }else{
    if(c % 2 == 0){
      cout<<"Second"<<endl;
    }else{
      cout<<"First"<<endl;
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
