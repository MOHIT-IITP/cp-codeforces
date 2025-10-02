#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD1 998244353
#define MOD 1000000007 
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
  int step = 10;
  int res = 0;
  string num;
  cin>>num;
  int first = num[0]-'0';
  for(int i =0;i<first-1;i++){
    res+=step;
  }
  for(int j=1;j<=num.size();j++){
    res+=j;
  }
  cout<<res<<endl;
}

int main(){
  fast;
  int t ;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}
