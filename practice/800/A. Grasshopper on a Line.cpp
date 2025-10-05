// MOHIT-IITP template
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define MOD 1000000007

void solve() {
  int x;cin>>x;
  int k;cin>>k;
  vector<int> a;

  if(x % k != 0){
    cout<<1<<endl;
    cout<<x<<endl;
  }else{
    int temp = x;
    cout<<2<<endl;
    cout<<temp-1<<" ";
    temp--;
    cout<<x-temp<<endl;
  }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
