// MOHIT-IITP
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD1 998244353
#define MOD 1000000007
#define fast                                                                   \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);

void solve() {
}

int main()
{
    fast;
    int n,ans=0;
    int a[]={5,4,3,2,1};
    cin>>n;
    for(int i=0; i<5; i++)
    {
        ans+=n/a[i];
        n=n%a[i];
    }
    cout<<ans<<endl;
    return 0;
}
