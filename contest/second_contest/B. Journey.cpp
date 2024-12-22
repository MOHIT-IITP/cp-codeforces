// Done Successfully 
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, a, b, c;
        cin >> n >> a >> b >> c;
        
        ll total = a + b + c;
        
        ll fullCycles = n / total;
        
        ll covered = fullCycles * total;
        
        ll day = fullCycles * 3;
        
        n -= covered;
        
        if(n==0){
            cout<< day <<endl;
        } else if(n <= a) {
            cout << day + 1 << endl;
        } else if (n <= a + b) {
            cout << day + 2 << endl;
        } else {
            cout << day + 3 << endl;
        }
    }
    return 0;
}

