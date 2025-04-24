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
        vector<char> vec(n);
        for(int i =0;i<n;i++){
            cin>>vec[i];
        }
        int boy=0, girl = 0;
        for(auto it : vec){
            if(it == 'B'){
                boy++;
            }else{
                girl++;
            }
            if(boy > 2 * girl ){
                cout<<boy<<endl;
            }
        }
        if(boy == girl){
            cout<<n<<endl;
        }
    }
    return 0;
}
