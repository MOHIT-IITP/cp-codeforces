// MOHIT-IITP
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD1 998244353
#define MOD 1000000007 
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
  int n ;
  cin>>n;
  string s;
  cin>>s;
  bool found = false;
  string ans = "";
  for(int i=0; i<n-1;i++){
    if(s[i] != s[i+1]){
      found = true;
      ans += s[i];
      ans += s[i+1];
      break;
    }
  }
  if(found){
    cout<<"YES"<<endl;
    cout<<ans<<endl;
  }else{
    cout<<"NO"<<endl;
  }
}

int main(){
  fast;
  solve();
  return 0;
}
