// MOHIT-IITP template
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007

int main() {
    ll n , m;
    cin>>n>>m;
    vector<ll> vec;
    vector<ll> vec1;
    for(int i=0;i<n;i++){
        ll x; 
        cin>>x;
        vec.pb(x);
    }
    for(int i=0;i<n;i++){
        ll x; 
        cin>>x;
        vec1.pb(x);
    }
    int cnt = 0;
    while(1){
        for(int i=0;i<n;i++){
            if(vec1[i] >= vec[i]){
                vec1[i] -= vec[i];
            }
            else{
                m = m-(vec1[i]-vec[i]);
                vec1[i] = 0;
            }
        }
        if(m>=0){
            cnt++;
        }else{
            break;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
