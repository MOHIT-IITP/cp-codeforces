#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD1 998244353
#define MOD 1000000007 
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
  int n;
  string s;
  cin>>n;
  cin>>s;
  int k=2;
  for(int i=0;i<n;){
    cout<<s.at(i);
    i=i+k;
    k++;
  }
}

int main(){
  fast;
  solve();
  return 0;
}
