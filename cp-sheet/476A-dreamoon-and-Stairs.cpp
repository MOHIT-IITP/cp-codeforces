#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD1 998244353
#define MOD 1000000007 
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
  int n, m;
  cin>>n>>m;
  int res = 0;
  if(m > n){
    res = -1;
  }else{
    if(n % 2){
      res = n/2 + 1;
    }
    else{
      res = n/2;
    }
    while(res % m > 0){
      res++;
    }
  }
  cout<<res;
}

int main(){
  fast;
  solve();
  return 0;
}
