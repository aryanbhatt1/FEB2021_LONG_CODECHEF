//
// Created by aryan on 08-02-2021.
//
#include <bits/stdc++.h>
#include <string>
using namespace std;

int common_element(vector<char>v1, vector<char>v2){
    set<char> s(v1.begin(),v1.end());
    int result = 0;
    for(auto x:v2){
        if(s.find(x)!=s.end())
            result++;
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<string,vector<char>>m;
        map<string,vector<char>>::iterator i1,j1;
        string s;
        for(int i=0; i<n;i++){
            cin>>s;
            if(s.length()>0)
                m(s.substr(1).push_back(s[0]));

        }
        int result=0;
        for(auto i :m){
            for(auto j:m){
                if(i.first!=j.first){
                    int c = common_element(i.second,j.second);
                    result+=(i.second.size()-c)*(j.second.size()-c);
                }
            }
        }
        cout<<result<<endl;
    }
    return 0;
}