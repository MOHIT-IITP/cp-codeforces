// MOHIT-IITP template
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> vec(n);
        for(int i =0;i<n;i++ ){
            cin>>vec[i];
        }
        int total = 0;
        for(auto it : vec){
            if(it > 1){
                total += it-1;
            }
        }
        cout<<total<<endl;
    }
    return 0;
}
