// MOHIT-IITP template
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define el endl
#define pb push_back
#define MOD 1000000007

void solve() {
  int n; cin>>n;
  int k; cin>>k;
  string s;cin>>s;

  map<char, int> mp;
  for(auto it : s){
    mp[it]++;
  }

  for(int i = 0 ; i < mp.size() ; i++){
    auto it = prev(mp.end()-i);
    int second = it->second;
    k -= second;
    if(k<=0){
      break;
    }
  }

  int count = 0 ;
  for(auto [key, value] : mp){
    if(value % 2 != 0 ){
      count++;
    }
  }
  if(count != 1){
    cout<<"No"<<el;
  }else{
    cout<<"Yes"<<el;
  }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
