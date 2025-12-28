#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        string s;
        cin>>s;
        long long max=pow(2,n)-1;
        long long  decimalValue = (stoi(s, nullptr, 2)) % pow(2,62);
        cout<<(max-decimalValue)<<endl;
    }




}