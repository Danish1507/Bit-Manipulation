#include <bits/stdc++.h>

using namespace std;
 int main(){
    int n;
    string s;
    cin>>s>>n;
    unordered_map<string,int> mp;
    mp["sun"] = 1;
    mp["mon"] = 7;
    mp["tue"] = 6;
    mp["wed"] = 5;
    mp["thu"] = 4; 
    mp["fri"] = 3;
    mp["sat"] = 2;
    int ans = 0;
    if(n-mp[s]>=0){
        ans++;
    }
    ans+=(n-mp[s])/7;

    cout<<ans;

    return 0;

 }