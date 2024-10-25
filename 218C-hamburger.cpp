#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

#define ll long long
ll nb,ns,nc,pb,ps,pc,fb,fs,fc, r;
bool ok(ll x)
{
    ll need_b = x*fb, need_s = x*fs, need_c = x*fc;
    need_b -= nb , need_s -= ns, need_c -= nc;

    need_b = max(need_b,0LL), need_s = max(need_s,0LL) , need_c =max(need_c,0LL);

    ll cost = need_b*pb + need_s*ps + need_c*pc;

    return cost<=r;
}

int main()
{
    optimize();
    string s;
    cin>>s;

    ll i;
    cin>>nb>>ns>>nc>>pb>>ps>>pc>>r;
    
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='B') fb++;
        if(s[i]=='S') fs++;
        if(s[i]=='C') fc++;
    }

    ll l = 0, r = 1e15;
    while(r-l>1)
    {
        ll mid = (l+r)>>1;

        if(ok(mid)) l =mid;
        else r =mid;
    }
    if(ok(r)) cout<<r<<endl;
    else cout<<l<<endl;

    return 0;
}
