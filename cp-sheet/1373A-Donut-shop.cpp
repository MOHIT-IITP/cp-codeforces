#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD1 998244353
#define MOD 1000000007 
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
  ll a, b, c;
  cin>>a>>b>>c;
  if(a<c){
    cout<<1<<" ";
  }else{
    cout<<-1<<" ";
  }
  if(a*b > c){
    cout<<b;
  }else{
    cout<<-1;
  }
  cout<<"\n";
}

int main(){
  fast;
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}
