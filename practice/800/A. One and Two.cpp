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
  unordered_map<int, int> mp;
  for(auto &x: a){
    cin>>x;
    mp[x]++;
  }
  int currTwo = 0;
  if(mp[2] % 2 != 0){
    cout<<-1<<el;
  }else{
    int half = mp[2];
    half = half/2;
    for(int i=0 ; i<n ; i++){
      if(a[i] == 2)currTwo++;
      if(currTwo == half){
        cout<<i+1<<el;
        break;
      }
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
