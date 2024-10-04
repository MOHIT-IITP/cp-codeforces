// MOHIT-IITP template
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007

void solve(){
    string s;
    cin>>s;
    int n = s.length();
    int zero = 0, even = 0, sum = 0;
    for(int i=0;i<n;i++){
        int temp = s[i] - '0';
        sum += temp;
        if(temp == 0){
            zero++;
        }
        if(temp %2 ==0){
            even++;
        }
    }
    if((sum % 3 == 0 && zero >0) && even >= 2){
        cout<<"red"<<endl;
    }else{
        cout<<"cyan"<<endl;
    }

}

int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
