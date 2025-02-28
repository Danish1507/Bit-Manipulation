#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int ans=0;
    int n=s.size();
    int i=n-1;
    int j=0;
    while(j<n){
        if(s[j]=='1'){
            // ans+=pow(2,i);
            ans += (1<<(n-i-1)); // this line is very important keep this in mind
        }
        i--;
        j++;
    }
    cout<<ans;
    return 0;
}