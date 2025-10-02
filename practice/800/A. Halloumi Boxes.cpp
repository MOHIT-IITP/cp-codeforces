#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;cin>>t;
  while(t--){

    int n;cin>>n;
    int k;cin>>k;
    vector<int> vec(n);

    for(int i = 0 ; i < n ;i++){
      cin>>vec[i];
    }

    vector<int> sortedVec = vec;
    sort(sortedVec.begin(), sortedVec.end());

    if(k == 1 ){
      if(vec == sortedVec){
        cout<<"YES"<<endl;
      }else{
        cout<<"NO"<<endl;
      }
    }else{
        cout<<"YES"<<endl;
    }
  }
  return 0;
}

// dry run  1 
// [1,2,3,4,5]
// 10 3 830 14
// 3 10 14 830

