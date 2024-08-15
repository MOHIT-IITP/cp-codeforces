#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD1 998244353
#define MOD 1000000007 
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
  /*int n, cnt = 0,i=1,m=1;*/
  /*cin>>n;*/
  /*while(m<=n){*/
  /*  m = ((i*i) + i)/2;*/
  /*  if(m>n) break;*/
  /*  n = n-m;*/
  /*  cnt++;*/
  /*  i++;*/
  /*}*/
  /*cout<<cnt<<endl;*/

  int n;
  cin>>n;
  ll sum=0;
  ll level=0;
  while(sum<n){
    sum+=level;
    level++;
    n-=sum;
  }
  cout<<level-1<<endl;
}

int main(){
  solve();
  return 0;
}
