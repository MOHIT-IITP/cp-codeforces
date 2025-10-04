// MOHIT-IITP template
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define MOD 1000000007

void solve() {
  int n;cin>>n;
  vector<int> vec(n);
  for(auto &x : vec) cin>>x;

  vector<int> temp(vec.begin(), vec.end());
  sort(temp.begin(), temp.end());

  if(temp != vec){
    cout<<"0"<<endl;
  }else{
    int minDiff = INT_MAX;
    for(int i = 0 ; i < n-1 ; i++){
      int currDiff = vec[i+1] - vec[i];
      minDiff = min(minDiff, currDiff);
    }
    int ans = (minDiff / 2) + 1;
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
