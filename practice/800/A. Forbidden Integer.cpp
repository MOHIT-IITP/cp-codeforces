// MOHIT-IITP template
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define MOD 1000000007

void solve() {
   long long n, k, x;
        cin >> n >> k >> x;

        if (x != 1) {
            cout << "YES\n";
            cout << n << "\n";
            for (int i = 0; i < n; i++) cout << 1 << " ";
            cout << "\n";
        } 
        else if (k == 1 || (k == 2 && n % 2 == 1)) {
            cout << "NO\n";
        } 
        else {
          if(n % 2 == 0 ){
            cout<<"YES"<<endl;
            cout<<n/2<<endl;
            for(int i = 0 ; i<n/2; i++){
              cout<<2<<" ";
            }
            cout<<endl;
          }
          else{
            if(k>=3){
              cout<<"YES"<<endl;
              cout<<n/2 <<endl;
              for(int i =0; i<n/2-1; i++){
                cout<<2<<" ";
              }
              cout<<3<<endl;
            }else{
              cout<<"NO"<<endl;
            }
          }
        }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
