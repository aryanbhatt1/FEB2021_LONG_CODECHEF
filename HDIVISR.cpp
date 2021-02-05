#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int number;
    vector<int> arr;
    cin>>number;
    for(int i =1; i<=number; i++){
        if(number%i==0 & i>0 & i<=10){
            arr.push_back(i);
        }
    }
    cout<<*max_element(arr.begin(), arr.end())<<endl;
    return 0;
}
