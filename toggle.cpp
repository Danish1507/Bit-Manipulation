#include <bits/stdc++.h>

using namespace std;
void setbit(int &ans, int pos){
    ans = ans | (1<<pos);
}
int main(){
    int n;
    cin>>n;
    int ans=0;
    int x= log2(n)+1;

    for(int i=0; i<x; i++){
      if(((n)&(1<<i)) ==0){
        // 1
        setbit(ans,i);
      }
    }
    cout<<ans;
    return 0;
}