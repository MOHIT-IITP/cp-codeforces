// MOHIT-IITP template
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define MOD 1000000007

void solve() {
  int n;cin>>n;
  vector<int> vec(n);
  unordered_map<int,int> mp;
  bool f = true;
  for(int i = 0 ; i < n ; i++) cin>>vec[i];
  for(auto it : vec){
    mp[it]++;

    if(mp.size() > 2){
      f = false;
      break;
    }
  }

  if(mp.size() == 2){
    int f1 = begin(mp)->second;

    if(f1 != n/2 && f1 != (n+1)/2){
      f = false;
    }
  }
  if(f) cout<<"Yes"<<endl;
  else cout<<"No"<<endl;


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
