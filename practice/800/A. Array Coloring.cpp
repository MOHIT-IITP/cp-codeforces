// MOHIT-IITP template
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define MOD 1000000007

void solve() {
  int n;cin>>n;
  vector<int> a(n);
  for(auto &x : a) cin>>x;
  int oddCount = 0 ;
  for(auto it : a){
    if(it % 2 != 0) oddCount++;
  }
  if(oddCount % 2 != 0){
    cout<<"NO"<<endl;
  }else{
    cout<<"YES"<<endl;
  }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
