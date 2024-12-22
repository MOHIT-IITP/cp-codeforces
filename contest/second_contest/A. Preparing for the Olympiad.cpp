// MOHIT-IITP template
// done successfully
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vc vector<int>
#define MOD 1000000007

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vc first(n);
        vc second(n);
        for(int i =0;i<n;i++){
            cin>>first[i];
        }
        for(int i =0;i<n;i++){
            cin>>second[i];
        }
        ll total = 0;
        for(int i =0;i<n;i++){
            if(i+1 < n && first[i] > second[i+1]){
                total += first[i];
                total -= second[i+1];
            }
            if(i == n-1){
                total += first[i];
            }
        }
        cout<<total<<endl;
    }
    return 0;
}
