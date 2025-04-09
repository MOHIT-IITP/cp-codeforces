#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
  int x , y, x1, y1;
  cin>>x>>y>>x1>>y1;
  int totalx = 0, totaly = 0;
  totalx += x;
  totalx -= x1;
  totaly += y;
  totaly -= y1;
  cout<<totalx<<" "<<totaly;
  
}

