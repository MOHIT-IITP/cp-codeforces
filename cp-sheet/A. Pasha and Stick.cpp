// MOHIT-IITP template
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007

int solve(){
    int n;
    cin>>n;
    if(n % 2 != 0){
        return 0;
    }
    int firsthalf = n / 2;
    int half = firsthalf / 2;
    int ans = 0;
    if(firsthalf % 2 == 0){
        ans = half-1;
    }else{
        ans = half;
    }
    return ans;

}

int main() {
    int res = solve();
    cout<<res;
    return 0;
}
