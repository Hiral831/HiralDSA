#include<bits/stdc++.h>
using namespace std;

int nthTermAP(int n); 

int main(){
int n;
cin >> n;
int ans = nthTermAP(n);
cout <<"ans " << ans;
  return 0;

}

int nthTermAP(int n){
  int ans = 3 * n + 7;
  return ans;
  }