#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD1 998244353
#define MOD 1000000007 
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
  string s;
  cin>>s;
  int left = 0;
  int right = 0;
  for(int i =0;i<s.size();i++){
    if(s[i]=='1'){
      left=i;
    }
    if(s[i]=='1' && i!=left){
      right=i;
    }
  }
  cout<<left<<" "<<right<<endl;
  /*if(left >0 && right>>0 )*/
  /*{*/
  /*  cout<<right-left-1<<endl;*/
  /*}*/
  /*else{*/
  /*  cout<<right<<endl;*/
  /*}*/

}

int main(){
  fast;
  /*int t;*/
  /*cin>>t;*/
  /*while(t--){*/
  /*  solve();*/
  /*}*/
  solve();
  return 0;
}
