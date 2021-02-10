//
// Created by aryan on 10-02-2021.
//
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool isPrime(int n){

    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}
int main(){
    ll t,x,y;
    cin>>t;
    while(t--){
        ll count=0;
        cin>>x>>y;
        for(int i=1;i<=x;i++) {
            if (isPrime(i)) {
                count++;
            }
        }
        if(count<y){
            cout<<"Chef"<<endl;
        }
        else{
            cout<<"Divyam"<<endl;
        }
    }

    return 0;
}