// MOHIT-IITP template
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define MOD 1000000007
#define mpi mp<int, int>

int main() {
    ll t;
    cin>>t;
    vi vec(t);
    for(ll i =0;i<t;i++){
        cin>>vec[i];
    }
    sort(vec.begin(), vec.end());
    if(vec[t-3] + vec[t-2] <= vec[t-1]){ cout<<"NO"<<endl;}
    else{
        cout<<"YES"<<endl;
        cout<<vec[t-1]<<" ";
        for(ll i =t - 3; i >=  0 ; --i){
            cout<<vec[i]<< " ";
        }
        cout<<vec[t-2]<<endl;
    }
    return 0;
}
