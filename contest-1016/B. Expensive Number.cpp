#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        int count = 0;
        if(a.size() == 1){
            cout<<0<<endl;
        }else{
            for(auto it : a){
                if(int(it) != 0 ){
                    count++;
                }
            }
            if(count == a.size()){
                count--;
            }
            cout<<count<<endl;
        }
    }
    return 0;
}
